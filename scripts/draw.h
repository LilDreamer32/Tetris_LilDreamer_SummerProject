//
// Created by schellingerj on 8/10/2023.
//

#ifndef PROJECT_NAME_DRAW_H
#define PROJECT_NAME_DRAW_H
#include <SDL.h>

class draw {
    void drawPlayer(SDL_Renderer* renderer);
    SDL_Texture *loadTexture(char *filename);
};


#endif //PROJECT_NAME_DRAW_H
