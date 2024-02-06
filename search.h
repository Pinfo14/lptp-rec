
/**
* @file search.h
* @author Emanuel Pinto
* @date   01/02/2024
* @version 1
*
* @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
*
* @brief A header file providing function to search.
*
* This file contains a collection of functions for search equipments.
* It includes functions to search by id and by name.
*/
#ifndef LPTP_SEARCH_H
#define LPTP_SEARCH_H

#include "equipment.h"

/**
 * @brief Maximum length for character arrays.
 */
#define CHAR_MAX 100

/**
 * @brief Searches for equipment by ID.
 * @param equipments The Equipments structure containing equipment data.
 * @param id The ID of the equipment to search for.
 * @return 1 if the equipment is found, 0 otherwise.
 */
int searchEq(Equipments equipments, int id);

/**
 * @brief Prompts the user to search for equipment by ID.
 * @param equipments Pointer to the Equipments structure.
 */
void searchById(Equipments equipments);

/**
 * @brief Searches for equipment by name.
 * @param equipments Pointer to the Equipments structure.
 */
void searchEqByName(Equipments *equipments);

#endif //LPTP_SEARCH_H