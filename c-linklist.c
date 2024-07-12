// drameloN @00:00 12Jul2024
// The Great Escape http://grader1.cs.sci.ku.ac.th/team/problems/277/text

#include <stdio.h>
#include <stdlib.h>

// Create a node
struct Node {
    int code;
    struct Node* next;
};

// Insert at the beginning
void insertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory to a node
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    // insert the data
    new_node->code = new_data;
    new_node->next = (*head_ref);

    // Move head to new node
    (*head_ref) = new_node;
}

// Insert a node after a node
void insertAfter(struct Node* prev_node, int new_data) {
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->code = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Insert the the end
void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *head_ref; /* used in step 5*/

    new_node->code = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL) last = last->next;
        last->next = new_node;
    return;
}

// Search a node
int* searchNode(struct Node** head_ref, int key) {
    struct Node* current = *head_ref;

    while (current != NULL) {
        if (current->code == key) return (current);
            current = current->next;
        }
    return 0;
}

// Print the linked list
void printList(struct Node* node) {
    while (node != NULL) {
        printf(" %d ", node->code);
        node = node->next;
    }
}

// Driver program
int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);

    printf("Linked list: ");
    printList(head);

    int item_to_find = 4;
    // if (searchNode(&head, item_to_find)) {
    printf("\n%d(%p) is found\n", *searchNode(&head, item_to_find), searchNode(&head, item_to_find));
    // } else {
    // printf("\n%d is not found\n", item_to_find);
    // }

}


// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int code;
//     struct node *next;
// };

// void insertionAtBegin(struct node** head, int new_data) {
//     struct node* new = (struct node*)malloc(sizeof(struct node));
//     new->code = new_data;
//     new->next = (*head);
//     (*head) = new;
// }

// // print the linked list value
// void printLinkedlist(struct node *p) {
//     while (p != NULL) {
//         printf("%d ", p->code);
//         p = p->next;
//     }
// }

// int main() {
//     struct node *c0;
//     struct node *c1 = ma
    

//     int n; scanf(" %d", &n);

//     for (int i=0; i<101; i++){
//         int x = 0;
//         scanf(" %d", &x);
//         if (x > 0){
//             struct node *new = malloc(sizeof(struct node));
//             new->code = x;
//             new->next = c0;
//             c0 = new;
//         } else { break; };
//     };

//     printLinkedlist(c0);
// }