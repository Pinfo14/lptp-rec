//
// Created by emanu on 29/01/2024.
//

#ifndef LPTP_FILES_H
#define LPTP_FILES_H
#include "equipment.h"
#define FILENAME_EQUIPMENT "../data/data_eq.bin"
#define FILENAME_MAINTENANCE "../data/data_main.bin"
#define FAILURE_READING_FILE "File reading failure"
#define FAILURE_CREATING_FILE "File creating failure"
#define FAILURE_OVERWRITING_FILE "File overwriting failure"
#define FAILURE_WRITING_FILE "File writing failure"

void loadEquipment(Equipments *equipments);
void saveEquipments(Equipments *equipments);
void loadMaintenance(Maintenances * maintenances);
void saveMaintenance(Maintenances * maintenances);
void importEquipment(Equipments *equipments,Maintenances *maintenances);
void exportEquipments(Equipments *equipments,Maintenances *maintenances);
void loadFile(Equipments *equipments);
void saveFile(Equipments *equipments);
#endif //LPTP_FILES_H
