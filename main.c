#include <stdio.h>
#include "stdlib.h"
#include "equipment.h"
#include "menu.h"
#include "files.h"
int main() {

    Equipments equipments ;//={.count = 0};
    Maintenances maintenance; //={.count = 0};

//     loadFile( &equipments);
  //  importEquipment(&equipments,&maintenance);

  loadEquipment(&equipments);
  loadMaintenance(&maintenance);
    mainMenu(equipments, maintenance);

   // exportEquipments(&equipments,&maintenance);
  saveEquipments(&equipments);
    saveMaintenance(&maintenance);
    //free( equipments->equipment->maintenance);
   // free(  equipments->equipment);
    //free(equipments);

    return 0;
}
