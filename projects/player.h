#ifndef PLAYER_H
#define PLAYER_H

#include "../../../.vcpkg-clion/vcpkg/installed/x64-windows/include/raylib.h"

#include "../../../../Default/Desktop/projects/globals.h"
#include "../../../../Default/Desktop/projects/levels.h"

void move_player(int dx, int dy) {
    int next_player_row = static_cast<int>(player_row) + dy;
    int next_player_column = static_cast<int>(player_column) + dx;

    if (!(next_player_row >= 0 && next_player_row < level.rows &&
          next_player_column >= 0 && next_player_column < level.columns)) {
        return;
    }
    char cell = level.data[next_player_row * level.columns + next_player_column];
    if (cell != WALL) {
        player_row = static_cast<size_t>(next_player_row);
        player_column = static_cast<size_t>(next_player_column);

        if (cell == COIN) {
            level.data[next_player_row * level.columns + next_player_column] = FLOOR;
            player_score += POINTS_FOR_COIN;
            PlaySound(coin_sound);
            // play sounds
        } else if (cell == EXIT) {
            load_next_level();
            PlaySound(exit_sound);
        }
    }
}

#endif PLAYER_H