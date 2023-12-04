#include "raylib.h"
#include <iostream>

int main() {
    srand(42);
    const int screenWidth = 1000;
    const int screenHeight = 650;
    InitWindow(screenWidth, screenHeight, "Circles");

    SetTargetFPS(1);
    BeginDrawing();
    ClearBackground(BLACK);

    for (int i = 0; i < 100; i++)
    {
        float x = rand()/static_cast<float>(RAND_MAX) * screenWidth;
        float y = rand()/static_cast<float>(RAND_MAX) * screenHeight;
        Vector2 CirclePosition = {x , y};
        auto r = static_cast<unsigned char>(rand()/static_cast<float>(RAND_MAX) * 256);
        auto g = static_cast<unsigned char>(rand()/static_cast<float>(RAND_MAX) * 256);
        auto b = static_cast<unsigned char>(rand()/static_cast<float>(RAND_MAX) * 256);
        Color CircleColor = {r,g,b,255};
        float Radius = rand() / static_cast<float>(RAND_MAX) * 20;
        DrawCircleV(CirclePosition, Radius,CircleColor);
    }

    EndDrawing();
    while(!WindowShouldClose())
    {
        PollInputEvents();
    }
    CloseWindow();

    return 0;
}