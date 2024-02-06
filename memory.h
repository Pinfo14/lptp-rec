
/**
* @file memory.h
* @author Emanuel Pinto
* @date  30/01/2024
* @version 1
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
#define GROWTH_FACTOR 2

void initAllocEquipment(Equipments * equipments, int size);
void initAllocMain(Equipments *equipments, int size);
void initAllocUser(Users * users, int size);
void reallocEquipment(Equipments* equipments);
void reallocMain(Equipments* equipments);
void reallocUser(Users* users);
void freeMem(Equipments* equipments,Users* users);
#endif //LPTP_MEMORY_H
