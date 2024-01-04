#ifndef SOUND_H
#define SOUND_H

#include "raylib.h"
#include "globals.h"
#include <iostream>
#include <string>
#include <cassert>
using namespace std;


inline void load_sound(){
     coin_sound = LoadSound("../projects/data/sounds/collectcoin-6075.wav");
     exit_sound = LoadSound("../projects/data/sounds/wood-door-slam-46791.wav");
    entrance_sound = LoadSound("../projects/data/sounds/wood-door-slam-46791.wav");
    diamond_sound = LoadSound("../projects/data/sounds/scale-c6-106131.wav");
}

#endif //SOUND_H