#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "arrays/challanges.hpp"  // Make sure this path matches your header file

TEST(SortedSquaredTest, HandlesPositiveNumbers) {
    std::vector<int> input = {1, 2, 3, 4};
    std::vector<int> expected = {1, 4, 9, 16};
    EXPECT_EQ(sortedSquared(input), expected);
}

TEST(SortedSquaredTest, HandlesNegativeNumbers) {
    std::vector<int> input = {-4, -2, -1};
    std::vector<int> expected = {1, 4, 16};
    EXPECT_EQ(sortedSquared(input), expected);
}

TEST(SortedSquaredTest, HandlesMixedNumbers) {
    std::vector<int> input = {-3, -1, 0, 2, 4};
    std::vector<int> expected = {0, 1, 4, 9, 16};
    EXPECT_EQ(sortedSquared(input), expected);
}

TEST(SortedSquaredTest, HandlesEmptyInput) {
    std::vector<int> input = {};
    std::vector<int> expected = {};
    EXPECT_EQ(sortedSquared(input), expected);
}
