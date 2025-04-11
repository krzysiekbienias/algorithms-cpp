#include <vector>
#include <algorithm>
#include <limits>
#include <map>
#include "iostream"


std::vector<int> twoNumberSum(std::vector<int>& array, int targetSum) {
    std::sort(array.begin() ,array.end());
    int low_p=0;
    int high_p;
    high_p = array.size() - 1;
    while (low_p<high_p) {
        int currentSum=array[low_p]+array[high_p];
        if (targetSum==currentSum){
        return {array[low_p],array[high_p]};
        }
        else if (currentSum<targetSum) {
            low_p++;

        }
        else {
            --high_p;
        }
    }
    return {};
}


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
bool isValidSequence(const std::vector<int>& array, const std::vector<int>& sequence) {
    size_t array_index=0;
    size_t sequence_index=0;
    while (array_index<array.size() and sequence_index<sequence.size()) {
        if (array[array_index]==sequence[sequence_index]) {
            array_index++;
            sequence_index++;
        }
        else
        {array_index++;}


    }
    return sequence_index==sequence.size();
}


std::vector<int> smallestDifference(std::vector<int> &arrayOne, std::vector<int> &arrayTwo) {
    std ::sort(arrayOne.begin(),arrayOne.end());
    std ::sort(arrayOne.begin(),arrayTwo.end());
    size_t i=0;
    size_t j=0;
    int minDiff=std::numeric_limits<int>::max();
    std::vector<int> closestPair;
    while (i<arrayOne.size() &&j<arrayTwo.size()) {
        int currentDiff=std::abs(arrayOne[i]-arrayTwo[j]);
        if (currentDiff==0) {
            return {arrayOne[i],arrayTwo[j]};
        }
        if(currentDiff<minDiff) {
            minDiff=currentDiff;
            closestPair={arrayOne[i],arrayTwo[j]};
        };
        if (arrayOne[i]<arrayTwo[j]) {
            i++;
            }
        else{
            j++;

        }

        }
    return closestPair;
    }


int minimumLoss(const std::vector<int>& prices) {
    std::map<int,size_t> originalIndices;
    for (size_t i=0;i<prices.size();i++) {
        originalIndices[prices[i]]=i;
    }
    //make copy of original index and sort it
    std::vector<int> sortedPrices=prices;
    std::sort(sortedPrices.begin(),sortedPrices.end());

    int minLoss=std::numeric_limits<int>::max();
    for (size_t i=1;i<sortedPrices.size();i++) {
        int lower=sortedPrices[i-1];
        int higher=sortedPrices[i];
        if (originalIndices[higher]<originalIndices[lower]) {
            std::cout <<"Valid combination buy for " <<higher<<" and sell for "<< lower <<std::endl;
            int current_loss=higher-lower; // loss will be positive
            std::cout << "The transaction generates loss equall "<<current_loss<<std::endl;
            if (current_loss<minLoss) {
                std::cout << "Current loss = "<<current_loss<<" is smaller than minimum loss observed so far so we replace it"<<std::endl;
                minLoss=current_loss;
            }
        }
        std::cout<<"Not valid transaction for "<< i <<" and"<<i-1<<"!"<<std::endl;

    }
    return minLoss;
}

