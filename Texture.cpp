#include "Texture.h"
#include "ResourceManager.h"
#include "Error.h"
#include <iostream>
Texture::Texture()
{
    _texture = NULL;
}

Texture::~Texture()
{
    SDL_DestroyTexture(_texture);
}

void Texture::setTexture(SDL_Renderer* renderer, const char * filePath)
{
    _texture = ResourceManager::getTextureFromCache(renderer, filePath);
    if (_texture == NULL)
    {
        error("Texture.cpp: texture not initialized...");
    }
}

SDL_Texture *Texture::getTexture()
{
    return _texture;
}