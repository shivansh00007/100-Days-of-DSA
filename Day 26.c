#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
    struct node* prev;
};

// Create doubly linked list
struct node* createList(int n) {
    struct node *head = NULL, *temp = NULL, *newnode;
    int value, i;

    for(i = 0; i < n; i++) {
        scanf("%d", &value);

        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;
        newnode->prev = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        } else {
            temp->next = newnode;
            newnode->prev = temp;   // Important line
            temp = newnode;
        }
    }

    return head;
}

// Traverse forward
void printForward(struct node* head) {
    struct node* temp = head;

    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    int n;

    scanf("%d", &n);
    struct node* head = createList(n);

    printForward(head);

    return 0;
}
