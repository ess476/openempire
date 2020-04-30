#pragma once

#define CONFIG_MAIN_GAME_NAME ("Open Empires")

#define CONFIG_GRID_CELL_SIZE (100)

#define CONFIG_DIRECTION_COUNT_NOT_MIRRORED (5)

#define CONFIG_ANIMATION_DIVISOR (5)

#define CONFIG_ANIMATION_DECAY_DIVISOR (300 * CONFIG_ANIMATION_DIVISOR)

#define CONFIG_UNIT_PATHING_TIMEOUT_CYCLES (25)

#define CONFIG_POINT_GOAL_CLOSE_ENOUGH_MAG (10 * CONFIG_GRID_CELL_SIZE)

#define CONFIG_UNIT_DIRECTION_TIMER_EXPIRE (4)

#define CONFIG_UNITS_STRESSOR_DEADZONE (10)

#define CONFIG_UNIT_VELOCITY_DEADZONE (50)

#define CONFIG_OVERVIEW_SCROLL_SPEED (15)

#define CONFIG_OVERVIEW_SELECTION_BOX_MIN_SIZE (200)

#define CONFIG_VIDEO_TOP_LEFT_BORDER_OFFSET_UNITS (-600)

#define CONFIG_VIDEO_TOP_LEFT_BORDER_OFFSET_TERRAIN (-90)

#define CONFIG_FIELD_MAX_PATHING_TRIES (100)

#define CONFIG_UNITS_COHESE_DIVISOR (64)

#define CONFIG_UNITS_SEPARATION_DIVISOR (16)

#define CONFIG_UNITS_ALIGN_DIVISOR (32)

#define CONFIG_UNIT_SWORD_LENGTH (200)

#define CONFIG_UNITS_REPATH_SLICE_SIZE (10)

#define CONFIG_UNITS_MAX (8192)

#define CONFIG_UNITS_CLEANUP_FIRE (6000)

#define CONFIG_UNITS_CLEANUP_RUBBLE (12000)

#define CONFIG_LOG_MAX_LINES (40)

#define CONFIG_ICON_SIZE (36)

#define CONFIG_VRAM_UNIT_HEALTH_HEIGHT (60)

#define CONFIG_UNITS_FLOAT_BUFFER (16)

#define CONFIG_MAIN_LOOP_SPEED_MS (15)

#define CONFIG_SOCKETS_THRESHOLD_START (60)

#define CONFIG_SOCKETS_LATENCY_WINDOW (3)

#define CONFIG_DISABLE_STRINGS (1)

#define CONFIG_UNITS_STARTING_VILLAGERS (3)

#define CONFIG_UNITS_STARTING_AREA_TILE_SPACE (10)

#define CONFIG_UNITS_STARTING_TREE_TILES_FROM_TOWNCENTER (7)

#define CONFIG_UNITS_STARTING_TREE_TILE_RANDOMNESS (2)

#define CONFIG_PLAYER_CYCLE_WINDOW (180) // PLAYERS MUST BE WITHIN THIS CYCLE WINDOW ELSE GAME GOES OUT OF SYNC.

#if (CONFIG_UNITS_STARTING_TREE_TILES_FROM_TOWNCENTER + CONFIG_UNITS_STARTING_TREE_TILE_RANDOMNESS) >= CONFIG_UNITS_STARTING_AREA_TILE_SPACE
#  error "TREES ARE OUT OF STARTING TILE ZONE"
#endif

#if SANITIZE_ADDRESS == 1 || SANITIZE_THREAD == 1 || SANITIZE_UNDEFINED == 1
    #define SANITIZE 1
#else
    #define SANITIZE 0
#endif

#define CONFIG_SOCKETS_SERVER_UPDATE_SPEED_CYCLES (10)

#define CONFIG_VRAM_FLASH_TIMER_MAX (60)

#define CONFIG_VRAM_FLASH_TIMER_RATE (10)

#define CONFIG_HISTORY_COUNT (64)
