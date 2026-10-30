#include "raylib.h"
#include "tinyfiledialogs.h"
#include <stdlib.h>

enum { screenWidth = 699, actualscreenwidth = 1590, screenHeight = 900, actualscreenhieght = 900, pixel_size = 3 };

static int color[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int seen_line[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int line_stack[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int line_cells[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int seen_stamp = 0;

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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
        x_var = y_var + (screenWidth / pixel_size) * var_stuff_3;
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
    InitWindow(actualscreenwidth, actualscreenhieght, "generic sand game.c");
    SetTargetFPS(60);

    int j = 0;
    int random = 0;
    while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
        color[j] = 0;
        j = j + 1;
    }

    Font monocraft = LoadFontEx("assets/Monocraft.ttf", 96, 0, 0);

    Texture2D button = LoadTexture("assets/start.png");
    Texture2D guide = LoadTexture("assets/Cool_guide.png");
    int btnState = 0;
    bool btnAction = false;
    float baseWidth = (float)button.width * 1.4f;
    float baseHeight = (float)button.height * 1.4f;
    Rectangle sourceRec = {0, 0, (float)button.width, (float)button.height};
    Vector2 mousePoint = {0.0f, 0.0f};
    Rectangle btnBounds = {screenWidth / 2 - 50, screenHeight / 2 - 150, (float)baseWidth, (float)baseHeight};
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
    int crash_checker = 0;
    int start_screen = 1;
    int e_var = 0;
    int size_i = 0;
    int multiplier = 1;
    int score = 0;
    int score_thingy = 0;
    int score_thingy_updater = 0;
    float multiplier_timer = 0.0f;
    float guide_timer = 0.0f;

    while (!WindowShouldClose()) {

        mousePoint = GetMousePosition();

        if (start_screen == 1) {
            btnAction = false;
            if (CheckCollisionPointRec(mousePoint, btnBounds)) {
                if (IsMouseButtonDown(MOUSE_BUTTON_LEFT))
                    btnState = 2;
                else
                    btnState = 1;
                if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT))
                    btnAction = true;
            } else
                btnState = 0;
            if (btnAction) {
                start_screen = 0;
                guide_timer = 0.0f;
            }
            if (btnState == 1 || btnState == 2) {
                if (size_i < 30) {
                    size_i = size_i + 2;
                }
            }
            if (btnState == 0) {
                if (size_i > 0) {
                    size_i = size_i - 2;
                }
            }
        }

        if (start_screen == 0) {
            guide_timer = guide_timer + GetFrameTime();
            if (guide_timer >= 9.0f) {
                start_screen = 2;
            }
        }

        if (start_screen == 2) {
            for (int step = 0; step < 2; step++) {

                if (checker_down == 1) {
                    rand_2 = GetRandomValue(0, 3) * 2 + 1;
                    rand_3 = GetRandomValue(0, 5);
                    while (rand_2 == 0) {
                        rand_2 = rand() % 9;
                    }
                    if (rand_3 == 0) {
                        L_shape(rand_2, screenWidth / pixel_size / pixel_size + 40);
                    } else if (rand_3 == 1) {
                        L_shape_reverse(rand_2, screenWidth / pixel_size / pixel_size + 40);
                    } else if (rand_3 == 2) {
                        I_shape(rand_2, screenWidth / pixel_size / pixel_size + 40);
                    } else if (rand_3 == 3) {
                        S_shape(rand_2, screenWidth / pixel_size / pixel_size + 40);
                    } else if (rand_3 == 4) {
                        S_shape_reverse(rand_2, screenWidth / pixel_size / pixel_size + 40);
                    } else if (rand_3 == 5) {
                        O_shape(rand_2, screenWidth / pixel_size / pixel_size + 40);
                    }
                    checker_down = 0;
                }

                if (IsKeyDown(KEY_LEFT)) {
                    safe_to_move = 1;
                    j = 0;
                    while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                        if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                            if ((j % (screenWidth / pixel_size)) == 0 || color[j - 1] == 2 || color[j - 1] == 4 ||
                                color[j - 1] == 6 || color[j - 1] == 8) {
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
                            if ((j % (screenWidth / pixel_size)) == (screenWidth / pixel_size - 1) ||
                                color[j + 1] == 2 || color[j + 1] == 4 || color[j + 1] == 6 || color[j + 1] == 8) {
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
                            if (j + (screenWidth / pixel_size) >=
                                    (screenWidth * screenHeight) / (pixel_size * pixel_size) ||
                                color[j + (screenWidth / pixel_size)] == 2 ||
                                color[j + (screenWidth / pixel_size)] == 4 ||
                                color[j + (screenWidth / pixel_size)] == 6 ||
                                color[j + (screenWidth / pixel_size)] == 8) {
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
                                color[pixels_test + (screenWidth / pixel_size)] = 1;
                                color[pixels_test] = 0;
                            } else if (color[pixels_test] == 3) {
                                color[pixels_test + (screenWidth / pixel_size)] = 3;
                                color[pixels_test] = 0;
                            } else if (color[pixels_test] == 5) {
                                color[pixels_test + (screenWidth / pixel_size)] = 5;
                                color[pixels_test] = 0;
                            } else if (color[pixels_test] == 7) {
                                color[pixels_test + (screenWidth / pixel_size)] = 7;
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
                        if (j + (screenWidth / pixel_size) >=
                                (screenWidth * screenHeight) / (pixel_size * pixel_size) ||
                            color[j + (screenWidth / pixel_size)] == 2 || color[j + (screenWidth / pixel_size)] == 4 ||
                            color[j + (screenWidth / pixel_size)] == 6 || color[j + (screenWidth / pixel_size)] == 8) {
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
                            color[pixels_test + (screenWidth / pixel_size)] = 1;
                            color[pixels_test] = 0;
                        } else if (color[pixels_test] == 3) {
                            color[pixels_test + (screenWidth / pixel_size)] = 3;
                            color[pixels_test] = 0;
                        } else if (color[pixels_test] == 5) {
                            color[pixels_test + (screenWidth / pixel_size)] = 5;
                            color[pixels_test] = 0;
                        } else if (color[pixels_test] == 7) {
                            color[pixels_test + (screenWidth / pixel_size)] = 7;
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

                if (seen_stamp == 2147483647) {
                    q_var = 0;
                    while (q_var < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                        seen_line[q_var] = 0;
                        q_var = q_var + 1;
                    }
                    q_var = 0;
                    seen_stamp = 1;
                } else {
                    seen_stamp = seen_stamp + 1;
                }
                while (crash_checker != screenWidth / pixel_size) {
                    if (color[pixels_test] == 2 || color[pixels_test] == 4 || color[pixels_test] == 6 ||
                        color[pixels_test] == 8) {
                        BeginDrawing();
                        ClearBackground(WHITE);
                        DrawTextEx(monocraft, TextFormat("you lost lol,"),
                                   (Vector2){(float)screenWidth + 100.0f, (float)screenHeight - 550.0f},
                                   (float)screenHeight / 10.0f, 1.0f, BLACK);
                        if (score == 0) {
                            DrawTextEx(monocraft, TextFormat("you suck, you got NO score"),
                                       (Vector2){(float)screenWidth + 100.0f, (float)screenHeight - 350.0f},
                                       (float)screenHeight / 10.0f, 1.0f, BLACK);
                        }
                        DrawTextEx(monocraft, TextFormat("your score was %i", score),
                                   (Vector2){(float)screenWidth + 50.0f, (float)screenHeight - 350.0f},
                                   (float)screenHeight / 15.0f, 1.0f, BLACK);
                        EndDrawing();

#ifndef __EMSCRIPTEN__
                        tinyfd_messageBox("Error", "You Lost Sucker", "yes i lost :(", "error", 1);
#endif
                        exit(0);
                    }
                    crash_checker = crash_checker + 1;
                    pixels_test = pixels_test + 1;
                }

                crash_checker = 0;
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
                        if (seen_line[pixels_test] != seen_stamp) {
                            int stride = screenWidth / pixel_size;
                            int board_rows = screenHeight / pixel_size;
                            int board_n = (screenWidth * screenHeight) / (pixel_size * pixel_size);
                            int save_a = var_stuff;
                            int save_b = var_stuff_2;
                            int save_c = var_stuff_3;
                            int dx_var;
                            int dy_var;
                            int col_var;
                            int row_var;
                            target_var = color[pixels_test];
                            seen_line[pixels_test] = seen_stamp;
                            line_stack[0] = pixels_test;
                            line_cells[0] = pixels_test;
                            var_stuff = 1;
                            var_stuff_3 = 1;
                            true_var = 0;
                            while (var_stuff != 0) {
                                var_stuff = var_stuff - 1;
                                e_var = line_stack[var_stuff];
                                if ((e_var % stride) == (stride - 1)) {
                                    true_var = 1;
                                }
                                dy_var = -1;
                                while (dy_var <= 1) {
                                    dx_var = -1;
                                    while (dx_var <= 1) {
                                        if (dx_var != 0 || dy_var != 0) {
                                            col_var = (e_var % stride) + dx_var;
                                            row_var = (e_var / stride) + dy_var;
                                            if (col_var >= 0 && col_var < stride && row_var >= 0 &&
                                                row_var < board_rows) {
                                                q_var = row_var * stride + col_var;
                                                if (q_var >= 0 && q_var < board_n && seen_line[q_var] != seen_stamp &&
                                                    color[q_var] == target_var) {
                                                    seen_line[q_var] = seen_stamp;
                                                    line_stack[var_stuff] = q_var;
                                                    var_stuff = var_stuff + 1;
                                                    line_cells[var_stuff_3] = q_var;
                                                    var_stuff_3 = var_stuff_3 + 1;
                                                }
                                            }
                                        }
                                        dx_var = dx_var + 1;
                                    }
                                    dy_var = dy_var + 1;
                                }
                            }
                            if (true_var == 1) {
                                var_stuff = 0;
                                while (var_stuff != var_stuff_3) {
                                    color[line_cells[var_stuff]] = 0;
                                    var_stuff = var_stuff + 1;
                                    score = score + 1;
                                }
                                row_matches = 0;
                                multiplier = multiplier + 1;
                            }
                            var_stuff = save_a;
                            var_stuff_2 = save_b;
                            var_stuff_3 = save_c;
                            e_var = 0;
                            q_var = 0;
                            true_var = 0;
                        }

                        if (row_matches == 1) {
                            i_var = 0;
                            target_var = color[pixels_test + i_var];
                            while (i_var != screenWidth / pixel_size) {
                                if ((pixels_test + i_var) % (screenWidth / pixel_size) != 0 &&
                                    color[pixels_test + i_var - 1] == target_var) {
                                    while (true) {
                                        q_var = q_var + 1;
                                        if (i_var - 1 - q_var + pixels_test >= 0 &&
                                            (i_var - 1 - q_var + pixels_test) % (screenWidth / pixel_size) !=
                                                (screenWidth / pixel_size - 1) &&
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
                                if ((pixels_test + i_var) % (screenWidth / pixel_size) !=
                                        (screenWidth / pixel_size - 1) &&
                                    color[i_var + 1 + pixels_test] == target_var) {
                                    while (true) {
                                        q_var = q_var + 1;
                                        if (i_var + 1 + q_var + pixels_test <
                                                screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                            (i_var + 1 + q_var + pixels_test) % (screenWidth / pixel_size) != 0 &&
                                            target_var == color[i_var + 1 + q_var + pixels_test]) {
                                            color[i_var + 1 + q_var + pixels_test] = 0;
                                        } else {
                                            break;
                                        }
                                    }
                                    color[i_var + 1 + pixels_test] = 0;
                                    q_var = 0;
                                }
                                if ((pixels_test + i_var + (screenWidth / pixel_size)) <
                                        screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                    color[i_var + (screenWidth / pixel_size) + pixels_test] == target_var) {
                                    while (true) {
                                        q_var = q_var + 1;
                                        if (i_var + (screenWidth / pixel_size) + (q_var * (screenWidth / pixel_size)) +
                                                    pixels_test <
                                                screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                            target_var == color[i_var + (screenWidth / pixel_size) +
                                                                (q_var * (screenWidth / pixel_size)) + pixels_test]) {
                                            color[i_var + (screenWidth / pixel_size) +
                                                  (q_var * (screenWidth / pixel_size)) + pixels_test] = 0;
                                        } else {
                                            break;
                                        }
                                    }
                                    color[i_var + (screenWidth / pixel_size) + pixels_test] = 0;
                                    q_var = 0;
                                }
                                if ((pixels_test + i_var - (screenWidth / pixel_size)) >= 0 &&
                                    color[pixels_test + i_var - (screenWidth / pixel_size)] == target_var) {
                                    while (true) {
                                        q_var = q_var + 1;
                                        if (i_var - (screenWidth / pixel_size) - (q_var * (screenWidth / pixel_size)) +
                                                    pixels_test >=
                                                0 &&
                                            target_var == color[i_var - (screenWidth / pixel_size) -
                                                                (q_var * (screenWidth / pixel_size)) + pixels_test]) {
                                            color[i_var - (screenWidth / pixel_size) -
                                                  (q_var * (screenWidth / pixel_size)) + pixels_test] = 0;
                                        } else {
                                            break;
                                        }
                                    }
                                    color[i_var - (screenWidth / pixel_size) + pixels_test] = 0;
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

                pixels_test = (screenWidth * screenHeight) / (pixel_size * pixel_size) - 1;

                while (pixels_test >= 0) {
                    if (color[pixels_test] == 2 || color[pixels_test] == 4 || color[pixels_test] == 6 ||
                        color[pixels_test] == 8) {
                        int can_go_left = ((pixels_test % (screenWidth / pixel_size)) > 0) &&
                                          (color[pixels_test + (screenWidth / pixel_size - 1)] == 0);
                        int can_go_right =
                            ((pixels_test % (screenWidth / pixel_size)) < (screenWidth / pixel_size - 1)) &&
                            (color[pixels_test + (screenWidth / pixel_size + 1)] == 0);

                        if (pixels_test + (screenWidth / pixel_size) <
                            (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                            if (color[pixels_test + (screenWidth / pixel_size)] == 0) {
                                color[pixels_test + (screenWidth / pixel_size)] = color[pixels_test];
                                color[pixels_test] = 0;
                            } else {
                                if (can_go_left && can_go_right) {
                                    random = rand() % 2;
                                    if (random == 0) {
                                        color[pixels_test + screenWidth / pixel_size - 1] = color[pixels_test];
                                        color[pixels_test] = 0;
                                    } else if (random == 1) {
                                        color[pixels_test + screenWidth / pixel_size + 1] = color[pixels_test];
                                        color[pixels_test] = 0;
                                    }
                                } else if (can_go_left) {
                                    color[pixels_test + screenWidth / pixel_size - 1] = color[pixels_test];
                                    color[pixels_test] = 0;
                                } else if (can_go_right) {
                                    color[pixels_test + screenWidth / pixel_size + 1] = color[pixels_test];
                                    color[pixels_test] = 0;
                                }
                            }
                        }
                    }
                    pixels_test = pixels_test - 1;
                }
                pixels_test = (screenWidth * screenHeight) / (pixel_size * pixel_size) - 1;

                multiplier_timer = multiplier_timer + GetFrameTime();
                if (multiplier_timer >= 5.0f) {
                    if (multiplier > 1) {
                        multiplier = multiplier - 1;
                    }
                    multiplier_timer = 0.0f;
                }
            }
        }

        BeginDrawing();
        ClearBackground(WHITE);
        int rectx = 0;
        int recty = 0;
        int i_x = 0;
        int i_y = 0;
        int i = 0;
        int rand_4 = 0;
        Color color_picked = BLACK;
        score_thingy = multiplier * score;

        if (start_screen == 2) {

            if (score_thingy_updater < score_thingy) {
                rand_4 = GetRandomValue(0, 7);
                if (rand_4 == 0) {
                    color_picked = RED;
                } else if (rand_4 == 1) {
                    color_picked = BLUE;
                } else if (rand_4 == 2) {
                    color_picked = GREEN;
                } else if (rand_4 == 3) {
                    color_picked = YELLOW;
                } else if (rand_4 == 4) {
                    color_picked = PURPLE;
                } else if (rand_4 == 5) {
                    color_picked = VIOLET;
                } else if (rand_4 == 6) {
                    color_picked = PINK;
                } else if (rand_4 == 7) {
                    color_picked = MAGENTA;
                }
                score_thingy_updater = score_thingy_updater + 15;
            }

            DrawTextEx(monocraft, TextFormat("score: %d,", score_thingy_updater),
                       (Vector2){(float)screenWidth + 100.0f, (float)screenHeight - 860.0f},
                       (float)screenHeight / 11.0f, 1.0f, color_picked);

            DrawTextEx(monocraft, TextFormat("multiplier: %dx", multiplier),
                       (Vector2){(float)screenWidth + 100.0f, (float)screenHeight - 560.0f}, (float)screenHeight / 9.0f,
                       1.0f, color_picked);

            while (recty < screenHeight) {
                while (rectx < screenWidth) {
                    DrawRectangle(rectx, recty, pixel_size, pixel_size, BLACK);
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
        }
        if (start_screen == 1) {
            DrawTextEx(monocraft, "welcome to gsg.c",
                       (Vector2){(float)screenWidth / 2 - 140, (float)screenHeight - 850}, (float)screenHeight / 6.0f,
                       1.0f, BLACK);
            DrawTextEx(monocraft, "(generic sand game).c",
                       (Vector2){(float)screenWidth / 2 + 25, (float)screenHeight - 300.0f},
                       (float)screenHeight / 10.0f, 1.0f, BLACK);
            DrawTextEx(monocraft, "in beta right now",
                       (Vector2){(float)screenWidth + 200.0f, (float)screenHeight - 200.0f},
                       (float)screenHeight / 13.0f, 1.0f, BLACK);
            Rectangle destRec = {btnBounds.x - ((float)size_i / 2.0f), btnBounds.y - ((float)size_i / 2.0f),
                                 (float)baseWidth + (float)size_i, (float)baseHeight + (float)size_i};
            DrawTexturePro(button, sourceRec, destRec, (Vector2){0, 0}, 0.0f, WHITE);
        }
        if (start_screen == 0) {
            Rectangle guideSource = {0, 0, (float)guide.width, (float)guide.height};
            Rectangle destRec = {0, 0, (float)actualscreenwidth, (float)actualscreenhieght};
            DrawTexturePro(guide, guideSource, destRec, (Vector2){0, 0}, 0.0f, WHITE);
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
