#include <vector>

/**
 * @brief Generates the power set (all subsets) of the given input vector.
 *
 * @param inputSet A vector of integers representing the input set.
 * @return A vector of subsets, where each subset is a vector<int>.
 *
 * @note The power set of a set with n elements has 2^n subsets.
 */
std::vector<std::vector<int>> powerSet(const std::vector<int>& inputSet) {
    std::vector<std::vector<int>> subsets = {{}};

    for (int element : inputSet) {
        std::vector<std::vector<int>> newSubsets;

        for (const auto& subset : subsets) {
            auto newSubset = subset;  // copy existing subset
            newSubset.push_back(element);
            newSubsets.push_back(newSubset);
        }

        subsets.insert(subsets.end(), newSubsets.begin(), newSubsets.end());
    }

    return subsets;
}