
/**
 * @file equipment.c
 * @author Emanuel Pinto
 * @date  29/01/2024
 * @version 1
 *
 * @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
 *
 * @brief Contains functions for the menu.
 */

#include "menu.h"
#include "stdio.h"
#include "list.h"
#include "search.h"
#include "input.h"
#define ERRO "ERRO"
void search(Equipments* equipments){
    int op = 0;

    do {
        printf("\nSearch \n");
        printf("1.Search by ID\n");
        printf("2.Search by Name\n");
        printf("0. EXIT\n");
        op= getInt(0,2,OPTION);
        switch (op) {
            case 1:
                searchById(*equipments);
                break;
            case 2:
                searchEqByName(equipments);
                break;
            case 3:
                break;
            default:
                puts(ERRO);
        }
    } while (op != 0);
}
void listEquipment(Equipments* equipments){
    int op = 0;

    do {
        printf("\nList \n");
        printf("1.Free EQUIMPENT\n");
        printf("2. Recicle Equipment\n");
        printf("3. All Equipment\n");
        printf("0. EXIT\n");
        op= getInt(0,3,OPTION);
        switch (op) {
            case 1:
                listFreeEquipment(*equipments);
                break;
            case 2:
                listRecycle(*equipments);
                break;
            case 3:
                listAllEquipment(*equipments);
                break;
            default:
                puts(ERRO);
        }
    } while (op != 0);
}
void equipmentManagmentMenu(Equipments* equipments){
    int op = 0;

    do {
        printf("\nEQUIPMENT MANAGMENT \n");
        printf("1.Insert EQUIMPENT\n");
        printf("2. LIST\n");
        printf("3. maintenance\n");
        printf("4. update state\n");
        printf("5. View Maintenance report\n");
        printf("6. Delete equipemt\n");
        printf("0. EXIT\n");
        op= getInt(0,6,OPTION);
        switch (op) {
            case 1:
                insertEquipments(equipments);
                break;
            case 2:
                listEquipment(equipments);
                break;
            case 3:
                 addMaintenanceToEquipment(equipments);
                break;
            case 4:
                updateState(equipments);
                break;
            case 5:
                 displayMaintenanceHistory(equipments);
                break;
            case 6:
               deleteEquipment(equipments);
                break;
            default:
                puts(ERRO);
        }
    } while (op != 0);
}

void userManagmentMenu(Users* user,Equipments* equipments){
    int op = 0;

    do {
        printf("\nUSER MANAGMENT \n");
        printf("1.Insert User\n");
        printf("2. List user\n");
        printf("3. update state\n");
        printf("4. Remove\n");
        printf("5. User equipment\n");
        printf("0. EXIT\n");
        op= getInt(0,5,OPTION);
        switch (op) {
            case 1:
                insertUser(user);
                break;
            case 2:
                listUsers(*user);
                break;
            case 3:
                updateUserState(user);
                break;
            case 4:
                deleteUsers(user,*equipments);
                break;
            case 5:
                userEquipment(equipments,*user);
                break;

            default:
                puts(ERRO);
        }
    } while (op != 0);
}
void mainMenu(Equipments* equipments,Users* users){
    int op = 0;

    do {
        printf("\nMAIN MENU\n");
        printf("1. EQUIPMENT MANAGMENT\n");
        printf("2. USER MANAGMENT\n");
        printf("3. Search\n");
        printf("0. EXIT\n");
        op= getInt(0,3,OPTION);
        switch (op) {
            case 1:
                equipmentManagmentMenu(equipments);
                break;
            case 2:
                userManagmentMenu(users,equipments);
                break;
            case 3:
                search(equipments);
                break;

            default:
                puts(ERRO);
        }
    } while (op != 0);
}