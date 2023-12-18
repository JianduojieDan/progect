#include "raylib.h"
#include <cstdlib>
#include <ctime>
#include <cmath>

struct Star {
    Vector2 position;
    Vector2 velocity;
    Color color;
    float size;
    int points;
    float orientation;
};


Star CreateStar() {
    Star star;
    star.position = { static_cast<float>(rand() % GetScreenWidth()), static_cast<float>(rand() % GetScreenHeight()) };
    star.velocity = { static_cast<float>(rand() % 5 ), static_cast<float>(rand() % 5 ) };
    star.color = { static_cast<unsigned char>(rand() % 256), static_cast<unsigned char>(rand() % 256), static_cast<unsigned char>(rand() % 256), 255 };
    star.points = rand() % 7 + 5;
    star.size = static_cast<float>(rand() % 20 + 10);
    star.orientation = static_cast<float>(rand() % 360);
    return star;
}

void UpdateStar(Star &star) {
    star.position.x += star.velocity.x;
    star.position.y += star.velocity.y;

    if (star.position.x < 0 || star.position.x > GetScreenWidth()) {
        star.velocity.x *= -1;
    };
    if (star.position.y < 0 || star.position.y > GetScreenHeight()) {
        star.velocity.y *= -1;
    }
}

void DrawStar(const Star &star) {
    float angleStep = 360.0f / star.points;
    float lineThickness = 2.0f;

    Vector2* vertices = new Vector2[star.points];
    for (int i = 0; i < star.points; i++) {
        float angle = i * angleStep + star.orientation;
        vertices[i] = { star.position.x + star.size * cosf(angle * DEG2RAD), star.position.y + star.size * sinf(angle * DEG2RAD) };
    }

    for (int i = 0; i < star.points; i++) {
        DrawLineEx(vertices[i], star.position, lineThickness, star.color);
    }

    for (int i = 0; i < star.points; i++) {
        int nextIndex = (i + 1) % star.points;
        DrawLineEx(vertices[i], vertices[nextIndex], lineThickness, star.color);
    }

    delete[] vertices;
}


int main() {

    const int screenWidth = 1000;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Stars");
    SetTargetFPS(60);

    srand(time(NULL));
    const int numStars = 70;
    Star stars[numStars];

    for (int i = 0; i < numStars; i++) {
        stars[i] = CreateStar();
    }

    while (!WindowShouldClose()) {
        for (int i = 0; i < numStars; i++) {
            UpdateStar(stars[i]);
        }

        BeginDrawing();
        ClearBackground(BLACK);

        for (int i = 0; i < numStars; i++) {
            DrawStar(stars[i]);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
