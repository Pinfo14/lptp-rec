
/**
* @file search.h
* @author Emanuel Pinto
* @date   01/02/2024
* @version 1
*
* @brief A header file providing function to search.
*
* This file contains a collection of functions for search equipments.
* It includes functions to search by id and by name.
*/
#ifndef LPTP_SEARCH_H
#define LPTP_SEARCH_H
#include "equipment.h"
#define CHAR_MAX 100


int searchEq(Equipments equipments, int id);
void searchById(Equipments equipments);
void searchEqByName(Equipments *equipments);
#endif //LPTP_SEARCH_H
