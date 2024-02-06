
/**
* @file user.h
* @author Emanuel Pinto
* @date  30/01/2024
* @version 1
*
* @copyright Copyright (C) Emanuel 2024. All Rights MIT Licensed.
*
* @brief A header file providing function to manage users.
*
* This file contains a collection of functions for manage users.
* It includes functions to insert, list, update state, delete and add equipment to user.
*/#ifndef LPTP_USER_H
#define LPTP_USER_H

#include "equipment.h"

/**
 * @brief Maximum length for user acronym.
 */
#define MAX_ACRON 5

/**
 * @brief Maximum length for character arrays.
 */
#define MAX_CHAR 100

/**
 * @brief Minimum user ID.
 */
#define MIN_ID 1

/**
 * @brief Maximum user ID.
 */
#define MAX_ID 999999

/**
 * @brief Error message for user not found.
 */
#define NOT_FOUND "USER NOT FOUND"

/**
 * @brief Enumeration for user states.
 */
typedef enum {
    Inactive, Active
} UserState;

/**
 * @brief Structure to represent a user.
 */
typedef struct {
    int id;
    char name[MAX_CHAR];
    char acronym[MAX_ACRON];
    UserState state;
    char function[MAX_CHAR];
} User;

/**
 * @brief Structure to represent a collection of users.
 */
typedef struct {
    int count;
    int allocatedCel;
    User *users;
} Users;

/**
 * @brief Inserts a new user into the system.
 * @param users Pointer to the Users structure.
 */
void insertUser(Users *users);

/**
 * @brief Lists all users in the system.
 * @param users The Users structure containing user data.
 */
void listUsers(Users users);

/**
 * @brief Updates the state of an existing user.
 * @param users Pointer to the Users structure.
 */
void updateUserState(Users *users);

/**
 * @brief Deletes users from the system.
 * @param users Pointer to the Users structure.
 * @param equipments Pointer to the Equipments structure.
 */
void deleteUsers(Users *users, Equipments equipments);

/**
 * @brief Associates users with equipment.
 * @param equipments Pointer to the Equipments structure.
 * @param users The Users structure containing user data.
 */
void userEquipment(Equipments *equipments, Users users);

#endif //LPTP_USER_H