#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

// Create linked list
struct node* createList(int n) {
    struct node *head = NULL, *temp = NULL, *newnode;
    int value, i;

    for(i = 0; i < n; i++) {
        scanf("%d", &value);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }
    return head;
}

// Delete first occurrence of key
struct node* deleteKey(struct node* head, int key) {
    struct node *temp = head, *prev = NULL;

    // Case 1: Key is in head
    if(temp != NULL && temp->data == key) {
        head = temp->next;
        free(temp);
        return head;
    }

    // Traverse to find key
    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Key not found
    if(temp == NULL)
        return head;

    // Remove node
    prev->next = temp->next;
    free(temp);

    return head;
}

// Print list
void printList(struct node* head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
}

int main() {
    int n, key;

    scanf("%d", &n);
    struct node* head = createList(n);

    scanf("%d", &key);

    head = deleteKey(head, key);

    printList(head);

    return 0;
}
