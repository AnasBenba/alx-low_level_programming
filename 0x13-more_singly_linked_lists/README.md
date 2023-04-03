## Single Linked Lists in C

A single linked list is a linear data structure where each element (or node) contains a value and a pointer to the next element in the list. In C, single linked lists can be implemented using structures and pointers.

# Structure Definition

To create a single linked list, we need to define a structure that will hold the data and the pointer to the next element in the list. Here's an example:

<pre>
```c
struct Node {
    int data;
    struct Node *next;
};
```
</pre>

This structure has two members: `data`, which will hold the value of the node, and `next`, which will hold a pointer to the next node in the list.

# Creating a Linked List
To create a linked list, we need to allocate memory for the first node and assign the `next` pointer to NULL. Here's an example:

<pre>
```c
struct Node *head = NULL;
head = (struct Node*)malloc(sizeof(struct Node));
head->data = 1;
head->next = NULL;
```
</pre>

This creates the first node with a value of 1 and sets its `next` pointer to NULL.

# Inserting a Node

To insert a node into a linked list, we need to create a new node, assign its `next` pointer to the current node's `next` pointer, and update the current node's `next` pointer to point to the new node. Here's an example:

<pre>
```c
struct Node *newNode = NULL;
newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->data = 2;
newNode->next = head->next;
head->next = newNode;
```
</pre>

This creates a new node with a value of 2, sets its `next` pointer to the current node's `next` pointer (which is NULL), and updates the current node's `next` pointer to point to the new node.

# Traversing a Linked List

To traverse a linked list, we start at the head node and follow the `next` pointers until we reach the end of the list (when the `next` pointer is NULL). Here's an example:

<pre>
```c
struct Node *current = head;
while (current != NULL) {
    printf("%d ", current->data);
    current = current->next;
}
```
</pre>

This starts at the head node, prints its value, and moves to the next node. This continues until the end of the list is reached.

# Deleting a Node

To delete a node from a linked list, we need to find the node before the node to be deleted, update its `next` pointer to skip the node to be deleted, and free the memory used by the node to be deleted. Here's an example:

<pre>
```c
struct Node *previous = head;
struct Node *current = head->next;
while (current != NULL) {
    if (current->data == 2) {
        previous->next = current->next;
        free(current);
        break;
    }
    previous = current;
    current = current->next;
}
```
</pre>

This starts at the head node and follows the `next` pointers until the node to be deleted is found (in this case, the node with a value of 2). It then updates the `next` pointer of the previous node to skip the node to be deleted, frees the memory used by the node to be deleted, and breaks out of the loop.

# Conclusion

Single linked lists are a useful data structure in C for storing and manipulating data in a dynamic way. By using structures and pointers, we can create and manipulate linked lists easily and efficiently.
