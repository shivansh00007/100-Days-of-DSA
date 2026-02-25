#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    int n, i, value;
    struct node *head = NULL, *temp = NULL, *newnode = NULL;

    // Input number of nodes
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &value);

        // Create new node
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = newnode;
        }
        else {
            temp->next = newnode;
            temp = newnode;
        }
    }

    // Traverse and print
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }

    return 0;
}
