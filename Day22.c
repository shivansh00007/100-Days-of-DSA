#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    int n, i, count = 0;
    struct node *head = NULL;
    struct node *newnode = NULL;
    struct node *temp = NULL;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d", &newnode->data);
        newnode->next = NULL;

        if(head == NULL) {
            head = newnode;
            temp = head;
        } else {
            temp->next = newnode;
            temp = newnode;
        }
    }

   
    temp = head;
    while(temp != NULL) {
        printf("%d ", temp->data); 
        count++;                   
        temp = temp->next;         
    }

    printf(",no%d\n", count);

    return 0;
}