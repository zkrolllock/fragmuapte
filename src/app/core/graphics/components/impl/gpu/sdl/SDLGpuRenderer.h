#ifndef FRAGMUAPTE_SDLGPURENDERER_H
#define FRAGMUAPTE_SDLGPURENDERER_H


#if defined(_WIN32)
    #include "SDL.h"
#else
    #include "SDL2/SDL.h"
#endif

namespace zkl {

/**
 * Common data accessible by SDLGpuWindow and SDLGpuTextureRepository
 */
class SDLGpuRenderer
{
private:
    SDL_Renderer *renderer;
    friend class SDLGpuWindow;
    friend class SDLGpuTextureRepository;
};

} // zkl


#endif //FRAGMUAPTE_SDLGPURENDERER_H
