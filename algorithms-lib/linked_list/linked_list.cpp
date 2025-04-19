#include "linked_list.hpp"
#include <iostream>

LinkedList::LinkedList(): head(nullptr) {
}
LinkedList::LinkedList(int value) {
    head=new Node(value);
}

void LinkedList::print() const {
    Node* current=head;
    std::cout<<"[";
    while (current !=nullptr) {
        std::cout<<current->value;
        if (current->next!=nullptr) {
            std::cout<<" -> ";

        }
        current=current->next;
    }
    std::cout<<"]"<<std::endl;
}

void LinkedList::append(int value) {
    Node* newNode=new Node(value);
    if(!head) {
        head=newNode;
        return;
    }
    Node* current=head;
    while (current->next) {
        current=current->next;
    }
    current->next=newNode;
}



bool LinkedList::isEmpty() const {
    return head==nullptr;
}

