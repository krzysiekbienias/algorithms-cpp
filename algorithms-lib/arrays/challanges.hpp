#ifndef ARRAYS_CHALLENGES_HPP
#define ARRAYS_CHALLENGES_HPP

#include <vector>

/**
 * @brief Find two numbers in the array that sum up to the target sum.
 *
 * This function searches for a pair of numbers in the provided array that
 * add up to the specified target sum. It returns the first found pair
 * as a vector. If no such pair exists, it returns an empty vector.
 *
 * @param array A vector of integers in which to search for the two numbers.
 * @param targetSum The target sum that the two numbers should equal.
 * @return std::vector<int> A vector containing the two numbers that sum to the target sum.
 */
std::vector<int> twoNumberSum(std::vector<int>& array, int targetSum);



/**
 * @brief Finds the pair of numbers (one from each input array) with the smallest absolute difference.
 *
 * The function sorts both input arrays and then uses a two-pointer approach to efficiently
 * find the closest pair of numbers — one from each array — with the smallest absolute difference.
 *
 * @param arrayOne Reference to the first input array of integers.
 * @param arrayTwo Reference to the second input array of integers.
 * @return A std::vector<int> of size 2, containing the pair with the smallest absolute difference.
 *
 * @note The input arrays are modified in-place due to sorting.
 *       Time complexity: O(n log n + m log m) where n and m are the sizes of the input arrays.
 */
std::vector<int> smallestDifference(std::vector<int> &arrayOne, std::vector<int> &arrayTwo);



/**
 * @brief Checks if the given sequence is a valid subsequence of the array.
 *
 * A valid subsequence means all elements in the sequence appear in the array in the same order,
 * but not necessarily consecutively.
 *
 * @param array The main array of integers.
 * @param sequence The sequence to validate.
 * @return true if sequence is a valid subsequence of array; false otherwise.
 */
bool isValidSequence(const std::vector<int>& array, const std::vector<int>& sequence);


/*************************** [ Begin: Smallest Difference[HackerRank]  ] ***************************/
/**
 * @brief Computes the minimum loss from selling a house after buying it at an earlier time.
 *
 * Given a list of unique house prices, this function finds the smallest possible loss where
 * a house is bought at a higher price and sold later at a lower price. The input list is sorted
 * to efficiently compare prices, and a map tracks their original indices to ensure correct time order.
 *
 * @param prices A vector of unique integers representing house prices at different time points.
 * @return The minimum loss (as a positive integer), or std::numeric_limits<int>::max() if no valid loss found.
 *
 * @note The input vector is not modified.
 *       Time complexity: O(n log n), where n is the number of prices.
 *
 * Example:
 *   Input:  [20, 15, 10, 17, 12]
 *   Output: 3  // Buy at 20 (index 0), sell at 17 (index 3)
 */
int minimumLoss(const std::vector<int>& prices);

/*************************** [ End: Smallest Difference[HackerRank]  ] ***************************/

/*************************** [ Begin: Turnament Winner[AlgoExpert]  ] ***************************/
std::string getWinner(std::vector<std::string>teams,int result);
std::string turnamentWinner(std::vector<std::vector<std::string>> competitions, std::vector<int> results);
std::vector<int> moveElementToTheEnd(const std::vector<int> & array,int toMove);
/*************************** [ End: Turnament Winner[AlgoExpert]  ] ***************************/

/*************************** [ Begin: Sorted Squared  Array[AlgoExpert]  ] ***************************/
std::vector<int> sortedSquared(const std::vector<int>& array);
/*************************** [ Array: Sorted Squared  Array[AlgoExpert]   ] ***************************/

#endif // ARRAYS_CHALLENGES_HPP
