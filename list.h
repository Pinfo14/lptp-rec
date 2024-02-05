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
#define NO_EQUIPMENT "No Equipment Found!!"


void listFreeEquipment(Equipments equipments);
void listRecicle(Equipments equipments);
void listAllEquipment(Equipments equipments);
void printEquipment(Equipment equipment);
#endif //LPTP_LIST_H
