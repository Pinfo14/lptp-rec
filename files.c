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
    FILE* fp = fopen(FILENAME_EQUIPMENT, "wb"); //it overwrites the file used to load the company's data previously
    if (fp == NULL) {
        fprintf(stderr, FAILURE_OVERWRITING_FILE);
        exit(EXIT_FAILURE);
    }
    if (fwrite(&(equipments->count), sizeof(int), 1, fp) !=  1) {
        fprintf(stderr, FAILURE_WRITING_FILE);
        exit(EXIT_FAILURE);
    }
    if (equipments->count == 0) {
        fclose(fp);
        return;
    }
    if ((fwrite(equipments->equipment, sizeof(Equipment), equipments->count, fp)) != equipments->count) {
        fprintf(stderr, FAILURE_WRITING_FILE);
        exit(EXIT_FAILURE);
    }

    fclose(fp);
}

void loadMaintenance(Maintenances * maintenances) {
    int readSuccess = 0;
    long size; //stores the files size in bytes
    FILE* fp = fopen(FILENAME_MAINTENANCE, "rb");
    if (fp != NULL) { //file already exists
        fseek(fp, 0L, SEEK_END); //moves the file pointer to the last byte, to read its size
        size = ftell(fp);
        if (size != 0) { //only reads from file if it isn't empty
            rewind(fp); //file pointer back to the beginning of the file to begin the reading process
            if (fread(&(maintenances->count), sizeof(int), 1, fp) != 1) {
                printf(FAILURE_READING_FILE);
                exit(EXIT_FAILURE);
            }
            if (maintenances->count > 0) {
                initAllocMaintence(maintenances, maintenances->count);
                if (fread(maintenances->maintenance, sizeof(Equipment), maintenances->count, fp) != maintenances->count) {
                    printf(FAILURE_READING_FILE);
                    exit(EXIT_FAILURE);
                }

                readSuccess = 1;
            }
        }
        fclose(fp);
    }

    if (!readSuccess) { //file doesn't exist, so it must be created
        fp = fopen(FILENAME_MAINTENANCE, "wb");

        if (fp != NULL) {
            initAllocMaintence(maintenances, 1);

        } else {
            printf(FAILURE_CREATING_FILE);
            exit(EXIT_FAILURE);
        }
        fclose(fp);
    }
}


void saveMaintenance(Maintenances * maintenances) {
    FILE* fp = fopen(FILENAME_MAINTENANCE, "wb"); //it overwrites the file used to load the company's data previously
    if (fp == NULL) {
        fprintf(stderr, FAILURE_OVERWRITING_FILE);
        exit(EXIT_FAILURE);
    }
    if (fwrite(&(maintenances->count), sizeof(int), 1, fp) !=  1) {
        fprintf(stderr, FAILURE_WRITING_FILE);
        exit(EXIT_FAILURE);
    }
    if (maintenances->count == 0) {
        fclose(fp);
        return;
    }
    if ((fwrite(maintenances->maintenance, sizeof(Equipment), maintenances->count, fp)) != maintenances->count) {
        fprintf(stderr, FAILURE_WRITING_FILE);
        exit(EXIT_FAILURE);
    }

    fclose(fp);
}

/*
void exportEquipments(Equipments *equipments,Maintenances *maintenances) {
    FILE *fp;
    int i;

    fp = fopen(FILENAME, "w");
    if (fp == NULL) {
        printf("ERRO");
    }


    fprintf(fp,"%d\n", equipments->count);
    for (i = 0; i < equipments->count; i++) {

        fprintf(fp, "%d,%s,%d,%d,%d,%d,%d,%d",
                equipments->equipment[i].id,
                equipments->equipment[i].designation,
                equipments->equipment[i].category,
                equipments->equipment[i].date.day,
                equipments->equipment[i].date.month,
                equipments->equipment[i].date.year,
                equipments->equipment[i].state,
                equipments->equipment[i].userCode

        );
        fprintf(fp,"%d\n", maintenances->count);
         for (int j = 0; j < maintenances->count ; ++j){
            fprintf(fp,"%d,%d,%d,%d,%d,%s,",
                    equipments->equipment[i].maintenances.maintenance[j].num_movement,
                    equipments->equipment[i].maintenances.maintenance[j].date.day,
                    equipments->equipment[i].maintenances.maintenance[j].date.month,
                    equipments->equipment[i].maintenances.maintenance[j].date.year,
                    equipments->equipment[i].maintenances.maintenance[j].category,
                    equipments->equipment[i].maintenances.maintenance[j].notes
            );
        }
        fprintf(fp,"%d\n",  equipments->equipment[i].num_maintenance);


    }

    fclose(fp);


}

void importEquipment(Equipments *equipments,Maintenances *maintenances) {
    FILE *fp;
    fp = fopen(FILENAME, "r");
    if (fp == NULL) {
        fopen(FILENAME, "w");
        initAllocMaintence(maintenances, 1);
        initAllocEquipment(equipments, 1);
        printf("ERRORR");
    } else {
        fscanf(fp, "%d", &equipments->count);


        initAllocEquipment(equipments, equipments->count);
        for (int i = 0; i <equipments->count; ++i) {
            fscanf(fp,"%d,%s,%d,%d,%d,%d,%d,%d,%d",
                   & equipments->equipment[i].id,
                   equipments->equipment[i].designation,
                   & equipments->equipment[i].category,
                   & equipments->equipment[i].date.day,
                   & equipments->equipment[i].date.month,
                   & equipments->equipment[i].date.year,
                   & equipments->equipment[i].state,
                   & equipments->equipment[i].userCode,
                   & equipments->equipment[i].num_maintenance
            );

            fscanf(fp, "%d", &maintenances->count);
            initAllocMaintence(maintenances, maintenances->count);
            for (int j = 0; j < maintenances->count ; ++j) {

                fscanf(fp,"%d,%d,%d,%d,%d,%s",
                       &equipments->equipment[i].maintenances.maintenance[j].num_movement,
                       &equipments->equipment[i].maintenances.maintenance[j].date.day,
                       &equipments->equipment[i].maintenances.maintenance[j].date.month,
                       &equipments->equipment[i].maintenances.maintenance[j].date.year,
                       &equipments->equipment[i].maintenances.maintenance[j].category,
                       equipments->equipment[i].maintenances.maintenance[j].notes
                       );
            }


        }
        fclose(fp);

    }
}*/

