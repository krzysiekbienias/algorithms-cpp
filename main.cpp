#include <iostream>



#define RUN_LINKED_LIST
// #define RUN_HEAP
// #define RUN_DYNAMIC_PROGRAMMING

#ifdef RUN_LINKED_LIST
#include "linked_list/linked_list.hpp"
#endif

#ifdef RUN_HEAP
#include "heap/heap.hpp"
#endif

#ifdef RUN_DYNAMIC_PROGRAMMING
#include "dynamic_programming/dp.hpp"
#endif

int main() {
    std::cout << "=== Algorithm Playground ===\n";

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
    return 0;
}

