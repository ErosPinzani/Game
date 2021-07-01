//
// Created by Francesco on 18/06/2021.
//

#ifndef GAME_WORLD_H
#define GAME_WORLD_H

#include "Map/Tile.h"
#include "Characters/Hero.h"

class World {
public:
    World(std::shared_ptr<sf::RenderWindow> window, const TextureHolder &textures);

    //things related to tiles
    int gridLength;
    std::vector<std::vector<Tile *>> tiles;
    sf::Vector2i exitPos;
    sf::Vector2i HeroPos;
    std::vector<sf::Vector2i> enemyPositions;

    std::shared_ptr<Hero> hero;
    std::shared_ptr<sf::RenderWindow> window;
    const TextureHolder& textures;

    void setUpInitialState();
    void setUpEnemyPositions();
    void setUpTiles();
    void draw();
    void drawHero();


};


#endif //GAME_WORLD_H
