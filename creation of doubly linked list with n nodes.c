#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node * next;
};

struct Node* createDDL(int n){
    struct Node *head = NULL, *temp = NULL, *new_node = NULL;
    int value;

    if(n <= 0){
        printf("nodes must be greater than 0.\n");
        return NULL;
    }

    scanf("%d",&value);
    head = (struct Node*)malloc(sizeof(struct Node));
    head->data = value;
    head->next = NULL;
    head->prev = NULL;
    temp = head;

    for(int i=2;i<=n;i++){
        new_node = (struct Node*)malloc(sizeof(struct Node));
        printf("enter data for node %d:",i);
        scanf("%d",&value);

        new_node->data = value;
        new_node->prev = temp;
        new_node->next = NULL;

        temp->next = new_node;
        temp = new_node;
    }
    return head;
}
void display(struct Node *head) {
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}