/**
 * @file main.c
 * @author Emanuel Pinto
 * @date 29/01/2024
 * @version 1
 *
 * @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
 *
 * @brief Main program for managing equipment and users.
 *
 * This C program manages equipment and users by providing a menu-based interface.
 * It loads existing equipment and user data from files, displays a main menu
 * for user interaction, saves any modifications back to files, and frees allocated memory
 * before exiting.
 */

#include <stdio.h>
#include "equipment.h"
#include "menu.h"
#include "files.h"
#include "memory.h"

int main() {
    // Disable output buffering for stdout
    setbuf(stdout, NULL);

    // Initialize equipment and user structures
    Equipments equipments = {.count = 0};
    Users users = {.count = 0};

    // Load existing equipment and user data from files
    loadEquipment(&equipments);
    loadUser(&users);

    // Display main menu for user interaction
    mainMenu(&equipments, &users);

    // Save any modifications back to files
    saveEquipments(&equipments);
    saveUser(&users);

    // Free allocated memory before exiting
    freeMem(&equipments, &users);

    return 0;
}