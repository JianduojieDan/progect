#ifndef ENEMY_H
#define ENEMY_H

#include "raylib.h"
#include "globals.h"
#include "levels.h"

struct Enemy {
    size_t row;
    size_t column;
    int speed;
    int health;
    EnemyState state;


    Enemy() : row(0), column(0), speed(1), health(100), state(IDLE) {}
};
void move_enemy(Enemy &enemy) {

    int dx = GetRandomValue(-2, 1);
    int dy = GetRandomValue(-2, 1);


    int next_row = static_cast<int>(enemy.row) + dy;
    int next_column = static_cast<int>(enemy.column) + dx;


    if (next_row >= 0 && next_row < level.rows &&
        next_column >= 0 && next_column < level.columns &&
        level.data[next_row * level.columns + next_column] != WALL) {
        enemy.row = static_cast<size_t>(next_row);
        enemy.column = static_cast<size_t>(next_column);
    }
}


bool check_collision_with_player(const Enemy &enemy) {
    if (player_row == enemy.row && player_column == enemy.column) {
        game_state = LOSE_STATE;
        return true;
    }
    return false;
}

#endif
