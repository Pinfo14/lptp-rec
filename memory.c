//
// Created by emanu on 30/01/2024.
//

#include "memory.h"
#include "equipment.h"
#include "user.h"
#include "stdlib.h"
#include "stdio.h"

void initAllocEquipment(Equipments * equipments, int size) {
    if ((equipments->equipment = (Equipment *)malloc(size * sizeof(Equipment))) == NULL) {
        printf("feile");
        exit(EXIT_FAILURE);
    }
    equipments->count = size;
}

void initAllocMaintence(Maintenances * maintenances, int size) {

            if ((maintenances->maintenance = (Maintenance *)malloc(size * sizeof(Maintenance))) == NULL) {
                printf("feile");
                exit(EXIT_FAILURE);

                maintenances->count = size;
    }


}