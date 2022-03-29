#include<bits\stdc++.h>
using namespace std;

class node{

  public:
    int data;
    node* next;
};
void push(node** head, int new_data){
    
    node* new_node = new(node);
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
void push_atindex(node** head, int new_data, int pre_data){

    node* ptr = *head;
    while(ptr->data != pre_data){
        ptr = ptr->next;
    }
    node* new_node = new(node);
    new_node->data = new_data;
    new_node->next = ptr->next;
    ptr->next = new_node;
}
void append(node** head, int new_data){

    node* ptr = *head;
    while(ptr->next!=NULL){
        ptr=ptr->next;
    }
    node* new_node = new(node);
    new_node ->data = new_data;
    new_node->next = NULL;
    ptr->next = new_node;
}
void print_ll(node* head){

    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
int main(){

    node* head = new(node);
    head = NULL;
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    push(&head,50);
    
    print_ll(head);
    cout << endl ;
    
    push_atindex(&head,45,40);
    append(&head,5);
    push(&head,2);

    print_ll(head);
}