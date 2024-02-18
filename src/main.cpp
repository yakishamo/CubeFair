#include "board.hpp"

#include <iostream>

int main() {
  Board board;
  board.Print();
  board.setPiece(0,0,0,Piece::White);
  board.setPiece(0,1,0,Piece::Black);
  board.setPiece(0,2,0,Piece::White);
  board.setPiece(0,3,0,Piece::Black);
  board.setPiece(1,0,0,Piece::White);
  board.setPiece(1,1,0,Piece::Black);
  board.setPiece(1,0,1,Piece::White);
  board.Print();
  return 0;
}
