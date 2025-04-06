

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

#endif // UTILS_PRINT_HPP
