#include <iostream>
#include <SFML/Graphics.hpp>
#include <list>
#include "Cell.h"
#include <vector>

using namespace std;

int cellSize = 10;
int numberOfCells = 625;
vector<Cell> grid;

int main() {
    for (int i = 0; i < numberOfCells; ++i) {
        Cell cell;
        grid.push_back(cell);
    }

    sf::RenderWindow window(sf::VideoMode(800, 600), "Game of Life");

    while (window.isOpen()){
        for (int i = 0; i < numberOfCells; ++i) {
            grid[i].position = new Vector2( (i * cellSize) % 25, (int)i/25 );
        }

    }

    return 0;
}
