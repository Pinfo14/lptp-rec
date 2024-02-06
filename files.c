/**
 * @file files.c
 * @author Emanuel Pinto
 * @date 29-10-2024
 * @version 1
 *
 * @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for manage files.
 */


#include "files.h"
#include "stdlib.h"
#include "stdio.h"
#include "memory.h"


void loadEquipment(Equipments* equipments) {
    int readSuccess = 0;
    long size;
    FILE* fp = fopen(FILENAME_EQUIPMENT, "rb");
    if (fp != NULL) {
        fseek(fp, 0L, SEEK_END);
        size = ftell(fp);
        if (size != 0) {
            rewind(fp);
            if (fread(&(equipments->count), sizeof(int), 1, fp) != 1) {
                printf(FAILURE_READING_FILE);
                exit(EXIT_FAILURE);
            }
            if (equipments->count > 0) {
                initAllocEquipment(equipments, equipments->count);
                if (fread(equipments->equipment, sizeof(Equipment), equipments->count, fp) == equipments->count) {
                    for (int i = 0; i < equipments->count; i++) {
                        if (equipments->equipment[i].num_maintenance > 0){
                            initAllocMain(equipments, equipments->equipment[i].num_maintenance);
                            if (fread(equipments->equipment[i].maintenance, sizeof(Maintenance), equipments->equipment[i].num_maintenance, fp) != equipments->equipment[i].num_maintenance) {
                                printf(FAILURE_READING_FILE);
                                exit(EXIT_FAILURE);
                            }
                        }
                    }
                } else {
                    printf(FAILURE_READING_FILE);
                    exit(EXIT_FAILURE);
                }
                readSuccess = 1;
            }
        }
        fclose(fp);
    }

    if (!readSuccess) {
        fp = fopen(FILENAME_EQUIPMENT, "wb");

        if (fp != NULL) {
            initAllocEquipment(equipments, 1);
            initAllocMain(equipments, 1);
        } else {
            printf(FAILURE_CREATING_FILE);
            exit(EXIT_FAILURE);
        }
        fclose(fp);
    }
}

void saveEquipments(Equipments* equipments) {
    FILE* fp = fopen(FILENAME_EQUIPMENT, "wb");
    if (fp == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }
    fwrite(&(equipments->count), sizeof(int), 1, fp);

    fwrite(equipments->equipment, sizeof(Equipment),  equipments->count, fp);

    for (int i = 0; i < equipments->count; i++) {
        fwrite(equipments->equipment[i].maintenance, sizeof(Maintenance), equipments->equipment[i].num_maintenance, fp);
    }

    fclose(fp);
}
void loadUser(Users* users) {
    int readSuccess = 0;
    long size;
    FILE* fp = fopen(FILENAME_USER, "rb");
    if (fp != NULL) { //file already exists
        fseek(fp, 0L, SEEK_END);
        size = ftell(fp);
        if (size != 0) {
            rewind(fp);
            if (fread(&(users->count), sizeof(int), 1, fp) != 1) {
                printf(FAILURE_READING_FILE);
                exit(EXIT_FAILURE);
            }
            if (users->count > 0) {
                initAllocUser(users, users->count);
                if (fread(users->users, sizeof(User), users->count, fp) != users->count) {
                    printf(FAILURE_READING_FILE);
                    exit(EXIT_FAILURE);
                }
                readSuccess = 1;
            }
        }
        fclose(fp);
    }

    if (!readSuccess) {
        fp = fopen(FILENAME_USER, "wb");

        if (fp != NULL) {
            initAllocUser(users, 1);
        } else {
            printf(FAILURE_CREATING_FILE);
            exit(EXIT_FAILURE);
        }
        fclose(fp);
    }
}

void saveUser(Users* users) {
    FILE* fp = fopen(FILENAME_USER, "wb");

    if (fp == NULL) {
        fprintf(stderr, FAILURE_OVERWRITING_FILE);
        exit(EXIT_FAILURE);
    }

    if (fwrite(&(users->count), sizeof(int), 1, fp) != 1) {
        fprintf(stderr, FAILURE_WRITING_FILE);
        exit(EXIT_FAILURE);
    }

    if (users->count > 0) {
        if (fwrite(users->users, sizeof(User), users->count, fp) != users->count) {
            fprintf(stderr, FAILURE_WRITING_FILE);
            exit(EXIT_FAILURE);
        }
    }
    fclose(fp);
}
