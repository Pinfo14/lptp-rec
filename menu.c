//
// Created by emanu on 29/01/2024.
//
#include "menu.h"
#include "stdio.h"
void managmentMenu(Equipments equipments, Maintenances maintenances){
    int op = 0;

    do {
        printf("\nADMIN MENU\n");
        printf("1.Insert EQUIMPENT\n");
        printf("2. LIST\n");
        printf("3. maintenance\n");
        printf("4. update state\n");
        printf("0. EXIT\n");
        printf("CHOOSE OPTION: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                insertEquipments(&equipments);
                break;
            case 2:
                listEquipment(equipments);
                break;
            case 3:
                insertMaintenance(&equipments,maintenances.maintenance);
              // maintenanceEq(&equipments,&maintenances);
                break;
            case 4:
                updateState(&equipments);
                break;
            default:
                puts("erro");
        }
    } while (op != 0);
}
void mainMenu(Equipments equipments, Maintenances maintenances){
    int op = 0;

    do {
        printf("\nMAIN MENU\n");
        printf("1. ADMN\n");
        printf("2. useer\n");
        printf("0. EXIT\n");
        printf("CHOOSE OPTION: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                managmentMenu(equipments, maintenances);
                break;

            default:
                puts("erro");
        }
    } while (op != 0);
}