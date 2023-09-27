#pragma once
#include "olcPixelGameEngine.h"
#include <string>


inline const int RESOLUTION_WIDTH = 1280;
inline const int RESOLUTION_HEIGHT = 720;

inline const float GATES_SPRITES_SCALE = 0.125f;

inline const int MAX_INPUTS_TO_CACHE_LOGIC_TABLE = 10;

inline const std::string SPRITES_PATH = "sprites/";

inline olc::Sprite* GATE_SPRITE_AND  = nullptr;
inline olc::Sprite* GATE_SPRITE_NAND = nullptr;
inline olc::Sprite* GATE_SPRITE_NOR  = nullptr;
inline olc::Sprite* GATE_SPRITE_NOT  = nullptr;
inline olc::Sprite* GATE_SPRITE_OR   = nullptr;
inline olc::Sprite* GATE_SPRITE_XNOR = nullptr;
inline olc::Sprite* GATE_SPRITE_XOR  = nullptr;

inline olc::Decal* GATE_DECAL_AND  = nullptr;
inline olc::Decal* GATE_DECAL_NAND = nullptr;
inline olc::Decal* GATE_DECAL_NOR  = nullptr;
inline olc::Decal* GATE_DECAL_NOT  = nullptr;
inline olc::Decal* GATE_DECAL_OR   = nullptr;
inline olc::Decal* GATE_DECAL_XNOR = nullptr;
inline olc::Decal* GATE_DECAL_XOR  = nullptr;