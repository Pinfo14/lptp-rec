
/**
* @file equipment.h
* @author Emanuel Pinto
* @date  29/01/2024
* @version 1
*
* @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
*
* @brief A header file providing function to manage equipments.
*
* This file contains a collection of functions to manage equipments.
* It includes functions to insert new equipment, update state, add maintenance, visualise maintenance report and delete equipment.
*/
#ifndef LPTP_EQUIPMENT_H
#define LPTP_EQUIPMENT_H

/**
 * @brief Maximum length for character arrays.
 */
#define  MAX_CHAR 100

/**
 * @brief Maximum length for maintenance notes.
 */
#define  MAX_NOTES 1000

/**
 * @brief Minimum equipment ID.
 */
#define MIN_ID 1

/**
 * @brief Maximum equipment ID.
 */
#define MAX_ID 999999

/**
 * @brief Minimum day value.
 */
#define MIN_DAY 1

/**
 * @brief Maximum day value.
 */
#define MAX_DAY 31

/**
 * @brief Minimum month value.
 */
#define MIN_MONTH 1

/**
 * @brief Maximum month value.
 */
#define MAX_MONTH 12

/**
 * @brief Minimum year value.
 */
#define MIN_YEAR 1990

/**
 * @brief Maximum year value.
 */
#define MAX_YEAR 2024

/**
 * @brief Minimum category value.
 */
#define MIN_CATG 1

/**
 * @brief Maximum category value.
 */
#define MAX_CATG 12

/**
 * @brief Enumeration for equipment categories.
 */
typedef enum {
    Printer=1, Desktop, Laptop, Monitor, Router, Switch, TV, Projector, Access_controller, Mouse, Accessory, other
} Category;

/**
 * @brief Enumeration for equipment states.
 */
typedef enum {
    Noperational, InMaintenance, Operational, Recycling
} State;

/**
 * @brief Enumeration for maintenance categories.
 */
typedef enum {
    SoftwareUpdate=1, Technique, CompSubstitution
} CatgMaintenance;

/**
 * @brief Structure to represent a date.
 */
typedef struct {
    int day;
    int month;
    int year;
} Date;

/**
 * @brief Structure to represent maintenance information.
 */
typedef struct {
    int num_movement;
    Date date;
    CatgMaintenance category;
    char notes[MAX_NOTES];
} Maintenance;

/**
 * @brief Structure to represent equipment.
 */
typedef struct {
    int id;
    char designation[MAX_CHAR];
    Category category;
    Date date;
    State state;
    int userCode;
    Maintenance *maintenance;
    int num_maintenance;
    int allocatedMainCel;
} Equipment;

/**
 * @brief Structure to represent a collection of equipments.
 */
typedef struct {
    int count;
    int allocatedCel;
    Equipment *equipment;
} Equipments;

/**
 * @brief Inserts new equipment into the system.
 * @param equipments Pointer to the Equipments structure.
 */
void insertEquipments(Equipments *equipments);

/**
 * @brief Updates the state of existing equipment.
 * @param equipments Pointer to the Equipments structure.
 */
void updateState(Equipments *equipments);

/**
 * @brief Adds maintenance information to an equipment.
 * @param equipments Pointer to the Equipments structure.
 */
void addMaintenanceToEquipment(Equipments *equipments);

/**
 * @brief Displays the maintenance history report for all equipments.
 * @param equipments Pointer to the Equipments structure.
 */
void displayMaintenanceHistory(Equipments *equipments);

/**
 * @brief Deletes equipment from the system.
 * @param equipments Pointer to the Equipments structure.
 */
void deleteEquipment(Equipments *equipments);

#endif //LPTP_EQUIPMENT_H