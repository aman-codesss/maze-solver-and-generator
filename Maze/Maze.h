#ifndef MAZE_H
#define MAZE_H

#include <vector>
#include <SFML/Graphics.hpp>
#include "Cell.h"

class Maze {
public:
    Maze(int width, int height);
    void generateAnimated(sf::RenderWindow& window, const sf::Texture& wallTexture);
    void draw(sf::RenderWindow& window, const sf::Texture& wallTexture);
    Cell& getCell(int x, int y) { return grid[y][x]; }//added lines from claude
    int width, height;
    std::vector<std::vector<Cell>> grid;

private:
    void removeWall(Cell& current, Cell& next);
    std::vector<Cell*> getUnvisitedNeighbors(Cell& cell);
};

#endif
