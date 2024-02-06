
/**
* @file menu.h
* @author Emanuel Pinto
* @date  29/01/2024
* @version 1
*
* @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
*
* @brief A header file providing function to manage menu.
*
* This file contains a collection of functions for manage the menu.
* It includes functions to the main menu.
*/
#ifndef LPTP_MENU_H
#define LPTP_MENU_H

#include "equipment.h"
#include "user.h"

/**
 * @brief Prompt message for choosing an option.
 */
#define OPTION "CHOOSE OPTION: "

/**
 * @brief Displays the main menu and handles user input.
 * @param equipments Pointer to the Equipments structure.
 * @param users Pointer to the Users structure.
 */
void mainMenu(Equipments* equipments, Users* users);

#endif //LPTP_MENU_H