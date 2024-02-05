//
// Created by emanu on .
//
/**
* @file equipment.h
* @author Emanuel Pinto
* @date  29/01/2024
* @version 1
*
* @brief A header file providing function to manage equipments.
*
* This file contains a collection of functions to manage equipments.
* It includes functions to insert new equipment, update state, add maintenance, visualise maintenance report and delete equipment.
*/
#ifndef LPTP_EQUIPMENT_H
#define LPTP_EQUIPMENT_H
#define  MAX_CHAR 100
#define  MAX_NOTES 1000
#define MIN_ID 1
#define MAX_ID 999999
#define MIN_DAY 1
#define MAX_DAY 31
#define MIN_MONTH 1
#define MAX_MONTH 12
#define MIN_YEAR 1990
#define MAX_YEAR 2024
#define MIN_CATG 1
#define MAX_CATG 12


typedef enum {Printer=1, Desktop, Laptop, Monitor, Router, Switch, TV, Projector,Access_controller, Mouse, Accessory, other} Category;
typedef enum{Noperational, InMaintenance,Operational,Recycling}State;
typedef enum{SoftwareUpdate=1,Technique,CompSubstitution}CatgMaintenance;

typedef struct {
    int day;
    int month;
    int year;
}Date;

typedef struct {
   int num_movement;
   Date date;
   CatgMaintenance category;
   char notes[MAX_NOTES];
}Maintenance;


typedef struct {
    int id;
    char designation[MAX_CHAR];
    Category category;
    Date date;
    State state;
    int userCode;
    Maintenance *maintenance;
    int num_maintenance;
}Equipment;

typedef struct {
    int count;
    Equipment *equipment;
}Equipments;


void insertEquipments(Equipments *equipments);
void updateState(Equipments *equipments);
void addMaintenanceToEquipment(Equipments *equipments);
void displayMaintenanceHistory( Equipments *equipments);
void deleteEquipment(Equipments *equipments);

#endif //LPTP_EQUIPMENT_H
