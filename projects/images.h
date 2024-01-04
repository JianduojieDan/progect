#ifndef IMAGES_H
#define IMAGES_H

#include "raylib.h"
#include <iostream>
#include "globals.h"

#include <string>
#include <cassert>

void load_fonts() {
    menu_font = LoadFont("../projects/data/fonts/ARCADECLASSIC.TTF");
}

void unload_fonts() {
    UnloadFont(menu_font);
}


void load_images() {
    std::cout << GetWorkingDirectory();
    std::cout << GetApplicationDirectory();

    wall_image     = LoadTexture("../projects/data/images/wall.png");
    floor_image    = LoadTexture("../projects/data/images/floor.png");
    entrance_image = LoadTexture("../projects/data/images/entrance.png");
    exit_image     = LoadTexture("../projects/data/images/exit.png");
    coin_sprite    = load_sprite("../projects/data/images/coin/coin", ".png", 9);
    player_sprite  = load_sprite("../projects/data/images/player/player", ".png", 11);
    diamond_sprite = load_sprite("../projects/data/diamond/diamond", ".png", 4);
}

void unload_images() {
    UnloadTexture(wall_image);
    UnloadTexture(floor_image);
    UnloadTexture(entrance_image);
    UnloadTexture(exit_image);
    unload_sprite(coin_sprite);
    unload_sprite(player_sprite);
    unload_sprite(diamond_sprite);
}

void draw_image(Texture2D image, float x, float y, float size) {
    draw_image(image, x, y, size, size);
}

void draw_image(Texture2D image, float x, float y, float width, float height) {
    Rectangle source = { 0.0f, 0.0f, static_cast<float>(image.width), static_cast<float>(image.height) };
    Rectangle destination = { x, y, width, height };
    DrawTexturePro(image, source, destination, { 0.0f, 0.0f }, 0.0f, WHITE);
}

sprite load_sprite(
    const std::string &file_name_prefix,
    const std::string &file_name_suffix,
    size_t frame_count,
    bool loop,
    size_t frames_to_skip
) {
    assert(frame_count < 100);

    sprite result = {
        frame_count, frames_to_skip, 0, 0, loop, 0, new Texture2D[frame_count]
    };

    for (size_t i = 0; i < frame_count; ++i) {
        std::string file_name;
        if (frame_count < 10) {
            file_name = file_name_prefix;
            file_name += std::to_string(i);
            file_name += file_name_suffix;
        } else {
            file_name = file_name_prefix;
            file_name += i < 10 ? ("0" + std::to_string(i)) : std::to_string(i);
            file_name += file_name_suffix;
        }
        result.frames[i] = LoadTexture(file_name.c_str());
    }

    return result;
}

void unload_sprite(sprite &sprite) {
    assert(sprite.frames != nullptr);

    for (size_t i = 0; i < sprite.frame_count; ++i) {
        UnloadTexture(sprite.frames[i]);
    }
    delete[] sprite.frames;
    sprite.frames = nullptr;
}

void draw_sprite(sprite &sprite, float x, float y, float size) {
    draw_sprite(sprite, x, y, size, size);
}

void draw_sprite(sprite &sprite, float x, float y, float width, float height) {
    draw_image(sprite.frames[sprite.frame_index], x, y, width, height);

    if (sprite.prev_game_frame == game_frame) {
        return;
    }
    if (sprite.frames_skipped < sprite.frames_to_skip) {
        ++sprite.frames_skipped;
    } else {
        sprite.frames_skipped = 0;

        ++sprite.frame_index;
        if (sprite.frame_index >= sprite.frame_count) {
            sprite.frame_index = sprite.loop ? 0 : sprite.frame_count - 1;
        }
    }
    sprite.prev_game_frame = game_frame;
}

#endif // IMAGES_H
