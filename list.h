/**
* @file list.h
* @author Emanuel Pinto
* @date  01/02/2024
* @version 1
*
* @brief A header file providing function to list equipments.
*
* This file contains a collection of functions for list the equipments.
* It includes functions to list free equipments recicle equipments and all equiments.
*/
#ifndef LPTP_LIST_H
#define LPTP_LIST_H

#include "equipment.h"

/**
 * @brief Error message for no equipment found.
 */
#define NO_EQUIPMENT "No Equipment Found!!"

/**
 * @brief Lists free equipment.
 * @param equipments The Equipments structure containing equipment data.
 */
void listFreeEquipment(Equipments equipments);

/**
 * @brief Lists equipment for recycling.
 * @param equipments The Equipments structure containing equipment data.
 */
void listRecycle(Equipments equipments);

/**
 * @brief Lists all equipment.
 * @param equipments The Equipments structure containing equipment data.
 */
void listAllEquipment(Equipments equipments);

/**
 * @brief Prints information about a single equipment.
 * @param equipment The equipment to print.
 */
void printEquipment(Equipment equipment);

#endif //LPTP_LIST_H