//
//
// Created by emanu on 29/01/2024.
//

#include "equipment.h"
#include "input.h"
#include "stdio.h"
#include "stdlib.h"
#include "search.h"

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


void addMaintenanceToEquipment(Equipments *equipments) {
    int id = 0;
    int position =-1;
    do {
        id = getInt(MIN_ID,MAX_ID,"Insert the id: ");
        position = searchEq(*equipments,id);
    }while(position==-1);
    // Dynamically allocate memory for maintenance array if not already done
    if (equipments->equipment[position].maintenance == NULL) {
        equipments->equipment[position].maintenance = (Maintenance *)malloc(sizeof(Maintenance)*1);
    } else {
   }
    if (equipments->equipment[position].maintenance != NULL) {
            // Add the new maintenance record
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].num_movement++;
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].date.day= getInt(MIN_DAY,MAX_DAY,"DAY: ");
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].date.month= getInt(MIN_MONTH,MAX_MONTH,"MONTH: ");
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].date.year= getInt(MIN_YEAR,MAX_YEAR,"year: ");
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].category= getInt(MIN_DAY,MAX_DAY,"ccatg: ");
            readString( equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].notes,MAX_CHAR,"NOTES: ");
            equipments->equipment[position].num_maintenance++;

            printf("Maintenance added successfully.\n");
        } else {
            printf("Error: Memory allocation failed.\n");
        }


}

void updateState(Equipments *equipments){
    int id = 0;
    int position =0;
    if(equipments->count>0) {
        do {
            id = getInt(MIN_ID, MAX_ID, "Insert the id: ");
            position = searchEq(*equipments, id);
        } while (position == -1);

        equipments->equipment[position].state = getInt(1, 4, "State: ");
    }
}


void displayMaintenanceHistory( Equipments *equipments) {
    int id = 0;
    int position =0;

        do {
            id = getInt(MIN_ID, MAX_ID, "Insert the id: ");
            position = searchEq(*equipments, id);
        } while (position == -1);
    if(equipments->equipment[position].num_maintenance>0) {

        printf("Maintenance history for Equipment %d - %s:\n", id, equipments->equipment[position].designation);

        // Check if there are any maintenance records
        if (equipments->equipment[position].num_maintenance == 0) {
            printf("No maintenance records available.\n");

        }

        // Display maintenance records
        for (int i = 0; i < equipments->equipment[position].num_maintenance; i++) {
            printf("Maintenance #%d:\n", i + 1);
            printf("  Date: %d/%d/%d\n", equipments->equipment[position].maintenance[i].date.day,
                   equipments->equipment[position].maintenance[i].date.month,
                   equipments->equipment[position].maintenance[i].date.year);
            printf("  Category: %d\n", equipments->equipment[position].maintenance[i].category);
            printf("  Notes: %s\n", equipments->equipment[position].maintenance[i].notes);
            printf("\n");
        }
    }
}


void deleteEquipment(Equipments *equipments) {
    int id = 0;
    int position = 0;

    if (equipments->count > 0) {
        do {
            id = getInt(MIN_ID, MAX_ID, "Insert the id: ");
            position = searchEq(*equipments, id);
        } while (position == -1);

        // Check if the equipment can be deleted
        if (equipments->equipment[position].userCode != 0 || equipments->equipment[position].state != 3) {
            printf("You can't delete this equipment!! Changing to inactive.\n");
            equipments->equipment[position].state = 0;
        } else {
            // Move the last equipment to the position to be deleted
            equipments->equipment[position] = equipments->equipment[equipments->count - 1];
            equipments->count--;

            printf("Equipment with ID %d has been deleted.\n", id);
        }
    }
}