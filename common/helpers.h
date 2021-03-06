/*
 * helpers.h - header file for supporting sudoku board functionality
 * 
 * Author: Team Rocket
 * CS50, Spring 2020
 * 
 * A board is a 9x9 2D array that holds its size
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "board.h"

#ifndef __HELPERS_H
#define __HELPERS_H

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
void generateRandomGrid(sudoku_t *b, int rStart, int cStart);

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
bool populateBoard(sudoku_t *b);

/************ removeNumbers ************/
/*
 * Removes n numbers from a valid sudoku board and checks if board is still unique
 * 
 * Caller provides:
 *  A valid sudoku board and a number between 0 and n^2 - 17 numbers to remove
 * We guarantee:
 *  A board with one solution is created
 * We return:
 *  True if numbers removed successfully, false if too many iterations or board is non-unique
 * Caller is responsible for:
 *  Freeing all memory
 */
bool removeNumbers(sudoku_t *b, int n);

/************ solveBoard ************/
/*
 * Takes a board and returns the number of solutions the board has as well as updating the board to the first solution
 * 
 * Caller provides:
 *  A valid sudoku board
 * We guarantee:
 *  A board with one solution is returned
 * Caller is responsible for:
 *  Nothing
 */
int solveBoard(sudoku_t *b);

/**************** isUniqueBoard **************/
/* 
 * Returns the number of solutions that a sudoku grid has 
 * 
 * Caller provides: 
 *  A valid sudoku grid, a position (0, 0) to start at, the number of solutions
 * We guarantee: 
 *  Returns 0 if no solutions, 1 if board has a unique solution, 2 if board 
 *  has multiple solutions
 *  The passed board is not changed 
 * Caller is responsible for:
 *  Calling deleteBoard
 * 
 * This code takes inspiration from:
 *  https://stackoverflow.com/questions/24343214/determine-whether-a-sudoku-has-a-unique-solution
 */
int isUniqueBoard(int i, int j, sudoku_t* b, int count);

/************ parseDifficulty ************/
/*
 * Takes a difficulty value (1-5) and returns how many numbers to remove from the specific board
 * 
 * Caller provides:
 *  A valid difficulty and a valid board
 * We guarantee:
 *  A number of spots to remove from the board that can still return a valid board will be returned
 * Caller is responsible for:
 *  Nothing
 */
int parseDifficulty(sudoku_t *b, int d);

#endif // __HELPERS_H