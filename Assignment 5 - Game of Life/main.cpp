#include <iostream>
#include <SFML/Graphics.hpp>
#include "Cell.h"
#include <vector>

using namespace std;

int cellSize = 32;
int numberOfCells = 625;
vector<Cell> grid;

//Directions
Vector2 upLeft(-1, 1);
Vector2 up(0, 1);
Vector2 upRight(1, 1);
Vector2 midLeft(-1, 0);
Vector2 midRight(1, 0);
Vector2 botLeft(-1, -1);
Vector2 bot(0, -1);
Vector2 botRight(1, -1);
Vector2 directions[8] = {upLeft, up, upRight, midLeft, midRight, botLeft, bot, botRight};

void CheckNeighbours(Cell& cell){
    vector<Cell> neighbours;
    int amountAlive;

    for (auto& d : directions) {
        for(auto& c : grid){
            if(cell.position + d == c.position){
                neighbours.push_back(c);
            }
        }
    }
    for(auto& n : neighbours){
        if(n.isAlive){
            amountAlive++;
        }
    }

    if(cell.isAlive){
        if(amountAlive < 2 || amountAlive > 3){
            cell.isAlive = false;
        }
    } else {
        if (amountAlive == 3){
            cell.isAlive = true;
        }
    }

}

int main() {
    for (int i = 0; i < numberOfCells; ++i) {
        Cell cell;
        grid.push_back(cell);
    }

    sf::RenderWindow window(sf::VideoMode(800, 800), "Game of Life");
    window.setFramerateLimit(60);

    for (int i = 0; i < numberOfCells / 4; ++i) {
        int r = rand() % numberOfCells;
        grid[r].isAlive = true;
    }


    for (int i = 0; i < numberOfCells; ++i) {
        grid[i].position = new Vector2( i % 25, (int)(i)/25);
    }

    while (window.isOpen()){

        //Check event
        sf::Event event;
        while (window.pollEvent(event))
        {
            //Close window
            if (event.type == sf::Event::Closed || sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
            {
                window.close();
            }
        }

        for(auto& c : grid){
            CheckNeighbours(c);
            window.draw(c.Draw(cellSize));
        }

        window.display();
        window.clear();

    }

    return 0;
}

