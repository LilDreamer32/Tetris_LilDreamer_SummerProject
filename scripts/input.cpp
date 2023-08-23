//
// Created by schellingerj on 8/10/2023.
//

#include "input.h"


void input::doInput(SDL_Event event)
{
    while (SDL_PollEvent(&event))
    {
        switch (event.type)
        {
            case SDL_QUIT:
                exit(0);
                break;
            case SDL_KEYDOWN:
                input::handleKeyDown(event);
            default:
                break;
        }
    }
}

void input::handleKeyDown(SDL_Event event) {

}
