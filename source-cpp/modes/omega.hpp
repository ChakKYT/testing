#pragma once

#include "options.hpp"

constexpr BotAI omega_ai {
    .BOT_SOLOTRICK_MASS = 100000.f,
    .BOT_SPAWN_MAX = 2500000.f,
    .BOT_MOVE_MASS = 200000.f,
    .BOT_IDLE_TIME = 2.5f,
    .BOT_SOLOTRICK_CHANCE = 15.f,
    .BOT_SPLIT_CHANCE = 10.f,
    .BOT_CENTER_FEED_EJECT = 20,
    .BOT_MAX_SPLIT_ATTEMPT = 4
};

constexpr OPT omega_opt {
    .MODE = "omega",
    .CELL_LIMIT = 131072,

    .MAP_HW = 40000.f,
    .MAP_HH = 40000.f,

    .TIME_SCALE = 1.2f,

    .GRID_PL_SIZE = 128,
    .GRID_EV_SIZE = 128,

    .QUADTREE_MAX_LEVEL = 18,
    .QUADTREE_MAX_ITEMS = 20,

    .PERK_INTERVAL = 10.f,
    .MIN_PERK_SIZE = 100000.f,
    .MAX_CYT_CELLS = 15,
    .MAX_EXP_CELLS = 15,

    .M1_RELAXATION = 0.8f,
    .M2_RELAXATION = 1.f,

    .MAX_SPAWN_TRIES = 64,
    .VIRUS_SAFE_SPAWN_RADIUS = 10.f,

    .PELLET_COUNT = 5000,
    .PELLET_SIZE = 30.f,

    .VIRUS_COUNT = 75,
    .VIRUS_SIZE = 200,
    .VIRUS_SPLIT_SIZE = 0.f,
    .VIRUS_MAX_SIZE = 2500.f,
    .VIRUS_SPLIT_BOOST = 700.f,
    .VIRUS_MONOTONE_POP = true,

    .NEW_BOOST_ALGO = true,
    .BOOST_FACTOR = 1.2f,
    .BOOST_AMOUNT = 1.f,
    .BOOST_DELAY = 1.f,
    .BOOST_MULTI = 0.75f,

    .PLAYER_AUTOSPLIT_SIZE = 0.f,
    .PLAYER_MAX_CELLS = 369,
    .PLAYER_SPAWN_SIZE = 600.f,
    .PLAYER_SPLIT_BOOST = 700.f,
    .PLAYER_SPLIT_DIST = 30.f,
    .PLAYER_MAX_BOOST = 750.f,
    .PLAYER_MIN_SPLIT_SIZE = 150.f,
    .PLAYER_NO_COLLI_DELAY = 540,
    .PLAYER_NO_EJECT_DELAY = 200,
    .PLAYER_VIEW_SCALE = 2.f,

    .LOCAL_DECAY = 0.7f,
    .STATIC_DECAY = 1.2f,
    .GLOBAL_DECAY = 2.f,

    .ANTI_CAMP_TIME = 5.,
    .ANTI_CAMP_MASS = 50000.,
    .ANTI_CAMP_MULT = 0.07,

    .BOTS = 250,
    .BOT_SPAWN_SIZE = 750.f,

    .EJECT_SIZE = 40.f,
    .EJECT_LOSS = 40.f,
    .EJECT_DELAY = 100,

    .EX_FAST_BOOST_R = 2500.f,
    .EX_FAST_MERGE_MASS = 150000.f,

    .AI = &omega_ai
};
