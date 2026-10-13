#include "raylib.h"
#include <stdlib.h>

int main(void) {
  const int screenWidth = 800;
  const int screenHeight = 450;
  InitWindow(screenWidth, screenHeight, "generic sand game.c");
  SetTargetFPS(13);
  static int color[screenWidth * screenHeight /
                   100]; // sets total amount of cells which can be coloured
  int j = 0;             // integer used to zero out color
  int random = 0;        // integer used to pick which cell to put sand in
  while (j < (screenWidth * screenHeight / 100)) { // zeroing out color
    color[j] = 0;
    j = j + 1;
  }
  // to increase y axis by 1 add 80, so 81 is second pixel of second line, sets
  // which cells have sand in them

  int x_used_for_sand = 0;
  int y_used_for_sand = 0;
  while (x_used_for_sand != 50) {
    color[0 + y_used_for_sand] = 2;
    y_used_for_sand = y_used_for_sand + 80;
    x_used_for_sand = x_used_for_sand + 1;
  }

  while (!WindowShouldClose()) {
    int pixels_test = (screenWidth * screenHeight / 100) -
                      1; // just a variable used to calculate which pixels have
                         // sand in em so that we can give em *gravity*
    while (pixels_test >= 0) { // while it is more than 0 we will keep checking
      if (pixels_test + 80 <
          (screenWidth * screenHeight /
           100)) { // it checks if pixels_text + 80 is less than number of cells
                   // so that we dont check cell which does not even exist (80 =
                   // y(1))
        if (color[pixels_test + 80] == 0 &&
            color[pixels_test] != 0) { // if the cell below is empty
          color[pixels_test] = 0;      // removes sand from that cell
          color[pixels_test + 80] = 2; // adds sand to cell below
        } else {
          int col = pixels_test % 80;
          int can_go_left = (col > 0) && (color[pixels_test + 79] == 0);
          int can_go_right = (col < 79) && (color[pixels_test + 81] == 0);

          if (color[pixels_test] != 0 && can_go_left &&
              can_go_right) { // if below cell has sand but sand is not in cells
                              // left
                              // and right of it
            random = rand() % 2;
            if (random ==
                0) { // uses rng to determine which cell should have sand
              color[pixels_test] = 0;
              color[pixels_test + 79] = 2;
            } else if (random == 1) {
              color[pixels_test] = 0;
              color[pixels_test + 81] = 2;
            } else {
              exit(0);
            }
          } else if (color[pixels_test] != 0 &&
                     can_go_left) { // if below cell and right cell does not
                                    // have
                                    // sand. put sand in left
            color[pixels_test] = 0;
            color[pixels_test + 79] = 2;

          } else if (color[pixels_test] != 0 &&
                     can_go_right) { // if below cell and left cell does not
                                     // have sand.
                                     // put sand in right
            color[pixels_test] = 0;
            color[pixels_test + 81] = 2;
          } else if (color[pixels_test] != 0) {
          }
        }
      }

      pixels_test = pixels_test - 1;
    }
    BeginDrawing();
    ClearBackground(WHITE);
    int rectx = 0; // variables initiate for cells
    int recty = 0;
    int i_x = 0;
    int i_y = 0;
    int i = 0;
    while (recty < screenHeight) {
      while (rectx < screenWidth) {
        DrawRectangle(rectx, recty, 9, 9,
                      BLACK); // draws cell and if cell has color more than 0 it
                              // adds sand based on the color
        if (color[i] == 1) {
          DrawRectangle(rectx, recty, 9, 9, WHITE);
        } else if (color[i] == 2) {
          DrawRectangle(rectx, recty, 9, 9, (Color){203, 189, 147, 255});
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