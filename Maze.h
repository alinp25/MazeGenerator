#include <iostream>
#include <vector>
#include "Room.h"

using namespace std;

class Maze {
  private: 
    // Room mazeGrid[512][512];
    vector < Room > mazeGrid;
  public: 
    Maze(int rows, int cols, int colwidth);
    void draw(SDL_Renderer *renderer);
    void generate();
};