#include "Maze.h"

// Maze::Maze(int rows, int cols, int colwidth) {
//   // for (int i = 0; i < rows; i++) {
//   //   for (int j = 1; j < cols; j++) {
//   //     this->maze[i][j] = new Room(i, j, colwidth);
//   //   }
//   // }
// }

Maze::Maze(int rows, int cols, int colwidth) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      Room newRoom(i, j, colwidth);
      this->mazeGrid.push_back(newRoom);
    }
  }
}

void Maze::draw(SDL_Renderer *renderer) {
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
  SDL_RenderClear(renderer);
  SDL_SetRenderDrawColor(renderer, 255, 255, 255, SDL_ALPHA_OPAQUE);
  for (Uint32 i = 0; i < mazeGrid.size(); i++) {
    mazeGrid[i].show(renderer);
  }
  SDL_RenderPresent(renderer);
}

void Maze::generate() {
  mazeGrid[15].printWalls();
  mazeGrid[16].printWalls();
  mazeGrid[15].removeWall(1);
  mazeGrid[16].removeWall(3);
  mazeGrid[15].printWalls();
  mazeGrid[16].printWalls();
}