#include <stdio.h>
#include <stdlib.h>

// Node yapisi tanimi
struct Node {
    int data;
    struct Node* next;
};

// 1. Liste Olusturma (Creating a List) ve Yeni Node Yardimci Fonksiyonu
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// 2. Basina Ekleme (Insert at Beginning)
void insertAtBeginning(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
    printf("%d degeri basa eklendi.\n", data);
}

// 3. Sonuna Ekleme (Insert at End)
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    printf("%d degeri sona eklendi.\n", data);
}

// 4. Ortasina Ekleme (Insert After a Specific Value)
void insertAfter(struct Node* head, int target, int data) {
    struct Node* temp = head;
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Hedef deger (%d) bulunamadigi icin ekleme yapilamadi.\n", target);
        return;
    }
    struct Node* newNode = createNode(data);
    newNode->next = temp->next;
    temp->next = newNode;
    printf("%d degeri %d degerinden sonraya eklendi.\n", data, target);
}

// 5. Silme Islemi (Deletion by Value)
void deleteNode(struct Node** head, int key) {
    struct Node *temp = *head, *prev = NULL;

    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        printf("%d degeri silindi.\n", key);
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("%d degeri listede bulunamadi.\n", key);
        return;
    }

    prev->next = temp->next;
    free(temp);
    printf("%d degeri silindi.\n", key);
}

// 6. Listeyi Gezme (Traversal)
void printList(struct Node* head) {
    struct Node* temp = head;
    printf("List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtBeginning(&head, 5);
    insertAfter(head, 10, 15); // 10'dan sonra 15 ekle

    printList(head);

    deleteNode(&head, 10);
    printList(head);

    return 0;
}
