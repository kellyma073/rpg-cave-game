#include "Stats.h"
//#include "../Weapon.h" //for weapon implementation eventually

#pragma once

using namespace std;

class Player : public Stats{
    private:
        int x, y, buffCounter;
        //weapon Held;
        Stats baseStats;
        string name;

    public:
        Player() = delete;
        Player(Stats& bStats) : x{0}, y{0}, buffCounter{0}, baseStats{bStats}, name{""} {};
        void Attack();
        void Heal();
        void BuffChosen(string&);
        void Guard();
};