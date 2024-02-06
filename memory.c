/**
 * @file memory.c
 * @author Emanuel Pinto
 * @date 30-01-2024
 * @version 1
 *
 * @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for manage memory.
 */


#include "memory.h"
#include "equipment.h"
#include "user.h"
#include "stdlib.h"
#include "stdio.h"

void initAllocEquipment(Equipments* equipments, int size) {
    equipments->equipment = (Equipment *)malloc(size * sizeof(Equipment));
    if (equipments->equipment == NULL) {
        fprintf(stderr, "Memory allocation error for equipment\n");
        exit(EXIT_FAILURE);
    }
    equipments->allocatedCel=size;
}

void initAllocMain(Equipments* equipments, int size){
    for (int i = 0; i < size; ++i) {
        equipments->equipment[i].maintenance = (Maintenance *)malloc(size * sizeof(Maintenance));
        if (equipments->equipment[i].maintenance == NULL) {
            fprintf(stderr, "Memory allocation error for maintenance records\n");
            exit(EXIT_FAILURE);
        }
        equipments->equipment[i].allocatedMainCel = size;
    }
}

void initAllocUser(Users* users, int size) {
    if ((users->users = (User *)malloc(size * sizeof(User))) == NULL) {
        printf("feile");
        exit(EXIT_FAILURE);
    }
     users->allocatedCel=size;
}

void reallocEquipment(Equipments* equipments) {
    Equipments * temp = NULL;

    if (equipments->count >= equipments->allocatedCel) {
        temp = (Equipment *) realloc(equipments->equipment, sizeof(Equipment) * equipments->allocatedCel * GROWTH_FACTOR);
        if (temp != NULL) {
            equipments->allocatedCel =  equipments->allocatedCel * GROWTH_FACTOR;
            equipments->equipment = temp;
            temp = NULL;
        }
    }
}

void reallocMain(Equipments* equipments) {
    Equipments * temp = NULL;
    for (int i = 0; i <equipments->count ; ++i) {
        if (equipments->equipment[i].num_maintenance >= equipments->equipment[i].allocatedMainCel) {
            temp = (Maintenance *) realloc(equipments->equipment[i].maintenance, sizeof(Maintenance) * equipments->equipment[i].allocatedMainCel * GROWTH_FACTOR);
            if (temp != NULL) {
                equipments->equipment[i].allocatedMainCel =  equipments->equipment[i].allocatedMainCel* GROWTH_FACTOR;
                equipments->equipment[i].maintenance = temp;
                temp = NULL;
            }
        }
    }
}
void reallocUser(Users* users) {
    Users* temp = NULL;

    if (users->count >= users->allocatedCel) {
        temp = (User *) realloc(users->users, sizeof(User) * users->allocatedCel * GROWTH_FACTOR);
        if (temp != NULL) {
            users->allocatedCel =  users->allocatedCel * GROWTH_FACTOR;
            users->users = temp;
            temp = NULL;
        }
    }
}

void freeMem(Equipments* equipments,Users* users) {

    for (int i = 0; i <equipments->count; i++) {
        free(equipments->equipment[i].maintenance);
    }
    free(equipments->equipment);
    free(users->users);
}