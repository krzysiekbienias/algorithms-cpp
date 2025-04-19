#ifndef NODE_HPP
#define NODE_HPP


/**
 * @brief Represents a single node in a singly linked list.
 *
 * This class encapsulates the internal structure of a linked list node,
 * storing an integer value and a pointer to the next node in the sequence.
 *
 * The constructor is private to enforce encapsulation, meaning nodes can only
 * be created and managed by the LinkedList class. This design prevents external
 * components from modifying or creating list nodes directly, ensuring integrity
 * of the linked list structure.
 *
 * @note The LinkedList class is declared as a friend to allow full access
 *       to Node's private members for list operations such as insertion,
 *       traversal, and deletion.
 */

class LinkedList;  // Forward declaration for friend

class Node {
private:
    int value;
    Node* next;

    /**
     * @brief Constructs a node with the given integer value.
     *
     * Initializes the node with the provided value and sets the next pointer
     * to nullptr. This constructor is private to restrict node creation to the
     * LinkedList class.
     *
     * @param val The integer value to store in the node.
     */
    Node(int val);  // Private constructor — only LinkedList can create nodes

    friend class LinkedList;  // LinkedList can access Node's internals
};

#endif