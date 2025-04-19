#ifndef MATRIX_HPP
#define MATRIX_HPP


#include <vector>

/**
 * @brief Generates the power set (all subsets) of the given input vector.
 *
 * @param inputSet A vector of integers representing the input set.
 * @return A vector of subsets, where each subset is a vector<int>.
 *
 * @note The power set of a set with n elements contains 2^n subsets.
 */
std::vector<std::vector<int>> powerSet(const std::vector<int>& inputSet);
#endif // MATRIX_HPP