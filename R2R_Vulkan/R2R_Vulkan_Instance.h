#pragma once
#include <vulkan/vulkan.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_vulkan.h>

#include <vector>
namespace R2R{

class Instance{
    public:
    Instance();
    Instance (const Instance & inst);
    ~Instance();

    
    std::vector<char *> extensions_wanted_and_available();
    std::vector<char *> extensions_wanted_and_available(const char * instanceExtensionsWanted[ ]); //pass in your own stuff

    std::vector<char*> layers_wanted_and_available();
    std::vector<char*> layers_wanted_and_available(const char * instanceLayersWanted[ ]);
    //instance initializations
    //*******************
    void init_instance(VkInstanceCreateInfo create, VkApplicationInfo app);
    void init_instance(SDL_Window* window);
    //*******************
    VkInstance* getInstancePtr(); //return pointer to the instance


    private:
    VkInstance _instance;

};

}