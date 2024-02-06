#include <stdio.h>
#include "equipment.h"
#include "menu.h"
#include "files.h"
#include "memory.h"
int main() {
    setbuf(stdout,NULL);
    Equipments equipments={.count = 0};
    Users users={.count = 0};


    loadEquipment(&equipments);
    loadUser(&users);

    mainMenu(&equipments,&users);

    saveEquipments(&equipments);
    saveUser(&users);
    freeMem(&equipments,&users);


    return 0;
}
