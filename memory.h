
/**
* @file memory.h
* @author Emanuel Pinto
* @date  30/01/2024
* @version 1
*
* @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
*
* @brief A header file providing function do handle memory.
*
* This file contains a collection of functions for managing memory.
* It includes functions to allocate memory and free memory.
*/

#ifndef LPTP_MEMORY_H
#define LPTP_MEMORY_H

#include "equipment.h"
#include "user.h"

/**
 * @brief Growth factor for memory reallocation.
 */
#define GROWTH_FACTOR 2

/**
 * @brief Initializes memory allocation for equipment.
 * @param equipments Pointer to the Equipments structure.
 * @param size Initial size of the allocation.
 */
void initAllocEquipment(Equipments * equipments, int size);

/**
 * @brief Initializes memory allocation for maintenance.
 * @param equipments Pointer to the Equipments structure.
 * @param size Initial size of the allocation.
 */
void initAllocMain(Equipments *equipments, int size);

/**
 * @brief Initializes memory allocation for users.
 * @param users Pointer to the Users structure.
 * @param size Initial size of the allocation.
 */
void initAllocUser(Users * users, int size);

/**
 * @brief Reallocates memory for equipment.
 * @param equipments Pointer to the Equipments structure.
 */
void reallocEquipment(Equipments* equipments);

/**
 * @brief Reallocates memory for maintenance.
 * @param equipments Pointer to the Equipments structure.
 */
void reallocMain(Equipments* equipments);

/**
 * @brief Reallocates memory for users.
 * @param users Pointer to the Users structure.
 */
void reallocUser(Users* users);

/**
 * @brief Frees allocated memory for equipment and users.
 * @param equipments Pointer to the Equipments structure.
 * @param users Pointer to the Users structure.
 */
void freeMem(Equipments* equipments, Users* users);

#endif //LPTP_MEMORY_H