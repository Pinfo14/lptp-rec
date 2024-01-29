//
// Created by emanu on 29/01/2024.
//

#include "equipment.h"
#include "input.h"
#include "stdio.h"



void insertEquipments(Equipments *equipments){
    equipments->equipment[equipments->count].id ++;
    readString(equipments->equipment[equipments->count].designation,MAX_CHAR,"Designation: ");
    equipments->equipment[equipments->count].date.day = getInt(MIN_DAY,MAX_DAY,"Day: ");
    equipments->equipment[equipments->count].date.month = getInt(MIN_MONTH,MAX_MONTH,"Month: ");
    equipments->equipment[equipments->count].date.year = getInt(MIN_YEAR,MAX_YEAR,"Year: ");
    equipments->equipment[equipments->count].category = getInt(MIN_CATG,MAX_CATG,"ccatr: ");
    equipments->equipment[equipments->count].state = getInt(MIN_CATG,MAX_CATG,"stra: ");
}
void printEquipment(Equipment equipment) {

    printf("%d   %s  %d-%d-%d   %d    %d  %d\n",equipment.id,equipment.designation, equipment.date.day,equipment.date.month ,equipment.date.year,equipment.category,equipment.state);

}

void listEquipment(Equipments equipments){

    if (equipments.count > 0 ) {
        for (int i = 0; i <equipments.count; i++) {
            printEquipment(equipments.equipment[i]);
        }
    } else {
        puts("NO companies");
    }
}