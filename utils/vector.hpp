

#ifndef UTILS_PRINT_HPP
#define UTILS_PRINT_HPP

#include <vector>
#include <iostream>

/**
 * @brief Prints the contents of a vector to the standard output.
 *
 * This function takes a constant reference to a vector of integers and
 * prints its elements in a readable format: [elem1, elem2, ..., elemN].
 *
 * Each element is separated by a comma and a space. The entire vector is
 * enclosed in square brackets. A newline character is printed after the
 * closing bracket.
 *
 * @param vec A constant reference to the vector of integers to be printed.
 */
void printVector(const std::vector<int>& vec);


/**
 * @brief Reads a matrix of integers from standard input.
 *
 * Prompts for the number of rows and columns, then reads each element.
 * The matrix is returned as a 2D std::vector.
 */
std::vector<std::vector<int>> readIntMatrix();

/**
 * @brief Prints a matrix of integers to standard output.
 *
 * Each row appears on a new line, and values are separated by spaces.
 *
 * @param matrix A 2D matrix of integers.
 */
void printMatrix(const std::vector<std::vector<int>>& matrix);



#endif // UTILS_PRINT_HPP
