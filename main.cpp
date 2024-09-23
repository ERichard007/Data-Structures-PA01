#include "puzzle.h"
#include <iostream>
using namespace std;

/*
Start by implementing puzzle.cpp functions

Once unit_tests are passing,
Use puzzle functions here to pass stdio_tests
*/

int main() {
  int puzzles;
  cin >> puzzles;
  Puzzle puzzle; // Use this puzzle object ONLY, don't create extras

  for (int k = 0; k < puzzles; k++) {
    //// YOUR CODE HERE ////
    // Read in rows, cols, moves
    // Allocate 2-D array
    // Read in symbols
    // Read in moves (solve puzzle)
    ////////////////////////

    ////////////////////////
    // Print Solution
    // De-allocate 2-D array
    //// END YOUR CODE ////

    int rows, cols, moves;
    cin >> rows;
    cin >> cols;
    cin >> moves;

    puzzle.create_grid(rows, cols);
    puzzle.fill_grid();

    for (int i = 0; i < moves; i++) {
      int num;
      char dir;
      cin >> num >> dir;

      bool reverse = (dir == 'R' || dir == 'D') ? false : true;
      if (dir == 'R' || dir == 'L') {
        puzzle.shift_row(num, reverse);
      } else if (dir == 'U' || dir == 'D') {
        puzzle.shift_col(num, reverse);
      }
    }

    puzzle.print_grid();
    puzzle.delete_grid();
  }

  return 0;
}
