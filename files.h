/**
* @file files.h
* @author Emanuel Pinto
* @date  29/01/2024
* @version 1
*
* @brief A header file providing function do handle files.
*
* This file contains a collection of functions for managing the files.
* It includes functions to save and load users and equipments fom file.
*/
#ifndef LPTP_FILES_H
#define LPTP_FILES_H

#include "equipment.h"
#include "user.h"

/**
 * @brief File path for equipment data.
 */
#define FILENAME_EQUIPMENT "../data/data_eq.bin"

/**
 * @brief File path for user data.
 */
#define FILENAME_USER "../data/data_user.bin"

/**
 * @brief Error message for file reading failure.
 */
#define FAILURE_READING_FILE "File reading failure"

/**
 * @brief Error message for file creation failure.
 */
#define FAILURE_CREATING_FILE "File creating failure"

/**
 * @brief Error message for file overwriting failure.
 */
#define FAILURE_OVERWRITING_FILE "File overwriting failure"

/**
 * @brief Error message for file writing failure.
 */
#define FAILURE_WRITING_FILE "File writing failure"

/**
 * @brief Loads equipment data from file.
 * @param equipments Pointer to the Equipments structure.
 */
void loadEquipment(Equipments* equipments);

/**
 * @brief Saves equipment data to file.
 * @param equipments Pointer to the Equipments structure.
 */
void saveEquipments(Equipments* equipments);

/**
 * @brief Saves user data to file.
 * @param users Pointer to the Users structure.
 */
void saveUser(Users* users);

/**
 * @brief Loads user data from file.
 * @param users Pointer to the Users structure.
 */
void loadUser(Users* users);

#endif //LPTP_FILES_H