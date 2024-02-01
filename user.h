//
// Created by emanu on 30/01/2024.
//

#ifndef LPTP_USER_H
#define LPTP_USER_H
#include "equipment.h"
#define MAX_ACRON 5
#define MAX_CHAR 100
#define MIN_ID 1
#define MAX_ID 999999
#define NOT_FOUND "USER NOT FOUND"


typedef enum {Inactive,Active}UserState;
typedef struct {
    int id;
    char name[MAX_CHAR];
    char acronym[MAX_ACRON];
    UserState state;
    char function[MAX_CHAR];
}User;
typedef struct {
    int count;
    User *users;
}Users;
void insertUser(Users *users);
void listUsers(Users users);
void updateUserState(Users *users);
void deleteUsers(Users *users,Equipments equipments);
void userEquipment(Equipments *equipments,Users users);

#endif //LPTP_USER_H
