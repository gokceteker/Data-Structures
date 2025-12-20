#include <stdio.h>
#include <stdlib.h>

// ========================= DOUBLE LINKED LIST ==========================

// Double Linked List Node
struct DNode {
    int data;
    struct DNode* prev;
    struct DNode* next;
};

// Create a new DLL node
struct DNode* createDNode(int data) {
    struct DNode* newNode = (struct DNode*)malloc(sizeof(struct DNode));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Insert at end
void insertAtEndD(struct DNode** head, int data) {
    struct DNode* newNode = createDNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct DNode* temp = *head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

// Insert after a specific value
void insertAfterD(struct DNode* head, int target, int data) {
    struct DNode* temp = head;
    while (temp != NULL && temp->data != target) temp = temp->next;
    if (temp == NULL) {
        printf("Target value (%d) not found. Insertion failed.\n", target);
        return;
    }
    struct DNode* newNode = createDNode(data);
    newNode->next = temp->next;
    newNode->prev = temp;
    if (temp->next != NULL) temp->next->prev = newNode;
    temp->next = newNode;
}

// Recursive deletion of all nodes
void deleteAllRecursive(struct DNode** head) {
    if (*head == NULL) return;
    deleteAllRecursive(&((*head)->next));
    free(*head);
    *head = NULL;
}

// Print DLL
void printDList(struct DNode* head) {
    if (head == NULL) {
        printf("Double Linked List: NULL\n");
        return;
    }
    struct DNode* temp = head;
    printf("Double Linked List: ");
    while(temp) {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// ========================= CIRCULAR LINKED LIST ==========================

// Circular Linked List Node
struct CNode {
    int data;
    struct CNode* next;
};

// Create a new CLL node
struct CNode* createCNode(int data) {
    struct CNode* newNode = (struct CNode*)malloc(sizeof(struct CNode));
    newNode->data = data;
    newNode->next = newNode;
    return newNode;
}

// Insert at end of circular list
struct CNode* insertCNodeEnd(struct CNode* tail, int data) {
    struct CNode* newNode = createCNode(data);
    if (tail == NULL) return newNode;
    newNode->next = tail->next;
    tail->next = newNode;
    return newNode;
}

// Print circular linked list
void printCList(struct CNode* tail) {
    if (tail == NULL) {
        printf("Circular List: NULL\n");
        return;
    }
    struct CNode* temp = tail->next;
    printf("Circular List: ");
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != tail->next);
    printf("(Head)\n");
}

// ========================= MAIN ==========================

int main() {
    // Double Linked List Test
    struct DNode* dHead = NULL;
    insertAtEndD(&dHead, 10);
    insertAtEndD(&dHead, 20);
    insertAfterD(dHead, 10, 15);
    printDList(dHead);

    printf("Recursive deletion starting...\n");
    deleteAllRecursive(&dHead);
    printDList(dHead);

    // Circular Linked List Test
    struct CNode* cTail = NULL;
    cTail = insertCNodeEnd(cTail, 1);
    cTail = insertCNodeEnd(cTail, 2);
    cTail = insertCNodeEnd(cTail, 3);
    printCList(cTail);

    return 0;
}
