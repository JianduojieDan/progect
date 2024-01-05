#ifndef GLOBALS_H
#define GLOBALS_H

#include "raylib.h"
#include "music.h"
#include <string>
#include <cstddef>

/* Game Elements */

const char FLOOR    = ' ';
const char WALL     = '#';
const char ENTRANCE = 'P';
const char EXIT     = 'E';
const char COIN     = '*';
const char DIAMOND  = '1';
const char ENEMY = '4';

/* Levels */

struct level {
    size_t rows = 0, columns = 0;
    char *data = nullptr;
};

char LEVEL_1_DATA[] = {
    '#', '#', '#', '#', '#', '#', '#', '#', '#',
    '#', 'P', ' ', ' ', '*', ' ', ' ', 'E', '#',
    '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_1 = {
    3, 9,
    LEVEL_1_DATA
};

char LEVEL_2_DATA[] = {
        '#', '#', '#',
        '#', 'P', '#',
        '#', ' ', '#',
        '#', ' ', '#',
        '#', '*', '#',
        '#', ' ', '#',
        '#', ' ', '#',
        '#', 'E', '#',
        '#', '#', '#'
};
level LEVEL_2 = {
        9, 3,
        LEVEL_2_DATA
};

char LEVEL_3_DATA[] = {
        '#', '#', '#', '#', '#', '#', '#', '#', '#',
        '#', 'P', ' ', ' ', '#', 'E', ' ', ' ', '#',
        '#', '#', '#', ' ', '#', '#', '#', ' ', '#',
        '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#',
        '#', ' ', '#', '#', '#', '*', '#', '#', '#',
        '#', '*', '#', '*', '#', ' ', ' ', ' ', '#',
        '#', ' ', '#', ' ', '#', '#', '#', ' ', '#',
        '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_3 = {
        9, 9,
        LEVEL_3_DATA
};
char LEVEL_4_DATA[] = {
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
        '#', 'P', ' ', '*', ' ', '#', ' ', ' ', ' ', ' ', '#',
        '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#',
        '#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#',
        '#', '1', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', ' ', ' ', '#', ' ', '#', '*', '#', ' ', '#',
        '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
        '#', ' ', '#', '#', '#', '#', '#', '#', '#', 'E', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_4 = {
        10, 11,
        LEVEL_4_DATA
};

char LEVEL_5_DATA[] = {
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
        '#', 'P', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '*', '#',
        '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '*', ' ', ' ', '#',
        '#', ' ', '#', ' ', '*', ' ', '#', ' ', ' ', ' ', '#', '#', '#',
        '#', '1', '#', '#', '#', '*', '#', '#', '#', ' ', ' ', ' ', '#',
        '#', ' ', '1', ' ', '#', ' ', ' ', '1', '#', ' ', '#', ' ', '#',
        '#', '#', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', ' ', ' ', '*', ' ', '#', ' ', ' ', ' ', '#', '1', '#',
        '#', ' ', '#', '#', '#', ' ', '#', '*', '#', ' ', '#', 'E', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_5 = {
        10, 13,
        LEVEL_5_DATA
};
char LEVEL_6_DATA[] = {
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
        '#', 'P', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '*', ' ', ' ', ' ', '#',
        '#', ' ', '#', '#', '#', ' ', '#', '*', '#', ' ', '#', ' ', '#', '#', '#',
        '#', ' ', '1', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#',
        '#', '#', '#', '4', '#', '*', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', '*', '#', ' ', '#', ' ', '#',
        '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '*', '#', '4', '#',
        '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '1', '#', ' ', ' ', ' ', '#',
        '#', ' ', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', 'E', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_6 = {
        10, 15,
        LEVEL_6_DATA
};

char LEVEL_7_DATA[] = {
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
        '#', 'P', ' ', '*', ' ', ' ', '#', '*', ' ', ' ', '#', ' ', '*', ' ', ' ', '*', '#',
        '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', '*', '#', '#', ' ', ' ', ' ', '#',
        '#', '*', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '*', ' ', ' ', '#', '#', '*', '#',
        '#', '#', '#', ' ', '#', '*', '#', '#', '#', '*', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', '#', '*', '#', ' ', ' ', ' ', '#', ' ', '#', '*', '#', '*', '#', ' ', '#',
        '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '*', '#', ' ', '#', ' ', '#',
        '#', ' ', ' ', ' ', '*', ' ', ' ', '*', ' ', ' ', ' ', '4', ' ', ' ', ' ', ' ', '#',
        '#', '*', '#', '#', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', '#', '#', ' ', '#',
        '#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#',
        '#', ' ', '#', '*', '#', '*', '#', '#', ' ', ' ', '#', ' ', '#', '#', '#', ' ', '#',
        '#', ' ', '#', ' ', ' ', '*', ' ', '4', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#',
        '#', ' ', '#', '#', '#', '#', '#', ' ', '#', '#', '#', '1', '#', '4', '#', ' ', '#',
        '#', '*', ' ', ' ', '*', '1', '#', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', '#',
        '#', ' ', '#', '*', '#', '#', '#', '*', '#', ' ', '#', '#', '#', ' ', '#', '*', '#',
        '#', '#', '#', '#', '#', '#', '#', '1', '#', '#', '#', '#', '#', '#', '#', 'E', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_7 = {
        17, 17,
        LEVEL_7_DATA
};

char LEVEL_8_DATA[] = {
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
        '#', 'P', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '*', ' ', ' ', '#',
        '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '#', ' ', '#', '#', '#', ' ', '1', '#', '#', '#',
        '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#',
        '#', '#', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', '#', '#', ' ', '#',
        '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#',
        '#', ' ', '#', '*', '#', '#', '#', ' ', '#', ' ', '#', '*', '#', '#', '#', ' ', '#', ' ', '#',
        '#', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*', '#',
        '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '*', '#', '1', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', '#', ' ', '1', '4', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', '*', '#', ' ', '#',
        '#', '*', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*', '#',
        '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '*', '#', ' ', '#', '*', '#', ' ', '#', ' ', '#',
        '#', '1', '#', ' ', ' ', ' ', '#', ' ', '1', ' ', '*', '4', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', '*', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', '*', '#', '*', '#', '1', '#',
        '#', ' ', ' ', '4', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#',
        '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', ' ', '#', '*', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#', ' ', '#',
        '#', '*', '#', ' ', '#', '#', '#', ' ', '#', ' ', '#', '*', '#', '*', '#', ' ', '#', '4', '#',
        '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '4', '4', '#',
        '#', '#', '*', '#', '#', '*', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', 'E', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_8 = {
        21, 19,
        LEVEL_8_DATA
};

char LEVEL_9_DATA[] = {
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#',
        '#', 'P', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '#',
        '#', '*', '#', '#', '#', '*', '#', '*', '#', '#', '*', '#', '#', '#', '*', '*', '#', '#', '#', '*', '#', '#', '#', '*', '*', '#', '#', '#', '*', '#',
        '#', '*', '*', '*', '#', '*', '#', '*', '*', '*', '#', '*', '*', '#', '*', '*', '*', '*', '#', '*', '*', '*', '#', '*', '*', '*', '*', '#', '*', '#',
        '#', '#', '#', '*', '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '#', '*', '#', '*', '*', '*', '#', '*', '#', '*', '#', '*', '*', '*', '#', '*', '#', '*', '*', '*', '#', '*', '*', '*', '#', '*', '#', '#',
        '#', '*', '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '#',
        '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '#', '*', '*', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '*', '*', '#', '*', '*', '*', '#', '*', '#', '#',
        '#', '*', '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '#',
        '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '#', '*', '*', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '*', '*', '#', '*', '*', '*', '#', '*', '#', '#',
        '#', '*', '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '#',
        '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '#', '*', '*', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '*', '*', '#', '*', '*', '*', '#', '*', '#', '#',
        '#', '*', '#', '*', '#', '#', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '*', '#', '#', '#', '*', '#', '#', '#', '*', '#', '#',
        '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', 'E', '#', '#',
        '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'
};
level LEVEL_9 = {
        30, 30,
        LEVEL_9_DATA
};
// TODO: create all the other levels

const size_t LEVEL_COUNT = 9;
level LEVELS[LEVEL_COUNT] = {
    LEVEL_1,LEVEL_2,LEVEL_3,LEVEL_4,LEVEL_5,LEVEL_6,LEVEL_7,LEVEL_8,LEVEL_9
};

/* Loaded Level Data */

level level;
size_t level_index = -1;

/* Player Data */

const int POINTS_FOR_COIN = 10;
const int POINTS_FOR_DIAMOND = 1000;

size_t player_row;
size_t player_column;
int player_score = 0;

/* Graphics Metrics */

const float CELL_SCALE = 0.6f; // An aesthetic parameter to add some negative space around level
const float SCREEN_SCALE_DIVISOR = 900.0f; // The divisor was found through experimentation
                                           // to scale things accordingly to look pleasant.

float screen_width;
float screen_height;
float screen_scale; // Used to scale text/UI components size and displacements based on the screen size
float cell_size;
float shift_to_center_cell_by_x;
float shift_to_center_cell_by_y;

/* Fonts */

Font menu_font;

/* Menu Text Parameters */

const std::string MENU_TITLE     = "Dungeon";
const float MENU_TITLE_FONT_SIZE = 200.0f;
const float MENU_TITLE_Y_SHIFT   = 10.0f;
const Color MENU_TITLE_COLOR     = RED;

const std::string MENU_SUBTITLE     = "Press Enter to start the game";
const float MENU_SUBTITLE_FONT_SIZE = 30.0f;
const float MENU_SUBTITLE_Y_SHIFT   = 80.0f;
const Color MENU_SUBTITLE_COLOR     = WHITE;

/* Game Text Parameters */

const float GAME_SCORE_FONT_SIZE = 70.0f;
const float GAME_SCORE_Y_SHIFT   = 30.0f;
const Color GAME_SCORE_COLOR1    = GRAY;
const Color GAME_SCORE_COLOR2    = WHITE;

/* Images and Sprites */

Texture2D wall_image;
Texture2D floor_image;
Texture2D entrance_image;
Texture2D exit_image;
Texture2D enemy_image;

struct sprite {
    size_t frame_count    = 0;
    size_t frames_to_skip = 3;
    size_t frames_skipped = 0;
    size_t frame_index    = 0;
    bool loop = true;
    size_t prev_game_frame = 0;
    Texture2D *frames = nullptr;
};

sprite coin_sprite;
sprite player_sprite;
sprite diamond_sprite;


/* Sounds */
Sound coin_sound;
Sound exit_sound;
Sound entrance_sound;
Sound diamond_sound;
Sound lose_sound;

/* Background music */

Music music;
//coin_sound = LoadSound("../projects/data/sound/collectcoin-6075.wav");
//exit_sound = LoadSound("data/sounds/exit.wav");

/* Pause Text Parameters */

const std::string PAUSE_TITLE     = "Press Esc to unpause the game";
const float PAUSE_TITLE_FONT_SIZE = 30.0f;
const float PAUSE_TITLE_Y_SHIFT   = 0.0f;
const Color PAUSE_TITLE_COLOR     = WHITE;

/* Victory Menu Background */

// TODO: Add any variables or constants you need to create the background animation of the victory screen.

/* Victory Menu Text Parameters */

const std::string VICTORY_TITLE     = "You Won!";
const float VICTORY_TITLE_FONT_SIZE = 200.0f;
const float VICTORY_TITLE_Y_SHIFT   = 10.0f;
const Color VICTORY_TITLE_COLOR     = RED;

const std::string VICTORY_SUBTITLE     = "Press Enter to go back to menu";
const float VICTORY_SUBTITLE_FONT_SIZE = 30.0f;
const float VICTORY_SUBTITLE_Y_SHIFT   = 80.0f;
const Color VICTORY_SUBTITLE_COLOR     = WHITE;


/* Lose Menu Text Parameters */

const std::string LOSE_TITLE     = "GAME OVER!";
const float LOSE_TITLE_FONT_SIZE = 200.0f;
const float LOSE_TITLE_Y_SHIFT   = 10.0f;
const Color LOSE_TITLE_COLOR     = BLUE;

const std::string LOSE_SUBTITLE     = "Press Enter to go back to menu";
const float LOSE_SUBTITLE_FONT_SIZE = 30.0f;
const float LOSE_SUBTITLE_Y_SHIFT   = 80.0f;
const Color LOSE_SUBTITLE_COLOR     = WHITE;


/* Frame Counter */

size_t game_frame = 0;

/* Game State */

enum game_state {
    MENU_STATE,
    GAME_STATE,
    PAUSED_STATE,
    VICTORY_STATE,
    LOSE_STATE,
};
/* Enemy State */

enum EnemyState {
    PATROLLING,
    IDLE,
};

struct Bullet {
    Vector2 position;
    Vector2 speed;
    bool active;
};
/* player bullte */
Bullet bullet  = { { 0.0f, 0.0f }, { 5.0f, 5.0f }, false };;

game_state game_state = MENU_STATE;

/* Forward Declarations */

// PLAYER_H

void move_player(int dx, int dy);

// GRAPHICS_H

void draw_menu();
void draw_player_score();
void draw_level();
void derive_graphics_metrics_from_loaded_level();
void draw_pause_menu();
void create_victory_menu_background();
void animate_victory_menu_background();
void draw_victory_menu_background();
void draw_victory_menu();
void draw_lose_menu();

// IMAGES_H

void load_fonts();
void unload_fonts();

void load_images();
void unload_images();
void draw_image(Texture2D image, float x, float y, float width, float height);
void draw_image(Texture2D image, float x, float y, float size);

sprite load_sprite(
    const std::string &file_name_prefix,
    const std::string &file_name_suffix,
    size_t frame_count = 1,
    bool loop = true,
    size_t frames_to_skip = 3
);
void unload_sprite(sprite &sprite);
void draw_sprite(sprite &sprite, float x, float y, float width, float height);
void draw_sprite(sprite &sprite, float x, float y, float size);

//SOUNDS
inline void load_sound();

//music
inline void load_music();

// TODO: Add forward declarations of all your functions to avoid circular dependencies.

#endif // GLOBALS_H
