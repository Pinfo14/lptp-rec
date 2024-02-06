/**
 * @file list.c
 * @author Emanuel Pinto
 * @date 01-02-2024
 * @version 1
 *
 * @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions used to list equipments.
 */

#include "list.h"
#include "stdio.h"
void printEquipment(Equipment equipment) {

    printf("%d   %s  %d-%d-%d   %d    %d\n",equipment.id,equipment.designation, equipment.date.day,equipment.date.month ,equipment.date.year,equipment.category,equipment.state);

}

void listFreeEquipment(Equipments equipments) {
    printf("Free equipments\n");
    if (equipments.count > 0) {
        for (int i = 0; i < equipments.count; ++i) {
            if (equipments.equipment[i].userCode == 0) {
                printEquipment(equipments.equipment[i]);
                printf("%d",equipments.count);
            }
        }
    }else {
        printf("%d",equipments.count);
        puts(NO_EQUIPMENT);
    }
}
void listRecicle(Equipments equipments){
    printf("Recicle equipments\n");
    if (equipments.count > 0 ) {
        for (int i = 0; i < equipments.count; ++i) {
            if (equipments.equipment[i].state == 4) {
                printEquipment(equipments.equipment[i]);
            }
        }
    }else {
            puts(NO_EQUIPMENT);
        }

}
void listAllEquipment(Equipments equipments){

    if (equipments.count > 0 ) {
        for (int i = 0; i <equipments.count; i++) {
            printEquipment(equipments.equipment[i]);
        }
    }else {
        puts(NO_EQUIPMENT);
    }
}
