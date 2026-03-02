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

// Count occurrences
int countOccurrences(struct node* head, int key) {
    int count = 0;
    struct node* temp = head;

    while(temp != NULL) {
        if(temp->data == key) {
            count++;
        }
        temp = temp->next;
    }

    return count;
}

int main() {
    int n, key;

    scanf("%d", &n);
    struct node* head = createList(n);

    scanf("%d", &key);

    int result = countOccurrences(head, key);

    printf("%d", result);

    return 0;
}
