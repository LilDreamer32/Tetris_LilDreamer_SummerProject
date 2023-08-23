//
// Created by schellingerj on 8/10/2023.
//

#ifndef PROJECT_NAME_INPUT_H
#define PROJECT_NAME_INPUT_H
#include <SDL.h>

class input {
public:
    void doInput(SDL_Event event);
    void handleKeyDown(SDL_Event event);
};


#endif //PROJECT_NAME_INPUT_H
