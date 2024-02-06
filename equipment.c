
/**
 * @file equipment.c
 * @author Emanuel Pinto
 * @date 29-10-2024
 * @version 1
 *
 * @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for manage equipment.
 */

#include "equipment.h"
#include "input.h"
#include "stdio.h"
#include "search.h"
#include "memory.h"

/**
 * @brief Message prompt for asking the user to input a designation.
 */
#define DESIGNATION_MSG "Designation: "

/**
 * @brief Message prompt for asking the user to input a day.
 */
#define DAY_MSG "Day: "

/**
 * @brief Message prompt for asking the user to input a month.
 */
#define MONTH_MSG "Month: "

/**
 * @brief Message prompt for asking the user to input a year.
 */
#define YEAR_MSG "Year: "

/**
 * @brief Message prompt for asking the user to input a category.
 */
#define CATG_MSG "Category: "

/**
 * @brief Message prompt for asking the user to input a state.
 */
#define STATE_MSG "State: "

/**
 * @brief Message prompt for asking the user to insert an ID.
 */
#define ID_MSG "Insert the id: "

/**
 * @brief Message prompt for notes.
 */
#define NOTES "NOTES: "

/**
 * @brief Error message indicating an error occurred.
 */
#define ERRO "ERROO"
void printCatg(){
    printf("/--------------------CATEGORIES-----------------/\n");
    printf("1. Printer\n2.Desktop\n3.Laptop\n4.Monitor\n5.Router\n5.Switch\n6.TV\n7.Projector\n8.Access_controller\n9.Mouse\n10.Accessory\n11.Other\n\n");
}
void printState(){
    printf("/--------------------STATE-----------------/\n");
    printf(" 0.Non operational\n1.In Maintenance\n2.Operational\n3.Recycling");
}
void printMainCatg(){
    printf("/--------------------MAINTENANCE CATEGORY-----------------/\n");
    printf(" 1.SoftwareUpdate\n2.Technique\n3.CompSubstitution");
}
void insertEquipments(Equipments *equipments){
    reallocEquipment(equipments);
    int lastId=0;
    for (int i = 0; i<equipments->count ; i++) {
        if((equipments->equipment[i].id) > lastId){
            lastId=equipments->equipment[i].id;
        }
    }
    equipments->equipment[equipments->count].id = lastId+1;

    readString(equipments->equipment[equipments->count].designation,MAX_CHAR,DESIGNATION_MSG);
    equipments->equipment[equipments->count].date.day = getInt(MIN_DAY,MAX_DAY,DAY_MSG);
    equipments->equipment[equipments->count].date.month = getInt(MIN_MONTH,MAX_MONTH,MONTH_MSG);
    equipments->equipment[equipments->count].date.year = getInt(MIN_YEAR,MAX_YEAR,YEAR_MSG);
    printCatg();
    equipments->equipment[equipments->count].category = getInt(MIN_CATG,MAX_CATG,CATG_MSG);
    printState();
    equipments->equipment[equipments->count].state = getInt(MIN_CATG,MAX_CATG,STATE_MSG);
    equipments->count++;
}


void addMaintenanceToEquipment(Equipments *equipments) {
    int id = 0;
    int position =-1;
    do {
        id = getInt(MIN_ID,MAX_ID,ID_MSG);
        position = searchEq(*equipments,id);
    }while(position==-1);

    reallocMain(equipments);
    if (equipments->equipment[position].maintenance != NULL) {
            // Add the new maintenance record
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].num_movement++;
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].date.day= getInt(MIN_DAY,MAX_DAY,DAY_MSG);
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].date.month= getInt(MIN_MONTH,MAX_MONTH,MONTH_MSG);
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].date.year= getInt(MIN_YEAR,MAX_YEAR,YEAR_MSG);
            printMainCatg();
            equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].category= getInt(MIN_DAY,MAX_DAY,CATG_MSG);
            readString( equipments->equipment[position].maintenance[equipments->equipment[position].num_maintenance].notes,MAX_CHAR,NOTES);
            equipments->equipment[position].num_maintenance++;

        } else {
        puts(ERRO);
        }


}

void updateState(Equipments *equipments){
    int id = 0;
    int position =0;
    if(equipments->count>0) {
        do {
            id = getInt(MIN_ID, MAX_ID, ID_MSG);
            position = searchEq(*equipments, id);
        } while (position == -1);

        equipments->equipment[position].state = getInt(1, 4, STATE_MSG);
    }
}


void displayMaintenanceHistory( Equipments *equipments) {
    int id = 0;
    int position =0;

        do {
            id = getInt(MIN_ID, MAX_ID, ID_MSG);
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
            id = getInt(MIN_ID, MAX_ID, ID_MSG);
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