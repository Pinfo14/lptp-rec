#include <stdio.h>
#include "stdlib.h"
#include "equipment.h"
#include "menu.h"
#include "files.h"
int main() {

    Equipments equipments={.count = 0};
    Users users={.count = 0};

//     loadFile( &equipments);
  //  importEquipment(&equipments,&maintenance);
  loadEquipment(&equipments);
    loadUser(&users);
 // loadMaintenance(&maintenance);
    mainMenu(&equipments,&users);

   // exportEquipments(&equipments,&maintenance);
  saveEquipments(&equipments);
    saveUser(&users);
  //
  //  saveMaintenance(&maintenance);
    //free( equipments->equipment->maintenance);
   // free(  equipments->equipment);
    //free(equipments);

    return 0;
}
