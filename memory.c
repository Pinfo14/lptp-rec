//
// Created by emanu on 30/01/2024.
//

#include "memory.h"
#include "equipment.h"
#include "user.h"
#include "stdlib.h"
#include "stdio.h"

void initAllocEquipment(Equipments *equipments, int size) {
    equipments->equipment = (Equipment *)malloc(size * sizeof(Equipment));
    if (equipments->equipment == NULL) {
        fprintf(stderr, "Memory allocation error for equipment\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < size; ++i) {
        equipments->equipment[i].maintenance = (Maintenance *)malloc(size * sizeof(Maintenance));
        if (equipments->equipment[i].maintenance == NULL) {
            fprintf(stderr, "Memory allocation error for maintenance records\n");
            exit(EXIT_FAILURE);
        }
    }
}

void initAllocUser(Users * users, int size) {
            if ((users->users = (User *)malloc(size * sizeof(User))) == NULL) {
                printf("feile");
                exit(EXIT_FAILURE);

    }


}