#pragma once

#include <SDL.h>
#include <SDL_render.h>
#include <SDL_video.h>
#include <stdlib.h>

#include "gamemath.h"

namespace sdl {

constexpr uint16_t kWindowWidth = 800;
constexpr uint16_t kWindowHeight = 600;

enum class EventType {
  kNone,
  kSdlWantsQuit,
};

extern SDL_Renderer* renderer;
extern SDL_Window* window;

void Initialize();

void ClearScreen(Vec4<uint8_t> color);

void SetPixel(Vec2<uint16_t> pixel, Vec4<double> color);

void Show();

EventType PollEvent();

void Destroy();

}  // namespace sdl
