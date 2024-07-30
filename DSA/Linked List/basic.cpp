/**
 * What is a linked list?
    * Linear data structure used to store a list of values.
    * Array is a single memory block with partitions
    * But in Linked List Memory Blocks are Linked to each other...


 * Challenges of array
    * static size
    * contiguous memory allocation
    * insertion and deletion is costly in array O(n)


* Advantages of a linked list over an array
    * dynamic size
    * non-contiguous memory allocation
    * insertion and deletion is non expensive


* Listnode
    * blocks of memory -> node
    * node(data, next)
    * starting point -> head
    * ending point -> tial
    * next of ending point is null


* Types of linked lists
    * Singly linked list
       * every node points to its successor node
    * Doubly linked list
       * every node is connected to its previous and next node
    * Circular linked list
       * the last node points to head node 


* Implementation of a listnode in a singly linked list
    class Node {
        int val;   // datatype can be string, bool, object
        Node* next;
    };
*/