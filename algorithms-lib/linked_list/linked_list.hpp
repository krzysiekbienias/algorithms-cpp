#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

#include "node.hpp"

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    explicit LinkedList(int value);
    ~LinkedList() = default;

    void append(int value);
    void print() const;
    bool isEmpty() const;

    // Optional: more methods like delete, reverse, size, etc.
};

#endif