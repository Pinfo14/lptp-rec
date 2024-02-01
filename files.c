//
// Created by emanu on 29/01/2024.
//

#include "files.h"
#include "stdlib.h"
#include "stdio.h"
#include "memory.h"


void loadEquipment(Equipments * equipments) {
    int readSuccess = 0;
    long size; //stores the files size in bytes
    FILE* fp = fopen(FILENAME_EQUIPMENT, "rb");
    if (fp != NULL) { //file already exists
        fseek(fp, 0L, SEEK_END); //moves the file pointer to the last byte, to read its size
        size = ftell(fp);
        if (size != 0) { //only reads from file if it isn't empty
            rewind(fp); //file pointer back to the beginning of the file to begin the reading process
            if (fread(&(equipments->count), sizeof(int), 1, fp) != 1) {
                printf(FAILURE_READING_FILE);
                exit(EXIT_FAILURE);
            }
            if (equipments->count > 0) {
                initAllocEquipment(equipments, equipments->count);
                if (fread(equipments->equipment, sizeof(Equipment), equipments->count, fp) != equipments->count) {
                    printf(FAILURE_READING_FILE);
                    exit(EXIT_FAILURE);
                }

                readSuccess = 1;
            }
        }
        fclose(fp);
    }

    if (!readSuccess) { //file doesn't exist, so it must be created
        fp = fopen(FILENAME_EQUIPMENT, "wb");

        if (fp != NULL) {
            initAllocEquipment(equipments, 1);

        } else {
            printf(FAILURE_CREATING_FILE);
            exit(EXIT_FAILURE);
        }
        fclose(fp);
    }
}

void saveEquipments(Equipments* equipments) {
    FILE* fp = fopen(FILENAME_EQUIPMENT, "wb"); // it overwrites the file used to load the company's data previously
    if (fp == NULL) {
        fprintf(stderr, FAILURE_OVERWRITING_FILE);
        exit(EXIT_FAILURE);
    }

    // Write the total count of equipments
    if (fwrite(&(equipments->count), sizeof(int), 1, fp) != 1) {
        fprintf(stderr, FAILURE_WRITING_FILE);
        exit(EXIT_FAILURE);
    }

    // Write the equipments data
    if (equipments->count > 0) {
        if (fwrite(equipments->equipment, sizeof(Equipment), equipments->count, fp) != equipments->count) {
            fprintf(stderr, FAILURE_WRITING_FILE);
            exit(EXIT_FAILURE);
        }

        // Write maintenance records for each equipment
        for (int i = 0; i < equipments->count; ++i) {
            if (fwrite(equipments->equipment[i].maintenance, sizeof(Maintenance), equipments->equipment[i].num_maintenance, fp) != equipments->equipment[i].num_maintenance) {
                fprintf(stderr, FAILURE_WRITING_FILE);
                exit(EXIT_FAILURE);
            }
        }
    }

    fclose(fp);
}


void loadUser(Users * users) {
    int readSuccess = 0;
    long size; //stores the files size in bytes
    FILE* fp = fopen(FILENAME_USER, "rb");
    if (fp != NULL) { //file already exists
        fseek(fp, 0L, SEEK_END); //moves the file pointer to the last byte, to read its size
        size = ftell(fp);
        if (size != 0) { //only reads from file if it isn't empty
            rewind(fp); //file pointer back to the beginning of the file to begin the reading process
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

    if (!readSuccess) { //file doesn't exist, so it must be created
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

void saveUser(Users * users) {
    FILE* fp = fopen(FILENAME_USER, "wb"); // it overwrites the file used to load the company's data previously
    if (fp == NULL) {
        fprintf(stderr, FAILURE_OVERWRITING_FILE);
        exit(EXIT_FAILURE);
    }

    // Write the total count of equipments
    if (fwrite(&(users->count), sizeof(int), 1, fp) != 1) {
        fprintf(stderr, FAILURE_WRITING_FILE);
        exit(EXIT_FAILURE);
    }

    // Write the equipments data
    if (users->count > 0) {
        if (fwrite(users->users, sizeof(User), users->count, fp) != users->count) {
            fprintf(stderr, FAILURE_WRITING_FILE);
            exit(EXIT_FAILURE);
        }

    }

    fclose(fp);
}
