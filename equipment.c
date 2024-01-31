//
//
// Created by emanu on 29/01/2024.
//

#include "equipment.h"
#include "input.h"
#include "stdio.h"
#include "stdlib.h"
int searchEq(Equipments equipments, int id){
    for (int i = 0; i < equipments.count; ++i) {
        if(id == equipments.equipment[i].id){
            return i;
        }
    }
    return -1;
}
int getId(){

}
void insertEquipments(Equipments *equipments){
    equipments->equipment[equipments->count].id = equipments->count+1;
     cleanInputBuffer();
    readString(equipments->equipment[equipments->count].designation,MAX_CHAR,"Designation: ");
    equipments->equipment[equipments->count].date.day = getInt(MIN_DAY,MAX_DAY,"Day: ");
    equipments->equipment[equipments->count].date.month = getInt(MIN_MONTH,MAX_MONTH,"Month: ");
    equipments->equipment[equipments->count].date.year = getInt(MIN_YEAR,MAX_YEAR,"Year: ");
    equipments->equipment[equipments->count].category = getInt(MIN_CATG,MAX_CATG,"ccatr: ");
    equipments->equipment[equipments->count].state = getInt(MIN_CATG,MAX_CATG,"stra: ");
    equipments->count++;
}
void printEquipment(Equipment equipment) {

    printf("%d   %s  %d-%d-%d   %d    %d\n",equipment.id,equipment.designation, equipment.date.day,equipment.date.month ,equipment.date.year,equipment.category,equipment.state);

}

void listEquipment(Equipments equipments){

    if (equipments.count > 0 ) {
        for (int i = 0; i <equipments.count; i++) {
            printEquipment(equipments.equipment[i]);
        }
    }else {
        puts("No ");
    }
}
/*
void maintenanceEq(Equipments *equipments ,Maintenances *maintenances) {
    int id = 0;
    int position =0;
    do {
         id = getInt(MIN_ID,MAX_ID,"Insert the id: ");
         position = searchEq(*equipments,id);
    }while(position==-1);


    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].num_movement++;
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].category = getInt(1, 3,"Isert the catgoryu ");
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].date.day = getInt(MIN_DAY,MAX_DAY,"Isert DAY");
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].date.month = getInt(MIN_MONTH,MAX_MONTH,"Isert Month");
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].date.year = getInt(MIN_YEAR,MAX_YEAR,"Isert year");
    readString(equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].notes, MAX_NOTES,"NOTES: ");
    equipments->equipment[position].num_maintenance++;
    equipments->equipment[position].maintenances.count++;


}
*/
void insertMaintenance(Equipments *equipments, Maintenances *Maintenance) {
    int id = 0;
    int position =0;
    do {
        id = getInt(MIN_ID,MAX_ID,"Insert the id: ");
        position = searchEq(*equipments,id);
    }while(position==-1);

    
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].num_movement++;
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].category = getInt(1, 3,"Isert the catgoryu ");
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].date.day = getInt(MIN_DAY,MAX_DAY,"Isert DAY");
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].date.month = getInt(MIN_MONTH,MAX_MONTH,"Isert Month");
    equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].date.year = getInt(MIN_YEAR,MAX_YEAR,"Isert year");
    readString(equipments->equipment[position].maintenances.maintenance[equipments->equipment[position].num_maintenance].notes, MAX_NOTES,"NOTES: ");
    equipments->equipment[position].num_maintenance++;
    equipments->equipment[position].maintenances.count++;

    printf("Maintenance record inserted successfully\n");
}
void updateState(Equipments *equipments){
    int id = 0;
    int position =0;
    if(equipments->count>0) {
        do {
            id = getInt(MIN_ID, MAX_ID, "Insert the id: ");
            position = searchEq(*equipments, id);
        } while (position == -1);

        equipments->equipment[position].state = getInt(MIN_CATG, MAX_CATG, "stra: ");
    }
}
