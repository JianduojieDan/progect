#include <raylib.h>
#include <cmath>

void draw_star(unsigned int rays, float x, float y, float inner_radius, float outer_radius, Color color = WHITE, float rotation_angle = 0.0f) {
    Vector2 starPoints[10];

    for (unsigned int i = 0; i < rays * 2; i += 2) {
        float angle1 = 2.0f * PI * i / (rays * 2) + rotation_angle;
        float angle2 = 2.0f * PI * (i + 1) / (rays * 2) + rotation_angle;

        starPoints[i / 2] = { x + static_cast<float>(outer_radius * cos(angle1)), y + static_cast<float>(outer_radius * sin(angle1)) };
        starPoints[rays + i / 2] = { x + static_cast<float>(inner_radius * cos(angle2)), y + static_cast<float>(inner_radius * sin(angle2)) };
    }

    for (unsigned int i = 0; i < rays; ++i) {
        int next = (i + 1) % rays;
        DrawTriangle({x, y}, starPoints[i], starPoints[next], color);
        DrawTriangle({x, y}, starPoints[next], starPoints[rays + i], color);
    }
}

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Rotating Stars Example");

    SetTargetFPS(60);

    float rotation_speed = 1.0f;

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(BLACK);

        for (int i = 0; i < 5; ++i) {
            float x = 100.0f + i * 150.0f;
            float y = screenHeight / 2;
            float radius = 40.0f;
            float inner_radius = 20.0f;

            float rotation_angle = i % 2 == 0 ? GetTime() * rotation_speed : -GetTime() * rotation_speed;

            draw_star(5, x, y, inner_radius, radius, GOLD, rotation_angle);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
