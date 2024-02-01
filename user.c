//
// Created by emanu on 30/01/2024.
//

#include "user.h"
#include "stdio.h"
#include "input.h"
#include "list.h"
#include "search.h"

int searchUser(Users users, int id){
    for (int i = 0; i < users.count; ++i) {
        if(id == users.users[i].id){
            return i;
        }
    }
    return -1;
}


void insertUser(Users *users){
        users->users[users->count].id = users->count+1;
        cleanInputBuffer();
        readString(users->users[users->count].name,MAX_CHAR,"Name: ");
        readString(users->users[users->count].acronym,MAX_ACRON,"Acronym: ");
        readString(users->users[users->count].function,MAX_CHAR,"Function: ");
        users->users[users->count].state= getInt(0,1,"State");
        users->count++;
}


void printUser(User user) {

    printf("%d   %s  %s  %s  %d\n",user.id,user.name,user.acronym,user.function,user.state);

}

void listUsers(Users users){

    if (users.count > 0 ) {
        for (int i = 0; i <users.count; i++) {
            printUser(users.users[i]);
        }
    }else {
        puts("No ");
    }
}


void updateUserState(Users *users){
    int id = 0;
    int position =0;
    if(users->count>0) {
        do {
            id = getInt(MIN_ID, MAX_ID, "Insert the id: ");
            position = searchUser(*users, id);
        } while (position == -1);

        users->users[position].state = getInt(0, 1, "state: ");
    }
}



void deleteUsers(Users *users, Equipments equipments) {
    int id = 0;
    int position = 0;

    if (users->count > 0) {
        do {
            id = getInt(MIN_ID, MAX_ID, "Insert the id: ");
            position = searchUser(*users, id);
        } while (position == -1);

        // Check if the user can be deleted
        int canDelete = 1;  // Assume deletion is possible
        for (int i = 0; i < equipments.count; ++i) {
            if (equipments.equipment[i].userCode == id) {
                printf("You can't delete this user!! Changing to inactive.\n");
                users->users[position].state = 0;
                canDelete = 0;  // Update the flag indicating deletion is not possible
                break;  // Exit the loop since deletion is not allowed
            }
        }

        // If the user can be deleted, proceed with deletion
        if (canDelete) {
            users->users[position] = users->users[users->count - 1];
            users->count--;

            printf("User with ID %d has been deleted.\n", id);
        }
    }
}

void userEquipment(Equipments *equipments,Users users){
    listFreeEquipment(*equipments);
    int eqId= getInt(MIN_ID,MAX_ID,"Insert equipment id: ");
    int eqPosition =searchEq(*equipments,eqId);
    int userPosition=-1;
    if(eqPosition!=-1){
        int userId= getInt(MIN_ID,MAX_ID,"Insert user id: ");
        userPosition= searchUser(users,userId);
        if(userPosition!=-1){
            if(equipments->equipment[eqPosition].userCode==0){
                equipments->equipment[eqPosition].userCode= userId;
            } else{
                printf("Equipment already in use");
            }
        } else{
            puts(NOT_FOUND);
        }
    } else{
        puts(NO_EQUIPMENT);
    }

}