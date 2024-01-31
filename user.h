//
// Created by emanu on 30/01/2024.
//

#ifndef LPTP_USER_H
#define LPTP_USER_H
#define MAX_ACRON 5
#define MAX_CHAR

typedef enum {Inactive,Active}UserState;
typedef struct {
    int id;
    char acronym[MAX_ACRON];
    char name[MAX_ACRON];
    UserState state;
    char function[MAX_CHAR];
}User;
typedef struct {
    int count;
    User *users;
}Users;
void insertUser(Users *users);
void changeState(Users *users);
void deleteUser(Users *users);

#endif //LPTP_USER_H
