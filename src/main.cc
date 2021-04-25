#include <stdio.h>
#include <stdlib.h>

#include "gamemath.h"
#include "sdl.h"

int main(void) {

  sdl::Initialize();
  sdl::ClearScreen({0, 0, 0, 1});
  sdl::Show();

  while (1) {
    if (sdl::PollEvent() == sdl::EventType::kSdlWantsQuit) {
      break;
    }
  }

  return 0;
}

