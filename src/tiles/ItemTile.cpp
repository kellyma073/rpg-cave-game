#include "../../lib/tiles/ItemTile.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void ItemTile::print(){
    srand(static_cast<unsigned int>(time(0)));
    int dialogueVal = rand() % 3;
    cout << dialogue.at(3) << dialogue.at(dialogueVal) << dialogue.at(4);
}