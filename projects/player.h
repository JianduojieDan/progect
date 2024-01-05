#ifndef PLAYER_H
#define PLAYER_H

#include "raylib.h"
#include "sound.h"
#include "music.h"
#include "globals.h"
#include "levels.h"
#include "enemy.h"
using namespace std;

void someFunction() {
    bullet.position.x = 0.0f;
    bullet.position.y = 0.0f;
    bullet.speed.x = 5.0f;
    bullet.speed.y = 5.0f;
    bullet.active = false;
}

const int DAMAGE_BY_BULLET = 25;




void shoot_ball(int player_row, int player_column) {
    if (!bullet.active) {
        bullet.position = { (float)player_row, (float)player_column };
        bullet.active = true;
    }
}

bool CheckCollisionBulletEnemy(const Bullet& bullet, const Enemy& enemy) {

    float bulletRadius = 5.0f;
    float enemyWidth = 10.0f;
    float enemyHeight = 10.0f;


    float bulletLeft = bullet.position.x - bulletRadius;
    float bulletRight = bullet.position.x + bulletRadius;
    float bulletTop = bullet.position.y - bulletRadius;
    float bulletBottom = bullet.position.y + bulletRadius;


    float enemyLeft = enemy.column;
    float enemyRight = enemy.column + enemyWidth;
    float enemyTop = enemy.row;
    float enemyBottom = enemy.row + enemyHeight;


    if (bulletRight > enemyLeft && bulletLeft < enemyRight &&
        bulletBottom > enemyTop && bulletTop < enemyBottom) {
        return true;
    }
    return false;
}

void move_ball(Enemy &enemy) {
    if (bullet.active) {
        bullet.position.x += bullet.speed.x;
        bullet.position.y += bullet.speed.y;


        }
    }





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
        }else if (cell == DIAMOND) {
            level.data[next_player_row * level.columns + next_player_column] = FLOOR;
            player_score += POINTS_FOR_DIAMOND;
            PlaySound(diamond_sound);
        }else if (cell == ENEMY) {
            level.data[next_player_row * level.columns + next_player_column] = FLOOR;
            game_state = LOSE_STATE;
            PlaySound(lose_sound);
        }
        else if (cell == EXIT) {
            load_next_level();
            PlaySound(exit_sound);
        }else if (cell == ENTRANCE){
            PlaySound(entrance_sound);
        }
    }
}

#endif