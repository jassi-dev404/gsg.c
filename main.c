#include "raylib.h"
#include "tinyfiledialogs.h"
#include <stdlib.h>

enum { screenWidth = 699, actualscreenwidth = 1590, screenHeight = 900, actualscreenhieght = 900, pixel_size = 3 };

static int color[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int seen_line[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int line_stack[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int line_cells[(screenWidth * screenHeight) / (pixel_size * pixel_size)];
static int seen_stamp = 0;

// global counters
int counter_main = 0;
int counter_sub = 0;
int counter_alt = 1;
int save_pos;

int L_shape(int color_sand, int cell_pos) {
    int save_pos = cell_pos;
    while (counter_sub != 30) {
        while (counter_main != 15) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos + 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }
    counter_sub = 0;
    counter_main = 0;

    while (counter_sub != 15) {
        while (counter_main != 35) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos + 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }

    counter_main = 0;
    counter_sub = 0;
    counter_alt = 0;
    save_pos = 0;
    return 0;
}

int L_shape_reverse(int color_sand, int cell_pos) {
    int save_pos = cell_pos;
    while (counter_sub != 30) {
        while (counter_main != 15) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos - 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }
    counter_sub = 0;
    counter_main = 0;

    while (counter_sub != 15) {
        while (counter_main != 35) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos - 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }

    counter_main = 0;
    counter_sub = 0;
    counter_alt = 0;
    save_pos = 0;
    return 0;
}

int I_shape(int color_sand, int cell_pos) {
    int save_pos = cell_pos;
    while (counter_sub != 60) {
        while (counter_main != 15) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos + 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }
    counter_sub = 0;
    counter_main = 0;
    counter_alt = 0;
    save_pos = 0;
    return 0;
}

int S_shape(int color_sand, int cell_pos) {
    int save_pos = cell_pos;
    while (counter_sub != 15) {
        while (counter_main != 30) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos + 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }
    counter_sub = 0;
    counter_main = 0;

    while (counter_sub != 15) {
        while (counter_main != 30) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos - 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }

    counter_main = 0;
    counter_sub = 0;
    counter_alt = 0;
    save_pos = 0;
    return 0;
}

int S_shape_reverse(int color_sand, int cell_pos) {
    int save_pos = cell_pos;
    while (counter_sub != 15) {
        while (counter_main != 30) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos - 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }
    counter_sub = 0;
    counter_main = 0;

    while (counter_sub != 15) {
        while (counter_main != 30) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos + 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }

    counter_main = 0;
    counter_sub = 0;
    counter_alt = 0;
    save_pos = 0;
    return 0;
}

int O_shape(int color_sand, int cell_pos) {
    int save_pos = cell_pos;
    while (counter_sub != 15) {
        while (counter_main != 30) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos + 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }
    counter_sub = 0;
    counter_main = 0;

    while (counter_sub != 15) {
        while (counter_main != 30) {
            color[cell_pos] = color_sand;
            cell_pos = cell_pos + 1;
            counter_main = counter_main + 1;
        }
        counter_main = 0;
        cell_pos = save_pos + (screenWidth / pixel_size) * counter_alt;
        counter_sub = counter_sub + 1;
        counter_alt = counter_alt + 1;
    }

    counter_main = 0;
    counter_sub = 0;
    counter_alt = 0;
    save_pos = 0;
    return 0;
}

int main(void) {
    InitWindow(actualscreenwidth, actualscreenhieght, "generic sand game.c");
    SetTargetFPS(60);

    // load assets
    Font monocraft = LoadFontEx("assets/Monocraft.ttf", 96, 0, 0);
    Texture2D button = LoadTexture("assets/start.png");
    Texture2D guide = LoadTexture("assets/Cool_guide.png");

    // UI variables
    int btnState = 0;
    bool btnAction = false;
    float baseWidth = (float)button.width * 1.4f;
    float baseHeight = (float)button.height * 1.4f;
    Rectangle sourceRec = {0, 0, (float)button.width, (float)button.height};
    Vector2 mousePoint = {0.0f, 0.0f};
    Rectangle btnBounds = {screenWidth / 2 - 50, screenHeight / 2 - 150, (float)baseWidth, (float)baseHeight};
    int btn_anim_size = 0;

    // game states
    int game_state = 1;
    int skip_guide = 0;
    float guide_timer = 0.0f;

    // gameplay flags
    int needs_shape = 1;
    int can_move = 1;
    int top_check = 0;
    int fall_rand = 0;
    int shape_color = 0;
    int shape_type = 0;

    // score variables
    int score = 0;
    int total_score = 0;
    int display_score = 0;
    int multiplier = 1;
    float multiplier_timer = 0.0f;

    // iterators
    int grid_y = 0;
    int temp_idx = 1;
    int col_offset = 0;
    int pop_idx = 0;
    int target_color = 0;
    int should_delete = 0;

    // extra stuff
    int spare = 5;
    int spare_fixer = spare;
    int checker_helper = 0;

    // grid init
    int j = 0;
    while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
        color[j] = 0;
        j = j + 1;
    }

    while (!WindowShouldClose()) {
        mousePoint = GetMousePosition();

        // start screen
        if (game_state == 1) {
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
                game_state = 0;
                guide_timer = 0.0f;
            }
            if (btnState == 1 || btnState == 2) {
                if (btn_anim_size < 30) {
                    btn_anim_size = btn_anim_size + 2;
                }
            }
            if (btnState == 0) {
                if (btn_anim_size > 0) {
                    btn_anim_size = btn_anim_size - 2;
                }
            }
        }

        // guide screen
        if (game_state == 0) {
            guide_timer = guide_timer + GetFrameTime();
            if (guide_timer >= 9.0f) {
                game_state = 2;
            }
            if (IsKeyPressed(KEY_ENTER) || IsKeyPressed(KEY_SPACE) || IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
              skip_guide = skip_guide + 1;
            }
            if (skip_guide == 3) {
              game_state = 2;
            }
        }

        // main game loop
        if (game_state == 2) {
            for (int step = 0; step < 2; step++) {

                // spawn random shape
                if (needs_shape == 1) {
                    shape_color = GetRandomValue(0, 3) * 2 + 1;
                    shape_type = GetRandomValue(0, 5);
                    while (shape_color == 0) {
                        shape_color = rand() % 9;
                    }
                    if (shape_type == 0) {
                        L_shape(shape_color, screenWidth / pixel_size / pixel_size + 40);
                    } else if (shape_type == 1) {
                        L_shape_reverse(shape_color, screenWidth / pixel_size / pixel_size + 40);
                    } else if (shape_type == 2) {
                        I_shape(shape_color, screenWidth / pixel_size / pixel_size + 40);
                    } else if (shape_type == 3) {
                        S_shape(shape_color, screenWidth / pixel_size / pixel_size + 40);
                    } else if (shape_type == 4) {
                        S_shape_reverse(shape_color, screenWidth / pixel_size / pixel_size + 40);
                    } else if (shape_type == 5) {
                        O_shape(shape_color, screenWidth / pixel_size / pixel_size + 40);
                    }
                    needs_shape = 0;
                }

                // movement checks
                if (IsKeyDown(KEY_LEFT)) {
                    can_move = 1;
                    j = 0;
                    while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                        if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                            if ((j % (screenWidth / pixel_size)) == 0 || color[j - 1] == 2 || color[j - 1] == 4 ||
                                color[j - 1] == 6 || color[j - 1] == 8) {
                                can_move = 0;
                                break;
                            }
                        }
                        j = j + 1;
                    }
                    if (can_move == 1) {
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
                    can_move = 1;
                    j = 0;
                    while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                        if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                            if ((j % (screenWidth / pixel_size)) == (screenWidth / pixel_size - 1) ||
                                color[j + 1] == 2 || color[j + 1] == 4 || color[j + 1] == 6 || color[j + 1] == 8) {
                                can_move = 0;
                                break;
                            }
                        }
                        j = j + 1;
                    }
                    if (can_move == 1) {
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
                    can_move = 1;
                    j = 0;
                    while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                        if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                            if (j + (screenWidth / pixel_size) >=
                                    (screenWidth * screenHeight) / (pixel_size * pixel_size) ||
                                color[j + (screenWidth / pixel_size)] == 2 ||
                                color[j + (screenWidth / pixel_size)] == 4 ||
                                color[j + (screenWidth / pixel_size)] == 6 ||
                                color[j + (screenWidth / pixel_size)] == 8) {
                                can_move = 0;
                                break;
                            }
                        }
                        j = j + 1;
                    }
                    if (can_move == 1) {
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

                // automatic falling
                can_move = 1;
                j = 0;
                while (j < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                    if (color[j] == 1 || color[j] == 3 || color[j] == 5 || color[j] == 7) {
                        if (j + (screenWidth / pixel_size) >=
                                (screenWidth * screenHeight) / (pixel_size * pixel_size) ||
                            color[j + (screenWidth / pixel_size)] == 2 || color[j + (screenWidth / pixel_size)] == 4 ||
                            color[j + (screenWidth / pixel_size)] == 6 || color[j + (screenWidth / pixel_size)] == 8) {
                            can_move = 0;
                            break;
                        }
                    }
                    j = j + 1;
                }

                if (can_move == 1) {
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
                    needs_shape = 1;
                }
                checker_helper = 0;

                pixels_test = 0;

                // reset stamp check
                if (seen_stamp == 2147483647) {
                    temp_idx = 0;
                    while (temp_idx < (screenWidth * screenHeight) / (pixel_size * pixel_size)) {
                        seen_line[temp_idx] = 0;
                        temp_idx = temp_idx + 1;
                    }
                    temp_idx = 0;
                    seen_stamp = 1;
                } else {
                    seen_stamp = seen_stamp + 1;
                }

                // game over check
                while (top_check != screenWidth / pixel_size) {
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
                    top_check = top_check + 1;
                    pixels_test = pixels_test + 1;
                }

                top_check = 0;
                pixels_test = 0;

                // line clear logic
                while (grid_y != screenHeight / pixel_size) {
                    if (color[pixels_test] == 2 || color[pixels_test] == 4 || color[pixels_test] == 6 ||
                        color[pixels_test] == 8) {
                        temp_idx = 1;
                        int row_matches = 1;
                        while (temp_idx != screenWidth / pixel_size) {
                            if (color[pixels_test + temp_idx] != color[pixels_test]) {
                                row_matches = 0;
                                break;
                            }
                            temp_idx = temp_idx + 1;
                            should_delete = 1;
                        }
                        if (seen_line[pixels_test] != seen_stamp) {
                            int stride = screenWidth / pixel_size;
                            int board_rows = screenHeight / pixel_size;
                            int board_n = (screenWidth * screenHeight) / (pixel_size * pixel_size);

                            // floodfill state save
                            int save_a = counter_main;
                            int save_b = counter_sub;
                            int save_c = counter_alt;

                            int dx_var;
                            int dy_var;
                            int col_var;
                            int row_var;

                            target_color = color[pixels_test];
                            seen_line[pixels_test] = seen_stamp;
                            line_stack[0] = pixels_test;
                            line_cells[0] = pixels_test;

                            counter_main = 1;
                            counter_alt = 1;
                            should_delete = 0;

                            while (counter_main != 0) {
                                counter_main = counter_main - 1;
                                pop_idx = line_stack[counter_main];
                                if ((pop_idx % stride) == (stride - 1)) {
                                    should_delete = 1;
                                }
                                dy_var = -1;
                                while (dy_var <= 1) {
                                    dx_var = -1;
                                    while (dx_var <= 1) {
                                        if (dx_var != 0 || dy_var != 0) {
                                            col_var = (pop_idx % stride) + dx_var;
                                            row_var = (pop_idx / stride) + dy_var;
                                            if (col_var >= 0 && col_var < stride && row_var >= 0 &&
                                                row_var < board_rows) {
                                                temp_idx = row_var * stride + col_var;
                                                if (temp_idx >= 0 && temp_idx < board_n && seen_line[temp_idx] != seen_stamp &&
                                                    color[temp_idx] == target_color) {
                                                    seen_line[temp_idx] = seen_stamp;
                                                    line_stack[counter_main] = temp_idx;
                                                    counter_main = counter_main + 1;
                                                    line_cells[counter_alt] = temp_idx;
                                                    counter_alt = counter_alt + 1;
                                                }
                                            }
                                        }
                                        dx_var = dx_var + 1;
                                    }
                                    dy_var = dy_var + 1;
                                }
                            }

                            // execute deletion
                            if (should_delete == 1) {
                                counter_main = 0;
                                while (counter_main != counter_alt) {
                                    color[line_cells[counter_main]] = 0;
                                    counter_main = counter_main + 1;
                                    score = score + 1;
                                }
                                row_matches = 0;
                                multiplier = multiplier + 1;
                            }

                            // restore state
                            counter_main = save_a;
                            counter_sub = save_b;
                            counter_alt = save_c;
                            pop_idx = 0;
                            temp_idx = 0;
                            should_delete = 0;
                        }

                        // secondary cleanup
                        if (row_matches == 1) {
                            col_offset = 0;
                            target_color = color[pixels_test + col_offset];
                            while (col_offset != screenWidth / pixel_size) {
                                if ((pixels_test + col_offset) % (screenWidth / pixel_size) != 0 &&
                                    color[pixels_test + col_offset - 1] == target_color) {
                                    while (true) {
                                        temp_idx = temp_idx + 1;
                                        if (col_offset - 1 - temp_idx + pixels_test >= 0 &&
                                            (col_offset - 1 - temp_idx + pixels_test) % (screenWidth / pixel_size) !=
                                                (screenWidth / pixel_size - 1) &&
                                            target_color == color[col_offset - 1 - temp_idx + pixels_test]) {
                                            color[col_offset - 1 - temp_idx + pixels_test] = color[col_offset - 1 - pixels_test];
                                            color[col_offset - 1 - temp_idx + pixels_test] = 0;
                                        } else {
                                            break;
                                        }
                                    }
                                    color[col_offset - 1 + pixels_test] = 0;
                                    temp_idx = 0;
                                }
                                if ((pixels_test + col_offset) % (screenWidth / pixel_size) !=
                                        (screenWidth / pixel_size - 1) &&
                                    color[col_offset + 1 + pixels_test] == target_color) {
                                    while (true) {
                                        temp_idx = temp_idx + 1;
                                        if (col_offset + 1 + temp_idx + pixels_test <
                                                screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                            (col_offset + 1 + temp_idx + pixels_test) % (screenWidth / pixel_size) != 0 &&
                                            target_color == color[col_offset + 1 + temp_idx + pixels_test]) {
                                            color[col_offset + 1 + temp_idx + pixels_test] = 0;
                                        } else {
                                            break;
                                        }
                                    }
                                    color[col_offset + 1 + pixels_test] = 0;
                                    temp_idx = 0;
                                }
                                if ((pixels_test + col_offset + (screenWidth / pixel_size)) <
                                        screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                    color[col_offset + (screenWidth / pixel_size) + pixels_test] == target_color) {
                                    while (true) {
                                        temp_idx = temp_idx + 1;
                                        if (col_offset + (screenWidth / pixel_size) + (temp_idx * (screenWidth / pixel_size)) +
                                                pixels_test <
                                                screenWidth * screenHeight / (pixel_size * pixel_size) &&
                                            target_color == color[col_offset + (screenWidth / pixel_size) +
                                                                    (temp_idx * (screenWidth / pixel_size)) + pixels_test]) {
                                            color[col_offset + (screenWidth / pixel_size) +
                                                  (temp_idx * (screenWidth / pixel_size)) + pixels_test] = 0;
                                        } else {
                                            break;
                                        }
                                    }
                                    color[col_offset + (screenWidth / pixel_size) + pixels_test] = 0;
                                    temp_idx = 0;
                                }
                                if ((pixels_test + col_offset - (screenWidth / pixel_size)) >= 0 &&
                                    color[pixels_test + col_offset - (screenWidth / pixel_size)] == target_color) {
                                    while (true) {
                                        temp_idx = temp_idx + 1;
                                        if (col_offset - (screenWidth / pixel_size) - (temp_idx * (screenWidth / pixel_size)) +
                                                pixels_test >=
                                                0 &&
                                            target_color == color[col_offset - (screenWidth / pixel_size) -
                                                                    (temp_idx * (screenWidth / pixel_size)) + pixels_test]) {
                                            color[col_offset - (screenWidth / pixel_size) -
                                                  (temp_idx * (screenWidth / pixel_size)) + pixels_test] = 0;
                                        } else {
                                            break;
                                        }
                                    }
                                    color[col_offset - (screenWidth / pixel_size) + pixels_test] = 0;
                                    temp_idx = 0;
                                }
                                color[pixels_test + col_offset] = 0;
                                col_offset = col_offset + 1;
                                should_delete = 0;
                            }
                        }
                    }
                    pixels_test = pixels_test + (screenWidth / pixel_size);
                    grid_y = grid_y + 1;
                }
                grid_y = 0;
                temp_idx = 0;

                pixels_test = (screenWidth * screenHeight) / (pixel_size * pixel_size) - 1;

                // sand physics
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
                                    fall_rand = rand() % 2;
                                    if (fall_rand == 0) {
                                        color[pixels_test + screenWidth / pixel_size - 1] = color[pixels_test];
                                        color[pixels_test] = 0;
                                    } else if (fall_rand == 1) {
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

                // update timer
                multiplier_timer = multiplier_timer + GetFrameTime();
                if (multiplier_timer >= 5.0f) {
                    if (multiplier > 1) {
                        multiplier = multiplier - 1;
                    }
                    multiplier_timer = 0.0f;
                }
            }
        }

        // draw calls
        BeginDrawing();
        ClearBackground(WHITE);
        int rectx = 0;
        int recty = 0;
        int i_x = 0;
        int i_y = 0;
        int i = 0;
        int rand_4 = 0;
        Color color_picked = BLACK;
        total_score = multiplier * score;

        if (game_state == 2) {

            // animate score
            if (display_score < total_score) {
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
                display_score = display_score + 15;
            }

            // draw UI text
            DrawTextEx(monocraft, TextFormat("score: %d,", display_score),
                       (Vector2){(float)screenWidth + 100.0f, (float)screenHeight - 860.0f},
                       (float)screenHeight / 11.0f, 1.0f, color_picked);

            DrawTextEx(monocraft, TextFormat("multiplier: %dx", multiplier),
                       (Vector2){(float)screenWidth + 100.0f, (float)screenHeight - 560.0f}, (float)screenHeight / 9.0f,
                       1.0f, color_picked);

            // draw grid
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

        // draw start screen
        if (game_state == 1) {
            DrawTextEx(monocraft, "welcome to gsg.c",
                       (Vector2){(float)screenWidth / 2 - 140, (float)screenHeight - 850}, (float)screenHeight / 6.0f,
                       1.0f, BLACK);
            DrawTextEx(monocraft, "(generic sand game).c",
                       (Vector2){(float)screenWidth / 2 + 25, (float)screenHeight - 300.0f},
                       (float)screenHeight / 10.0f, 1.0f, BLACK);
            DrawTextEx(monocraft, "in beta right now",
                       (Vector2){(float)screenWidth + 200.0f, (float)screenHeight - 200.0f},
                       (float)screenHeight / 13.0f, 1.0f, BLACK);
            Rectangle destRec = {btnBounds.x - ((float)btn_anim_size / 2.0f), btnBounds.y - ((float)btn_anim_size / 2.0f),
                                 (float)baseWidth + (float)btn_anim_size, (float)baseHeight + (float)btn_anim_size};
            DrawTexturePro(button, sourceRec, destRec, (Vector2){0, 0}, 0.0f, WHITE);
        }

        // draw guide screen
        if (game_state == 0) {
            Rectangle guideSource = {0, 0, (float)guide.width, (float)guide.height};
            Rectangle destRec = {0, 0, (float)actualscreenwidth, (float)actualscreenhieght};
            DrawTexturePro(guide, guideSource, destRec, (Vector2){0, 0}, 0.0f, WHITE);
        }
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
