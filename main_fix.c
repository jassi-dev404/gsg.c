#include "raylib.h"
#include <stdlib.h>

static int color[300 * 400 / 2 * 2];

int var_stuff = 0;
int var_stuff_2 = 0;
int var_stuff_3 = 1;
int y_var;

int L_shape(int color_sand, int x_var) {
    int y_var = x_var;
    while (var_stuff_2 != 30) {
        while (var_stuff != 15) {
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

    while (var_stuff_2 != 15) {
        while (var_stuff != 35) {
            color[x_var] = color_sand;
            x_var = x_var + 1;
            var_stuff = var_stuff + 1;
        }
        var_stuff = 0;
        x_var = y_var + 150 * var_stuff_3;
        var_stuff_2 = var_stuff_2 + 1;
        var_stuff_3 = var_stuff_3 + 1;
    }

    var_stuff = 0;
    var_stuff_2 = 0;
    var_stuff_3 = 0;
    y_var = 0;
    return 0;
}

int L_shape_reverse(int color_sand, int x_var) {
    int y_var = x_var;
    while (var_stuff_2 != 30) {
        while (var_stuff != 15) {
            color[x_var] = color_sand;
            x_var = x_var - 1;
            var_stuff = var_stuff + 1;
        }
        var_stuff = 0;
        x_var = y_var + 150 * var_stuff_3;
        var_stuff_2 = var_stuff_2 + 1;
        var_stuff_3 = var_stuff_3 + 1;
    }
    var_stuff_2 = 0;
    var_stuff = 0;

    while (var_stuff_2 != 15) {
        while (var_stuff != 35) {
            color[x_var] = color_sand;
            x_var = x_var - 1;
            var_stuff = var_stuff + 1;
        }
        var_stuff = 0;
        x_var = y_var + 150 * var_stuff_3;
        var_stuff_2 = var_stuff_2 + 1;
        var_stuff_3 = var_stuff_3 + 1;
    }

    var_stuff = 0;
    var_stuff_2 = 0;
    var_stuff_3 = 0;
    y_var = 0;
    return 0;
}

int I_shape(int color_sand, int x_var) {
    int y_var = x_var;
    while (var_stuff_2 != 60) {
        while (var_stuff != 15) {
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
    var_stuff_3 = 0;
    y_var = 0;
    return 0;
}

int S_shape(int color_sand, int x_var) {
    int y_var = x_var;
    while (var_stuff_2 != 15) {
        while (var_stuff != 30) {
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

    while (var_stuff_2 != 15) {
        while (var_stuff != 30) {
            color[x_var] = color_sand;
            x_var = x_var - 1;
            var_stuff = var_stuff + 1;
        }
        var_stuff = 0;
        x_var = y_var + 150 * var_stuff_3;
        var_stuff_2 = var_stuff_2 + 1;
        var_stuff_3 = var_stuff_3 + 1;
    }

    var_stuff = 0;
    var_stuff_2 = 0;
    var_stuff_3 = 0;
    y_var = 0;
    return 0;
}

int S_shape_reverse(int color_sand, int x_var) {
    int y_var = x_var;
    while (var_stuff_2 != 15) {
        while (var_stuff != 30) {
            color[x_var] = color_sand;
            x_var = x_var - 1;
            var_stuff = var_stuff + 1;
        }
        var_stuff = 0;
        x_var = y_var + 150 * var_stuff_3;
        var_stuff_2 = var_stuff_2 + 1;
        var_stuff_3 = var_stuff_3 + 1;
    }
    var_stuff_2 = 0;
    var_stuff = 0;

    while (var_stuff_2 != 15) {
        while (var_stuff != 30) {
            color[x_var] = color_sand;
            x_var = x_var + 1;
            var_stuff = var_stuff + 1;
        }
        var_stuff = 0;
        x_var = y_var + 150 * var_stuff_3;
        var_stuff_2 = var_stuff_2 + 1;
        var_stuff_3 = var_stuff_3 + 1;
    }

    var_stuff = 0;
    var_stuff_2 = 0;
    var_stuff_3 = 0;
    y_var = 0;
    return 0;
}

int O_shape(int color_sand, int x_var) {
    int y_var = x_var;
    while (var_stuff_2 != 15) {
        while (var_stuff != 30) {
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

    while (var_stuff_2 != 15) {
        while (var_stuff != 30) {
            color[x_var] = color_sand;
            x_var = x_var + 1;
            var_stuff = var_stuff + 1;
        }
        var_stuff = 0;
        x_var = y_var + 150 * var_stuff_3;
        var_stuff_2 = var_stuff_2 + 1;
        var_stuff_3 = var_stuff_3 + 1;
    }

    var_stuff = 0;
    var_stuff_2 = 0;
    var_stuff_3 = 0;
    y_var = 0;
    return 0;
}

int main(void) {
    const int screenWidth = 300;
    const int actualscreenwidth = 700;
    const int screenHeight = 400;
    const int actualscreenhieght = 400;
    const int pixel_size = 2;
    InitWindow(actualscreenwidth, actualscreenhieght, "generic sand game.c");
    SetTargetFPS(60);

    int j = 0;
    int random = 0;
    while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
        color[j] = 0;
        j = j + 1;
    }

    Font monocraft = LoadFontEx("Monocraft.ttf", 96, 0, 0);
    int safe_to_move = 1;
    int z_var = 0;
    int q_var = 1;
    int i_var = 0;
    int target_var = 0;
    int checker_down = 1;
    int checker_helper = 0;
    int rand_2 = 0;
    int rand_3 = 0;
    int true_var = 0;
    int e_var = 0;

    while (!WindowShouldClose()) {

        if (checker_down == 1) {
            rand_2 = (rand() % 4) * 2 + 1;
            rand_3 = rand() % 6;
            while (rand_2 == 0) {
                rand_2 = rand() % 9;
            }
            if (rand_3 == 0) {
                L_shape(rand_2, screenWidth / pixel_size / pixel_size);
            } else if (rand_3 == 1) {
                L_shape_reverse(rand_2, screenWidth / pixel_size / pixel_size);
            } else if (rand_3 == 2) {
                I_shape(rand_2, screenWidth / pixel_size / pixel_size);
            } else if (rand_3 == 3) {
                S_shape(rand_2, screenWidth / pixel_size / pixel_size);
            } else if (rand_3 == 4) {
                S_shape_reverse(rand_2, screenWidth / pixel_size / pixel_size);
            } else if (rand_3 == 5) {
                O_shape(rand_2, screenWidth / pixel_size / pixel_size);
            }
            checker_down = 0;
        }

        if (IsKeyDown(KEY_LEFT)) {
            safe_to_move = 1;
            j = 0;
            while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                    if ((j % 150) == 0 || color[j - 1] == 2 || color[j - 1] == 4 || color[j - 1] == 6 ||
                        color[j - 1] == 8) {
                        safe_to_move = 0;
                        break;
                    }
                }
                j = j + 1;
            }
            if (safe_to_move == 1) {
                int pixels_test = 0;
                while (pixels_test < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                    if (color[pixels_test] == 1) {
                        color[pixels_test - 1] = 1;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 3) {
                        color[pixels_test - 1] = 3;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 5) {
                        color[pixels_test - 1] = 5;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 7) {
                        color[pixels_test - 1] = 7;
                        color[pixels_test] = 0;
                    }
                    pixels_test = pixels_test + 1;
                }
            }
        }

        if (IsKeyDown(KEY_RIGHT)) {
            safe_to_move = 1;
            j = 0;
            while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                    if ((j % 150) == 149 || color[j + 1] == 2 || color[j + 1] == 4 || color[j + 1] == 6 ||
                        color[j + 1] == 8) {
                        safe_to_move = 0;
                        break;
                    }
                }
                j = j + 1;
            }
            if (safe_to_move == 1) {
                int pixels_test = (screenWidth * screenHeight) / (pixel_size * pixel_size) - 1;
                while (pixels_test >= 0) {
                    if (color[pixels_test] == 1) {
                        color[pixels_test + 1] = 1;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 3) {
                        color[pixels_test + 1] = 3;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 5) {
                        color[pixels_test + 1] = 5;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 7) {
                        color[pixels_test + 1] = 7;
                        color[pixels_test] = 0;
                    }
                    pixels_test = pixels_test - 1;
                }
            }
        }

        if (IsKeyDown(KEY_DOWN)) {
            safe_to_move = 1;
            j = 0;
            while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                    if (j + 150 >= (screenWidth * screenHeight) / (pixel_size * pixel_size) || color[j + 150] == 2 ||
                        color[j + 150] == 4 || color[j + 150] == 6 || color[j + 150] == 8) {
                        safe_to_move = 0;
                        break;
                    }
                }
                j = j + 1;
            }
            if (safe_to_move == 1) {
                int pixels_test = (screenWidth * screenHeight) / (pixel_size * pixel_size) - 1;
                while (pixels_test >= 0) {
                    if (color[pixels_test] == 1) {
                        color[pixels_test + 150] = 1;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 3) {
                        color[pixels_test + 150] = 3;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 5) {
                        color[pixels_test + 150] = 5;
                        color[pixels_test] = 0;
                    } else if (color[pixels_test] == 7) {
                        color[pixels_test + 150] = 7;
                        color[pixels_test] = 0;
                    }
                    pixels_test = pixels_test - 1;
                }
            } else {
                j = 0;
                while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                    if (color[j] == 1) {
                        color[j] = 2;
                    }
                    if (color[j] == 3) {
                        color[j] = 4;
                    }
                    if (color[j] == 5) {
                        color[j] = 6;
                    }
                    if (color[j] == 7) {
                        color[j] = 8;
                    }
                    j = j + 1;
                }
            }
        }

        safe_to_move = 1;
        j = 0;
        while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
            if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                if (j + 150 >= (screenWidth * screenHeight) / (pixel_size * pixel_size) || color[j + 150] == 2 ||
                    color[j + 150] == 4 || color[j + 150] == 6 || color[j + 150] == 8) {
                    safe_to_move = 0;
                    break;
                }
            }
            j = j + 1;
        }
        if (safe_to_move == 1) {
            int pixels_test = (screenWidth * screenHeight) / (pixel_size * pixel_size) - 1;
            while (pixels_test >= 0) {
                if (color[pixels_test] == 1) {
                    color[pixels_test + 150] = 1;
                    color[pixels_test] = 0;
                } else if (color[pixels_test] == 3) {
                    color[pixels_test + 150] = 3;
                    color[pixels_test] = 0;
                } else if (color[pixels_test] == 5) {
                    color[pixels_test + 150] = 5;
                    color[pixels_test] = 0;
                } else if (color[pixels_test] == 7) {
                    color[pixels_test + 150] = 7;
                    color[pixels_test] = 0;
                }
                pixels_test = pixels_test - 1;
            }
        } else {
            j = 0;
            while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                if (color[j] == 1) {
                    color[j] = 2;
                }
                if (color[j] == 3) {
                    color[j] = 4;
                }
                if (color[j] == 5) {
                    color[j] = 6;
                }
                if (color[j] == 7) {
                    color[j] = 8;
                }
                j = j + 1;
            }
        }

        int pixels_test = 0;
        int still_falling = 0;

        while (pixels_test < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
            if (color[pixels_test] == 1 || color[pixels_test] == 3 || color[pixels_test] == 5 ||
                color[pixels_test] == 7) {
                still_falling = 1;
                break;
            }
            pixels_test = pixels_test + 1;
        }
        if (still_falling == 0) {
            checker_down = 1;
        }
        checker_helper = 0;

        pixels_test = 0;

        while (z_var != screenHeight / pixel_size) {
            if (color[pixels_test] == 2 || color[pixels_test] == 4 || color[pixels_test] == 6 ||
                color[pixels_test] == 8) {
                q_var = 1;
                int row_matches = 1;
                while (q_var != screenWidth / pixel_size) {
                    if (color[pixels_test + q_var] != color[pixels_test]) {
                        row_matches = 0;
                        break;
                    }
                    q_var = q_var + 1;
                    true_var = 1;
                }
                if (true_var != 1) {
                    while (e_var != screenWidth / pixel_size) {
                        if (color[pixels_test + q_var] != color[pixels_test] &&
                            color[pixels_test + q_var + 151] != color[pixels_test] &&
                            color[pixels_test + q_var - 149] != color[pixels_test]) {
                            row_matches = 0;
                            break;
                        }
                        e_var = e_var + 1;
                    }
                    q_var = e_var;
                }

                if (row_matches == 1) {
                    i_var = 0;
                    target_var = color[pixels_test + i_var];
                    while (i_var != screenWidth / pixel_size) {
                        if ((pixels_test + i_var) % 150 != 0 && color[pixels_test + i_var - 1] == target_var) {
                            while (true) {
                                q_var = q_var + 1;
                                if (i_var - 1 - q_var + pixels_test >= 0 &&
                                    (i_var - 1 - q_var + pixels_test) % 150 != 149 &&
                                    target_var == color[i_var - 1 - q_var + pixels_test]) {
                                    color[i_var - 1 - q_var + pixels_test] = color[i_var - 1 - pixels_test];
                                    color[i_var - 1 - q_var + pixels_test] = 0;
                                } else {
                                    break;
                                }
                            }
                            color[i_var - 1 + pixels_test] = 0;
                            q_var = 0;
                        }
                        if ((pixels_test + i_var) % 150 != 149 && color[i_var + 1 + pixels_test] == target_var) {
                            while (true) {
                                q_var = q_var + 1;
                                if (i_var + 1 + q_var + pixels_test <
                                        screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                    (i_var + 1 + q_var + pixels_test) % 150 != 0 &&
                                    target_var == color[i_var + 1 + q_var + pixels_test]) {
                                    color[i_var + 1 + q_var + pixels_test] = 0;

                                } else {
                                    break;
                                }
                            }
                            color[i_var + 1 + pixels_test] = 0;
                            q_var = 0;
                        }
                        if ((pixels_test + i_var + 150) < screenWidth * screenHeight / (pixel_size * pixel_size) &&
                            color[i_var + 150 + pixels_test] == target_var) {
                            while (true) {
                                q_var = q_var + 1;
                                if (i_var + 150 + (q_var * 150) + pixels_test <
                                        screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                    target_var == color[i_var + 150 + (q_var * 150) + pixels_test]) {
                                    color[i_var + 150 + (q_var * 150) + pixels_test] = 0;
                                } else {
                                    break;
                                }
                            }
                            color[i_var + 150 + pixels_test] = 0;
                            q_var = 0;
                        }
                        if ((pixels_test + i_var - 150) >= 0 && color[pixels_test + i_var - 150] == target_var) {
                            while (true) {
                                q_var = q_var + 1;
                                if (i_var - 150 - (q_var * 150) + pixels_test >= 0 &&
                                    target_var == color[i_var - 150 - (q_var * 150) + pixels_test]) {
                                    color[i_var - 150 - (q_var * 150) + pixels_test] = 0;
                                } else {
                                    break;
                                }
                            }
                            color[i_var - 150 + pixels_test] = 0;
                            q_var = 0;
                        }
                        color[pixels_test + i_var] = 0;
                        i_var = i_var + 1;
                        true_var = 0;
                    }
                }
            }
            pixels_test = pixels_test + (screenWidth / pixel_size);
            z_var = z_var + 1;
        }
        z_var = 0;
        q_var = 0;

        pixels_test =
            (screenWidth * screenHeight) / (pixel_size * pixel_size) -
            1; // just a variable used to calculate which pixels have sand in em so that we can give em *gravity*

        while (pixels_test >= 0) { // while it is more than 0 we will keep checking
            if (color[pixels_test] == 2 || color[pixels_test] == 4 || color[pixels_test] == 6 ||
                color[pixels_test] == 8) {
                int can_go_left =
                    ((pixels_test % (screenWidth / 2)) > 0) && (color[pixels_test + (screenWidth / 2 - 1)] == 0);
                int can_go_right = ((pixels_test % (screenWidth / 2)) < (screenWidth / 2 - 1)) &&
                                   (color[pixels_test + (screenWidth / 2 + 1)] == 0);

                if (pixels_test + 150 < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                    if (color[pixels_test + 150] == 0) {               // if the cell below is empty
                        color[pixels_test + 150] = color[pixels_test]; // adds sand to cell below
                        color[pixels_test] = 0;                        // removes sand from that cell
                    } else {
                        if (can_go_left &&
                            can_go_right) { // if below cell has sand but sand is not in cells left and right of it
                            random = rand() % 2;
                            if (random == 0) { // uses rng to determine which cell should have sand
                                color[pixels_test + screenWidth / 2 - 1] = color[pixels_test];
                                color[pixels_test] = 0;
                            } else if (random == 1) {
                                color[pixels_test + screenWidth / 2 + 1] = color[pixels_test];
                                color[pixels_test] = 0;
                            }
                        } else if (can_go_left) { // if below cell and right cell does not have sand. put sand in left
                            color[pixels_test + screenWidth / 2 - 1] = color[pixels_test];
                            color[pixels_test] = 0;
                        } else if (can_go_right) { // if below cell and left cell does have sand. put sand in right
                            color[pixels_test + screenWidth / 2 + 1] = color[pixels_test];
                            color[pixels_test] = 0;
                        }
                    }
                }
            }
            pixels_test = pixels_test - 1;
        }
        pixels_test = (screenWidth * screenHeight) / (pixel_size * pixel_size) - 1;
        BeginDrawing();
        ClearBackground(WHITE);
        int rectx = 0; // variables initiate for cells
        int recty = 0;
        int i_x = 0;
        int i_y = 0;
        int i = 0;
        DrawTextEx(monocraft, "welcome to gsg.c", (Vector2){(float)screenWidth + 30.0f, (float)screenHeight - 350.0f},
                   (float)screenHeight / 10.0f, 1.0f, BLACK);
        DrawTextEx(monocraft, "(generic sand game).c",
                   (Vector2){(float)screenWidth + 60.0f, (float)screenHeight - 300.0f}, (float)screenHeight / 17.0f,
                   1.0f, BLACK);
        while (recty < screenHeight) {
            while (rectx < screenWidth) {
                DrawRectangle(rectx, recty, pixel_size, pixel_size,
                              BLACK); // draws cell and if cell has color more than 0 it adds sand based on the color
                if (color[i] == 1) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, RED);
                } else if (color[i] == 2) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, RED);
                } else if (color[i] == 3) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, GREEN);
                } else if (color[i] == 4) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, GREEN);
                } else if (color[i] == 5) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, BLUE);
                } else if (color[i] == 6) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, BLUE);
                } else if (color[i] == 7) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, YELLOW);
                } else if (color[i] == 8) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, YELLOW);
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