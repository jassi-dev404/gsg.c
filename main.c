#include "raylib.h"
#include <stdlib.h>

static int color[300 * 400 / 2 * 2];

int var_stuff = 0;
int var_stuff_2 = 0;
int var_stuff_3 = 1;
int y_var;

int L_shape(int color_sand, int x_var) {
  int y_var = x_var;
  while (var_stuff_2 !=
         30) { // this sets the vertical length of L block's non horizontal part
    while (var_stuff !=
           15) { // this sets horizontal length of L block's non horizontal part
      color[x_var] = color_sand;
      x_var = x_var + 1;
      var_stuff = var_stuff + 1;
    }
    var_stuff = 0;
    x_var = y_var + 150 * var_stuff_3;
    var_stuff_2 = var_stuff_2 + 1;
    var_stuff_3 = var_stuff_3 + 1;
  }
  var_stuff_2 = 0;
  var_stuff = 0;
  x_var = 0;

  while (var_stuff_2 !=
         15) { // this sets the vertical length of L block's horizontal part
    while (var_stuff !=
           35) { // this sets the horizontal length of L block's horizontal part
      color[x_var] = color_sand;
      x_var = x_var + 1;
      var_stuff = var_stuff + 1;
    }
    var_stuff = 0;
    x_var = y_var + 150 * var_stuff_3;
    var_stuff_2 = var_stuff_2 + 1;
    var_stuff_3 = var_stuff_3 + 1;
  }

  return 0;
}

int main(void) {
  const int screenWidth = 300;
  const int actualscreenwidth = 700;
  const int screenHeight = 400;
  const int actualscreenhieght = 400;
  const int pixel_size = 2;
  InitWindow(actualscreenwidth, actualscreenhieght, "generic sand game.c");
  SetTargetFPS(45);

  int j = 0;      // integer used to zero out color
  int random = 0; // integer used to pick which cell to put sand in
  while (j < (screenWidth * screenHeight / pixel_size *
              pixel_size)) { // zeroing out color
    color[j] = 0;
    j = j + 1;
  }
  // screenWidth / pixel_size = number of pixels required to go down the y axis
  // by 1

  L_shape(1, 30);

  while (!WindowShouldClose()) {
    int pixels_test = (screenWidth * screenHeight / pixel_size * pixel_size) -
                      1; // just a variable used to calculate which pixels have
                         // sand in em so that we can give em *gravity*
    while (pixels_test >= 0) { // while it is more than 0 we will keep checking
      if (pixels_test + (screenWidth / pixel_size) <
          ((screenWidth / pixel_size) * (screenHeight / pixel_size))) {
        if (color[pixels_test + (screenWidth / pixel_size)] == 0 &&
            color[pixels_test] != 0) { // if the cell below is empty
          color[pixels_test + (screenWidth / pixel_size)] =
              color[pixels_test]; // adds sand to cell below
          color[pixels_test] = 0; // removes sand from that cell
        } else {
          int col = pixels_test % (screenWidth / pixel_size);
          int can_go_left =
              (col > 0) &&
              (color[pixels_test + ((screenWidth / pixel_size) - 1)] == 0);
          int can_go_right =
              (col < ((screenWidth / pixel_size) - 1)) &&
              (color[pixels_test + ((screenWidth / pixel_size) + 1)] == 0);

          if (color[pixels_test] != 0 && can_go_left &&
              can_go_right) { // if below cell has sand but sand is not in cells
                              // left
                              // and right of it
            random = rand() % 2;
            if (random ==
                0) { // uses rng to determine which cell should have sand

              color[pixels_test + ((screenWidth / pixel_size) - 1)] =
                  color[pixels_test];
              color[pixels_test] = 0;
            } else if (random == 1) {

              color[pixels_test + (screenWidth / pixel_size) + 1] =
                  color[pixels_test];
              color[pixels_test] = 0;
            } else {
              exit(0);
            }
          } else if (color[pixels_test] != 0 &&
                     can_go_left) { // if below cell and right cell does not
                                    // have
                                    // sand. put sand in left

            color[pixels_test + ((screenWidth / pixel_size) - 1)] =
                color[pixels_test];
            color[pixels_test] = 0;

          } else if (color[pixels_test] != 0 &&
                     can_go_right) { // if below cell and left cell does not
                                     // have sand.
                                     // put sand in right

            color[pixels_test + ((screenWidth / pixel_size) + 1)] =
                color[pixels_test];
            color[pixels_test] = 0;
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
        DrawRectangle(rectx, recty, pixel_size, pixel_size,
                      BLACK); // draws cell and if cell has color more than 0 it
                              // adds sand based on the color
        if (color[i] == 1) {
          DrawRectangle(rectx, recty, pixel_size, pixel_size, WHITE);
        } else if (color[i] == 2) {
          DrawRectangle(rectx, recty, pixel_size, pixel_size,
                        (Color){203, 189, 147, 255});
        }
        rectx = rectx + pixel_size;
        i_x = i_x + 1;
        i = i + 1;
      }
      rectx = 0;
      i_x = 0;
      recty = recty + pixel_size;
      i_y = i_y + 1;
    }
    EndDrawing();
  }

  CloseWindow();
  return 0;
}