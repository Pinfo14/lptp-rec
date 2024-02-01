//
// Created by emanu on 29/01/2024.
//

#ifndef LPTP_FILES_H
#define LPTP_FILES_H
#include "equipment.h"
#include "user.h"
#define FILENAME_EQUIPMENT "../data/data_eq.dat"
#define FILENAME_USER "../data/data_user.dat"
#define FAILURE_READING_FILE "File reading failure"
#define FAILURE_CREATING_FILE "File creating failure"
#define FAILURE_OVERWRITING_FILE "File overwriting failure"
#define FAILURE_WRITING_FILE "File writing failure"

void loadEquipment(Equipments *equipments);
void saveEquipments(Equipments *equipments);
void saveUser(Users * users);
void loadUser(Users * users);
#endif //LPTP_FILES_H
