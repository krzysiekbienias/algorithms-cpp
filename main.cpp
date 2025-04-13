#include <iostream>
#include "utils/vector.hpp"



// #define RUN_LINKED_LIST
// #define RUN_HEAP
// #define RUN_DYNAMIC_PROGRAMMING
// define  RUN_ARRAYS_CHALLENGES
// #define  RUN_RECURSION_CHALLENGES
// #define RUN_STL_UTILS
 //#define RUN_STR


#ifdef RUN_LINKED_LIST
#include "linked_list/linked_list.hpp"
#endif

#ifdef RUN_ARRAYS_CHALLENGES
#include "arrays/challanges.hpp"
#endif


#ifdef RUN_TEMPLATE_UTILS
#include "utils/template_utils.hpp"
#endif

#ifndef EXERCISES_HPP
#include "cpp_combinations/exercises.hpp"
#endif

#ifdef RUN_HEAP
#include "heap/heap.hpp"
#endif

#ifdef RUN_DYNAMIC_PROGRAMMING
#include "dynamic_programming/challenges.hpp"
#endif

#ifdef RUN_RECURSION_CHALLENGES
#include "recursion/challenges.hpp"
#endif

#ifdef RUN_STR
#include "str/challenges.hpp"

#endif


int main() {

    std::cout << "=== Algorithm Playground ===\n";

    ex76();




#ifdef RUN_ARRAYS_CHALLENGES
    /*************************** [ Begin: Minimum Loss ] ***************************/
    std::cout << "Minimum Loss Problem";
    std::vector<int> prices={20,7,8,2,5};
    printVector(prices);
    std::cout << minimumLoss(prices);
    std::cout<<std::endl;
    /*************************** [ End: Minimum Loss ] ***************************/




    std::vector<std::vector<int>> matrix = {
        {1, 0, 1},
        {0, 1, 0},
        {1, 0, 1}
    };
    std::cout<<matrix[1][5]<<std::endl;
    std::cout<<"-------------------------"<<std::endl;
    /*************************** [ Begin: Turnament Winner [AlgoExpert] ] ***************************/
    std::cout<<"Tournament Wienner problem "<<std::endl;
    std::vector<std::vector<std::string>> competitions = {
        {"HTML", "C#"},
        {"C#", "Python"},
        {"Python", "HTML"}
    };
    std::vector<int> results={0,0,1};
    turnamentWinner(competitions,results);
    /*************************** [ Begin: Minimum Loss [AlgoExpert] ] ***************************/
#endif


#ifdef RUN_RECURSION_CHALLENGES
    /*************************** [ Begin: Adjacent Cells ] ***************************/
std::string text1 ="helo";
std::cout<<hasAdjacentCells(text1);
    /*************************** [ Begin: Adjacent Cells ] ***************************/

#endif

#ifdef RUN_LINKED_LIST
    std::cout << "[Linked List Problems]\n";
    LinkedList ll1;
    LinkedList ll2(10);
    std::cout << (ll1.isEmpty() ? "Empty\n" : "Not empty\n");
    std::cout << (ll2.isEmpty() ? "Empty\n" : "Not empty\n");
    ll2.append(3);
    ll2.append(6);
    ll2.append(3);
    std::cout << (ll2.isEmpty() ? "Empty\n" : "Not empty\n");
    ll2.print();
#endif


#ifdef RUN_DYNAMIC_PROGRAMMING
    /*************************** [ Begin: Power Set ] ***************************/
std::vector<int> inputSet{1,2,3};
powerSet(inputSet);
    /*************************** [ Begin: Power Set ] ***************************/
#endif


#ifdef RUN_TEMPLATE_UTILS
    /*************************** [ Begin: Count occurence ] ***************************/
    std::string text = "banana";
    std::vector<int> numbers = {1, 2, 2, 3, 1, 1};

    auto freq1 = countOccurrences(text);
    auto freq2 = countOccurrences(numbers);

    for (const auto& [ch, count] : freq1) {
        std::cout << ch << ": " << count << "\n";
    }

    std::cout << "---\n";

    for (const auto& [num, count] : freq2) {
        std::cout << num << ": " << count << "\n";
    }
    /*************************** [ End: Count occurence ] ***************************/
#endif

#ifdef RUN_STR
    std::string palindromeTest1="racecar";
    isPalindrome(palindromeTest1);

#endif
    return 0;
}

