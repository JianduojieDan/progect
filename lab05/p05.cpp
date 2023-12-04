#include "raylib.h"

int main(){
    const int screenWidth = 800;
    const int screenHeight = 450;
    const int circlesNumber = 30;
    unsigned char a = 0;
    unsigned char r = 255;
    unsigned char g = 0;
    unsigned char b = 0;
    float radius = 300;

    InitWindow(screenWidth, screenHeight, "Gradient");

    SetTargetFPS(1);
    BeginDrawing();
    ClearBackground(BLACK);

    for (int i = 0; circlesNumber > i; ++i)
    {
        float X = static_cast<float>(screenWidth/2);
        float Y = static_cast<float>(screenHeight/2);
        Vector2 CirclePosition = {X , Y};
        a += 5;
        Color circleColor = {r, g, b, a};
        radius -= 20;
        DrawCircleV(CirclePosition, radius,circleColor);
    }
    EndDrawing();
    while(!WindowShouldClose())
    {
        PollInputEvents();
    }
    CloseWindow();

    return 0;
}