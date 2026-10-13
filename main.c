#include "raylib.h"

int main(void)
{
  const int screenWidth = 800;
  const int screenHeight = 450;
  InitWindow(screenWidth, screenHeight, "generic sand game.c");
  SetTargetFPS(60);
  static int color[screenWidth * screenHeight / 100];
  int j = 0;
  while (j < (screenWidth * screenHeight / 100))
  {
    color[j] = 0;
    j = j + 1;
  }
  while (!WindowShouldClose())
  {
    color[81] = 2; //to increase y axis by 1 add 80, so 81 is second pixel of second line
    BeginDrawing();
    ClearBackground(WHITE);
    int rectx = 0;
    int recty = 0;
    int i_x = 0;
    int i_y = 0;
    int i = 0;
    while (recty < screenHeight)
    {
      while (rectx < screenWidth)
      {
        DrawRectangle(rectx, recty, 9, 9, BLACK);
        if (color[i] == 1)
        {
          DrawRectangle(rectx, recty, 9, 9, WHITE); 
        }
        else if (color[i] == 2)
        {
          DrawRectangle(rectx, recty, 9, 9, RED); 
        }
        rectx = rectx + 10;
        i_x = i_x + 1;
        i = i + 1;
      }
      rectx = 0;
      i_x = 0;
      recty = recty + 10;
      i_y = i_y + 1;
    }
    EndDrawing();
  }
  CloseWindow();
  return 0;
}