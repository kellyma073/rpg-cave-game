#include "../../lib/tiles/SpawnTile.h"
#include <iostream>

SpawnTile::SpawnTile(){
    
}

void SpawnTile::print(){
    if(firstVisit){
        cout << dialogue.at(0);
    }else{
        cout << dialogue.at(1);
    }
}