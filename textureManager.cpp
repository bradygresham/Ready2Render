#include "textureManager.h"
#include "Error.h"
#include <iostream>
#include <string>

std::map<const char*, SDL_Texture*> textureMap;

textureManager::textureManager()
{
}

textureManager::~textureManager()
{
}

SDL_Texture *textureManager::getTextureFromCache(SDL_Renderer* renderer, const char *filePath)
{
    //use filePath as key to search for texture
    auto mit = _textureMap.find(filePath); 
    //include error checking so we don't set computer on fire
    if (mit == _textureMap.end())
    {
        mit = addTexturetoCache(renderer, filePath); //also returns the new texture if it was made.
    }
    //if returns nullptr then we add the filePath to the map with the image stored as the texture
    std::cout << "Mit Second right before return in get texture from cache:" << mit->second; //make sure it matches to New texture data
    return mit->second;
}

std::map<const char *, SDL_Texture*>::iterator textureManager::addTexturetoCache(SDL_Renderer* renderer, const char* filePath)
{
    SDL_Texture* newTexture = IMG_LoadTexture(renderer, filePath);

    if (newTexture == NULL) //error checking
    {
        errorAndFilePath("Error in textureManager.cpp \n Texture not created:", filePath);
        error(SDL_GetError());
        return _textureMap.end(); 
    }
    auto result = _textureMap.insert(std::make_pair(filePath, newTexture));
    std::cout << "New texture data:" << newTexture << std::endl;
    return result.first;
}

void textureManager::destroyCache()
{
    std::map<const char*, SDL_Texture*>::iterator mit;
    
    for (mit = _textureMap.begin(); mit != _textureMap.end(); mit++)
    {
        SDL_DestroyTexture(mit->second); 
    }
}
