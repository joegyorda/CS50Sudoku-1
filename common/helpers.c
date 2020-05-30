/*
 * helpers.c - implements methods from helpers.h relating to sudoku_t
 * Author: Team Rocket
 * CS50, Spring 2020
 * A board is a 9x9 2D array that holds its size
 */

#include "helpers.h"
#include "board.h"
#include<stdlib.h>
#include<stdio.h>

<<<<<<< HEAD
/*********** prototypes **************/
int getRandNumber(int min, int max);
=======
static int getRandNumber(int min, int max);
>>>>>>> 95211510dbbf4cc42b02fe2f601b893fe4e370a5

/************ generateRandomGrid ************/
/*
 * Populates a specified 3x3 grid within the board with numbers 1-9
 * 
 * Caller provides:
 *  A valid sudoku board
 * We guarantee:
 *  Each number is used only once
 * Caller is responsible for:
 *  Nothing
 */
bool generateRandomGrid(sudoku_t *b, int rStart, int cStart) {
  if (!b || rStart < 0 || cStart < 0 || b->dimension <= rStart + 3 || b->dimension <= cStart + 3) return false;

  return false;
}

/************ populateBoard ************/
/*
 * Takes a sudoku board and fills it in completely using the solver functionality
 * 
 * Caller provides:
 *  A valid sudoku board
 * We guarantee:
 *  A board with one solution is returned
 * Caller is responsible for:
 *  Nothing
 */
bool populateBoard(sudoku_t *b) {
  if (!b) return false;
   
  return false;
}

/************ removeNumbers ************/
/*
 * Removes n numbers from a valid sudoku board and checks if board is still unique
 * 
 * Caller provides:
 *  A valid sudoku board and a number between 0 and n^2 - 17 numbers to remove
 * We guarantee:
 *  A board with one solution is created
 * We return:
 *  True if numbers removed successfully, false if any error
 * Caller is responsible for:
 *  Nothing
 */
bool removeNumbers(sudoku_t *b, int n) {
  if (!b || (((b->dimension) * (b->dimension)) - MIN_SPACES) < n) return false;
  // printf("N: [%i] < [%i]\n", ((b->dimension) * (b->dimension)) - MIN_SPACES, n);
  srand(time(0));

  int numRemoved = 0;
  while (numRemoved < n) {
    int dim1 = getRandNumber(0, b->dimension - 1);  // generate random number between 0 and 9
    int dim2 = getRandNumber(0, b->dimension - 1);  // do it again
    int num = b->board[dim1][dim2];             // store number currently in random slot
    b->board[dim1][dim2] = 0;                   // remove number at randomly chosen slot by setting it to 0
    
    if (num && true) // solveBoard(b)                          // check if board created is unique
      numRemoved+=1;
<<<<<<< HEAD
    else                                        // reset the item changed to original and run thu loop again
      b->board[dim1][dim2] = num;           
=======

    // reset the item changed to original and run thu loop again
    else {                                        
      b->board[dim1][dim2] = num;
    }

    // printf("Current state: board[%i][%i] = %i, numRemoved: [%i]\n", dim1, dim2, b->board[dim1][dim2], numRemoved);
>>>>>>> 95211510dbbf4cc42b02fe2f601b893fe4e370a5
  }

  return true;
}


/************ getRandomNumber ************/
/*
* Generates a random number within the range specified by the parameters and returns to caller
*
* Caller provides:
*   Two ints indicating the minimum and the maximum of the range of numbers in which
*   a random number should be generated
* We guarantee
*   A random int within the specified range is returnned
* Caller is responsible for:
*   Nothing
*/
static int getRandNumber(int min, int max) {
  int returnValue = rand() % (max - min + 1) + min;
  // printf("Rand generate [%i]\n", returnValue);
  return (returnValue);
}

/************ solveBoard ************/
/*
 * Solves a passed board and returns whether or not the solution is unique
 * 
 * Caller provides:
 *  A valid sudoku board
 * We guarantee:
 *  The passed board is solved with one solution or false is returned
 * Caller is responsible for:
 *  Nothing
 */
bool solveBoard(sudoku_t *b) {
  if (!b) return false;

  return false;
}
