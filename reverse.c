#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* reverse(struct node*head){
    struct node*prev=NULL;
    struct node*curr=head;
    struct node*next=NULL;

    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void printList(struct node*head){
    struct node*temp=head;
    while(temp!=NULL){
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}
int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->data =6;
    head->next=(struct node*)malloc(sizeof(struct node));
    head->next->data=12;
    head->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->next->data=18;
    head->next->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->next->next->data=24;
    head->next->next->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->next->next->next->data=30;
    head->next->next->next->next->next=(struct node*)malloc(sizeof(struct node));
    head->next->next->next->next->next->data=36;
    head->next->next->next->next->next->next=NULL;
    
    printf("Original list: ");
    printList(head);
    head=reverse(head);
    printf("Reversed list: ");  
    printList(head);
    return 0;
    }