#include <gtest/gtest.h>
#include <vector>
#include "arrays/challanges.hpp"  // Adjust if your function lives elsewhere

TEST(MoveElementToEndTest, HandlesEmptyVector) {
    std::vector<int> arr = {};
    std::vector<int> expected = {};
    EXPECT_EQ(moveElementToTheEnd(arr, 5), expected);
}

TEST(MoveElementToEndTest, NoElementsToMove)
{
    std::vector<int> arr = {1, 2, 3};
    std::vector<int> expected = {1, 2, 3};
    std::vector<int> result = moveElementToTheEnd(arr, 9);
    for (int val : result) std::cout << val << " ";
    std::cout << std::endl;
    EXPECT_EQ(moveElementToTheEnd(arr, 9), expected);
}

TEST(MoveElementToEndTest, AllElementsToMove) {
    std::vector<int> arr = {4, 4, 4, 4};
    std::vector<int> expected = {4, 4, 4, 4};
    EXPECT_EQ(moveElementToTheEnd(arr, 4), expected);
}

TEST(MoveElementToEndTest, MixedElements) {
    std::vector<int> arr = {2, 1, 2, 3, 2, 4};
    std::vector<int> result = moveElementToTheEnd(arr, 2);
    
    // Check all non-2's are at the front
    std::vector<int> expectedFront = {1, 3, 4};
    for (int i = 0; i < expectedFront.size(); ++i) {
        EXPECT_EQ(result[i], expectedFront[i]);
    }

    // Check all 2s are at the back
    for (int i = expectedFront.size(); i < result.size(); ++i) {
        EXPECT_EQ(result[i], 2);
    }
}
