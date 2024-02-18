#pragma once
#include <vector>

enum class Piece {
  None,
  White,
  Black,
};

class Board {
  public:
    void Print();
    Piece checkWin();
    Piece getPiece(int x, int y, int z);
    void setPiece(int x, int y, int z, Piece p);
    bool isFull();
  private:
    std::vector<std::vector<std::vector<Piece>>> 
      board(4, std::vector<std::vector<Piece>>(4, std::vector<Piece>(4, Piece::None)));
};
