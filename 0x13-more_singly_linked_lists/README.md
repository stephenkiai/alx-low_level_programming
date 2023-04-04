**More Singly Linked List in C**

A singly linked list is a data structure consisting of a sequence of nodes, where each node 
contains a value and a pointer to the next node. Common operations that can be performed on 
a singly linked list:

    **Printing all elements:** Traverse the list and print the value of each node.
    
    **Printing the number of elements:** Traverse the list and count the number of nodes.
    
    **Adding a new node at the beginning:** Create a new node, set its value, and set its next 
    pointer to the current head. Set the head to point to the new node.
    
    **Adding a new node at the end:** Traverse the list to find the last node, create a new node,
    set its value, and set the next pointer of the last node to point to the new node.
    
    **Freeing the list:** Traverse the list and free each node.
    
    **Deleting the head node and returning its data:** Set the head to point to the next node, 
    free the old head, and return its data.
    
    **Returning the nth node's data:** Traverse the list to the nth node and return its data.
    
    **Returning the sum of all node values:** Traverse the list and add up the values of each node.
    
    **Inserting a new node at a given position:** Traverse the list to the (n-1)th node, create a 
    new node, set its value, and set its next pointer to the (n)th node. Set the next pointer of the 
    (n-1)th node to point to the new node.
    
    **Deleting the node at a given position:** Traverse the list to the (n-1)th node, set its next 
    pointer to skip the (n)th node, free the (n)th node.

These operations can be implemented with functions that take a pointer to the head node as their argument.

Author: **Stephen Kiai.**
