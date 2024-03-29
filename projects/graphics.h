#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "raylib.h"

#include "globals.h"
#include "images.h"
#include "utilities.h"

#include <string>
#include <cmath>

void draw_menu() {
    ClearBackground(BLACK);

    const char *title = MENU_TITLE.c_str();
    const float title_font_size = MENU_TITLE_FONT_SIZE * screen_scale;
    const float title_y_shift   = MENU_TITLE_Y_SHIFT   * screen_scale;
    Vector2 title_size = MeasureTextEx(menu_font, title, title_font_size, 2);
    Vector2 title_position = {
            (screen_width - title_size.x) * 0.5f,
            screen_height * 0.5f - title_size.y * 0.5f - title_y_shift
    };
    DrawTextEx(menu_font, title, title_position, title_font_size, 1, MENU_TITLE_COLOR);

    const char *subtitle = MENU_SUBTITLE.c_str();
    const float subtitle_font_size = MENU_SUBTITLE_FONT_SIZE * screen_scale;
    const float subtitle_y_shift   = MENU_SUBTITLE_Y_SHIFT   * screen_scale;
    Vector2 subtitle_size = MeasureTextEx(menu_font, subtitle, subtitle_font_size, 1);
    Vector2 subtitle_position = {
            (screen_width - subtitle_size.x) * 0.5f,
            screen_height * 0.5f - subtitle_size.y * 0.5f + subtitle_y_shift
    };
    DrawTextEx(menu_font, subtitle, subtitle_position, subtitle_font_size, 1, MENU_SUBTITLE_COLOR);
}

void draw_player_score() {
    const float score_font_size  = GAME_SCORE_FONT_SIZE * screen_scale;
    const float score_top_margin = GAME_SCORE_Y_SHIFT   * screen_scale;

    std::string score_text = std::string("Score ");
    score_text += std::to_string(player_score);

    Vector2 score_size = MeasureTextEx(menu_font, score_text.c_str(), score_font_size, 1);
    Vector2 score_position = { (screen_width - score_size.x) * 0.5f, score_top_margin };
    DrawTextEx(menu_font, score_text.c_str(), score_position, score_font_size, 1, GAME_SCORE_COLOR1);
    score_position.x -= 4 * screen_scale;
    score_position.y -= 4 * screen_scale;
    DrawTextEx(menu_font, score_text.c_str(), score_position, score_font_size, 1, GAME_SCORE_COLOR2);
}

void derive_graphics_metrics_from_loaded_level() {
    screen_width  = static_cast<float>(GetScreenWidth());
    screen_height = static_cast<float>(GetScreenHeight());

    cell_size = std::min(
            screen_width  / static_cast<float>(level.columns),
            screen_height / static_cast<float>(level.rows)
    ) * CELL_SCALE;
    screen_scale = std::min(screen_width, screen_height) / SCREEN_SCALE_DIVISOR;
    float level_width  = static_cast<float>(level.columns) * cell_size;
    float level_height = static_cast<float>(level.rows)    * cell_size;
    shift_to_center_cell_by_x = (screen_width - level_width)   * 0.5f;
    shift_to_center_cell_by_y = (screen_height - level_height) * 0.5f;
}

void draw_level() {
    ClearBackground(BLACK);

    for(size_t row = 0; row < level.rows; ++row) {
        for(size_t column = 0; column < level.columns; ++column) {
            float x = shift_to_center_cell_by_x + static_cast<float>(column) * cell_size;
            float y = shift_to_center_cell_by_y + static_cast<float>(row) * cell_size;

            char cell = level.data[row * level.columns + column];
            switch (cell) {
                case FLOOR:
                    draw_image(floor_image, x, y, cell_size);
                    break;
                case WALL:
                    draw_image(wall_image, x, y, cell_size);
                    break;
                case ENTRANCE:
                    draw_image(floor_image, x, y, cell_size);
                    draw_image(entrance_image, x, y, cell_size);
                    break;
                case EXIT:
                    draw_image(floor_image, x, y, cell_size);
                    draw_image(exit_image, x, y, cell_size);
                    break;
                case ENEMY:
                    draw_image(floor_image, x, y, cell_size);
                    draw_image(enemy_image, x, y, cell_size);
                    break;
                case COIN:
                    draw_image(floor_image, x, y, cell_size);
                    draw_sprite(coin_sprite, x, y, cell_size);
                    break;
                case DIAMOND:
                    draw_image(floor_image, x, y, cell_size);
                    draw_sprite(diamond_sprite, x, y, cell_size);
                    break;
                default:
                    break;
            }
        }
    }
}

void draw_player() {
    float x = shift_to_center_cell_by_x + static_cast<float>(player_column) * cell_size;
    float y = shift_to_center_cell_by_y + static_cast<float>(player_row) * cell_size;
    draw_sprite(player_sprite, x, y, cell_size);
}


//TODO enemy

void draw_pause_menu() {
    ClearBackground(BLACK);

    const char *title = PAUSE_TITLE.c_str();
    const float title_font_size = PAUSE_TITLE_FONT_SIZE * screen_scale;
    const float title_y_shift   = PAUSE_TITLE_Y_SHIFT   * screen_scale;
    Vector2 title_size = MeasureTextEx(menu_font, title, title_font_size, 1);
    Vector2 title_position = {
            (screen_width - title_size.x) * 0.5f,
            screen_height * 0.5f - title_size.y * 0.5f + title_y_shift
    };
    DrawTextEx(menu_font, title, title_position, title_font_size, 1, PAUSE_TITLE_COLOR);
}

void create_victory_menu_background() {
    EndDrawing();
    BeginDrawing();
    ClearBackground(BLACK);
    EndDrawing();
    BeginDrawing();
    ClearBackground(BLACK);
}


#define NUM_BALLS 1000

struct Ball {
    Vector2 position;
    Vector2 velocity;
    Vector2 previousPosition;
    Color color;
};

Ball balls[NUM_BALLS];

void Init() {
    for (int i = 0; i < NUM_BALLS; i++) {
        balls[i].position.x = GetRandomValue(0, GetScreenWidth());
        balls[i].position.y = GetRandomValue(0, GetScreenHeight());
        balls[i].velocity.x = GetRandomValue(-3, 3);
        balls[i].velocity.y = GetRandomValue(-3, 3);
        balls[i].color = WHITE;
    }
}

void Update() {
    for (int i = 0; i < NUM_BALLS; i++) {
        balls[i].previousPosition = balls[i].position;
        balls[i].position.x += balls[i].velocity.x;
        balls[i].position.y += balls[i].velocity.y;

        // Check for collisions with the screen edges
        if (balls[i].position.x < 0 || balls[i].position.x > GetScreenWidth()) {
            balls[i].velocity.x = -balls[i].velocity.x;
        }
        if (balls[i].position.y < 0 || balls[i].position.y > GetScreenHeight()) {
            balls[i].velocity.y = -balls[i].velocity.y;
        }
    }
}

void Draw() {
    for (int i = 0; i < NUM_BALLS; i++) {
        DrawCircleV(balls[i].position, 1, balls[i].color);
        DrawLineV(balls[i].previousPosition, balls[i].position, LIGHTGRAY);
    }
}

void animate_victory_menu_background() {
    //TODO
    Init();
    Update();
}

void draw_victory_menu_background() {
    //TODO
    Draw();
}

void draw_victory_menu() {
    DrawRectangle(
            0, 0,
            static_cast<int>(screen_width), static_cast<int>(screen_height),
            { 0, 0, 0, 10 }
    );

    animate_victory_menu_background();
    draw_victory_menu_background();

    const char *title = VICTORY_TITLE.c_str();
    const float title_font_size = VICTORY_TITLE_FONT_SIZE * screen_scale;
    const float title_y_shift   = VICTORY_TITLE_Y_SHIFT   * screen_scale;
    Vector2 title_size = MeasureTextEx(menu_font, title, title_font_size, 1);
    Vector2 title_position = {
            (screen_width - title_size.x) * 0.5f,
            screen_height * 0.5f - title_size.y * 0.5f - title_y_shift
    };
    DrawTextEx(menu_font, title, title_position, title_font_size, 1, VICTORY_TITLE_COLOR);

    const char *subtitle = VICTORY_SUBTITLE.c_str();
    const float subtitle_font_size = VICTORY_SUBTITLE_FONT_SIZE * screen_scale;
    const float subtitle_y_shift   = VICTORY_SUBTITLE_Y_SHIFT   * screen_scale;
    Vector2 subtitle_size = MeasureTextEx(menu_font, subtitle, subtitle_font_size, 1);
    Vector2 subtitle_position = {
            (screen_width - subtitle_size.x) * 0.5f,
            screen_height * 0.5f - subtitle_size.y * 0.5f + subtitle_y_shift
    };
    DrawTextEx(menu_font, subtitle, subtitle_position, subtitle_font_size, 1, VICTORY_SUBTITLE_COLOR);
}



#define NUM_BALL 1000

struct BallS {
    Vector2 position;
    Vector2 velocity;
    Vector2 previousPosition;
    Color color;
};

Ball ballS[NUM_BALL];

void InitS() {
    for (int i = 0; i < NUM_BALL; i++) {
        ballS[i].position.x = GetRandomValue(0, GetScreenWidth());
        ballS[i].position.y = GetRandomValue(0, GetScreenHeight());
        ballS[i].velocity.x = GetRandomValue(-1, 1);
        ballS[i].velocity.y = GetRandomValue(-1, 1);
        ballS[i].color = PINK;
    }
}

void UpdateS() {
    for (int i = 0; i < NUM_BALL; i++) {
        ballS[i].previousPosition = ballS[i].position;
        ballS[i].position.x += ballS[i].velocity.x;
        ballS[i].position.y += ballS[i].velocity.y;

        // Check for collisions with the screen edges
        if (ballS[i].position.x < 0 || ballS[i].position.x > GetScreenWidth()) {
            ballS[i].velocity.x = -ballS[i].velocity.x;
        }
        if (ballS[i].position.y < 0 || ballS[i].position.y > GetScreenHeight()) {
            ballS[i].velocity.y = -ballS[i].velocity.y;
        }
    }
}

void DrawS() {
    for (int i = 0; i < NUM_BALLS; i++) {
        DrawCircleV(ballS[i].position, 3, ballS[i].color);
        DrawLineV(ballS[i].previousPosition, ballS[i].position, YELLOW);
    }
}
void animate_lose_menu_background() {
    //TODO
    InitS();
    UpdateS();
}


void draw_lose_menu_background() {
    //TODO
    DrawS();
}

void draw_lose_menu() {
    DrawRectangle(
            0, 0,
            static_cast<int>(screen_width), static_cast<int>(screen_height),
            { 0, 0, 0, 10 }
    );

    animate_lose_menu_background();
    draw_lose_menu_background();

    const char *title = LOSE_TITLE.c_str();
    const float title_font_size = LOSE_TITLE_FONT_SIZE * screen_scale;
    const float title_y_shift   = LOSE_TITLE_Y_SHIFT   * screen_scale;
    Vector2 title_size = MeasureTextEx(menu_font, title, title_font_size, 1);
    Vector2 title_position = {
            (screen_width - title_size.x) * 0.5f,
            screen_height * 0.5f - title_size.y * 0.5f - title_y_shift
    };
    DrawTextEx(menu_font, title, title_position, title_font_size, 1, LOSE_TITLE_COLOR);

    const char *subtitle = LOSE_SUBTITLE.c_str();
    const float subtitle_font_size = LOSE_SUBTITLE_FONT_SIZE * screen_scale;
    const float subtitle_y_shift   = LOSE_SUBTITLE_Y_SHIFT   * screen_scale;
    Vector2 subtitle_size = MeasureTextEx(menu_font, subtitle, subtitle_font_size, 1);
    Vector2 subtitle_position = {
            (screen_width - subtitle_size.x) * 0.5f,
            screen_height * 0.5f - subtitle_size.y * 0.5f + subtitle_y_shift
    };
    DrawTextEx(menu_font, subtitle, subtitle_position, subtitle_font_size, 1, LOSE_SUBTITLE_COLOR);
}

#endif // GRAPHICS_H
