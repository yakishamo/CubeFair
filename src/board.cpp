#include "board.hpp"

#include <iostream>
#include <vector>

void Board::Print() {
  for(int i = 0; i < 4; i++) {
    std::cout << "Layer " << i << std::endl;
    for(int j = 0; j < 4; j++) {
      for(int k = 0; k < 4; k++) {
        std::cout << board[k][j][i] << " ";
      }
      std::cout << std::endl;
    }
    std::cout << std::endl;
  }
}

Piece checkWin() {
  // neet to be implemented
  return Piece::None;
}

Piece getPiece(int x, int y) {
  return board[x][y][z];
}

void setPiece(int x, int y, int z, Piece piece) {
  board[x][y][z] = piece;
}

bool isFull() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (board[i][j] == Piece::None) {
        return false;
      }
    }
  }
  return true;
}

