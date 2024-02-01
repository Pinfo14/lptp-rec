//
// Created by emanu on 01/02/2024.
//

#include "search.h"
#include "input.h"
#include "stdio.h"
#include "list.h"
#include "string.h"

int searchEq(Equipments equipments, int id){
    for (int i = 0; i < equipments.count; ++i) {
        if(id == equipments.equipment[i].id){
            return i;
        }
    }
    return -1;
}

void searchById(Equipments equipments){
    int id= getInt(MIN_ID,MAX_ID,"Insert id: ");
    int position=  searchEq(equipments,id);
    printEquipment(equipments.equipment[position]);
}
void searchEqByName(Equipments *equipments) {
    char name[CHAR_MAX];
    readString(name,MAX_CHAR,"Insert Equipment name: ");
    for (int i = 0; i < equipments->count; i++) {
        if (strstr(equipments->equipment[i].designation, name) && equipments->equipment[i].state != 0) {
             printEquipment( equipments->equipment[i]);
        }
    }
}