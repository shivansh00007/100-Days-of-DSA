#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createList(int n) {
    struct node *head = NULL, *temp = NULL, *newnode;
    int value;

    for(int i = 0; i < n; i++) {
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

int length(struct node* head) {
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void findIntersection(struct node* h1, struct node* h2) {
    int l1 = length(h1);
    int l2 = length(h2);

    int diff = abs(l1 - l2);

    struct node *p1 = h1;
    struct node *p2 = h2;

    if(l1 > l2) {
        for(int i = 0; i < diff; i++)
            p1 = p1->next;
    } else {
        for(int i = 0; i < diff; i++)
            p2 = p2->next;
    }

    while(p1 != NULL && p2 != NULL) {
        if(p1->data == p2->data) {
            printf("%d", p1->data);
            return;
        }

        p1 = p1->next;
        p2 = p2->next;
    }

    printf("No Intersection");
}

int main() {
    int n, m;

    scanf("%d", &n);
    struct node* list1 = createList(n);

    scanf("%d", &m);
    struct node* list2 = createList(m);

    findIntersection(list1, list2);

    return 0;
}
