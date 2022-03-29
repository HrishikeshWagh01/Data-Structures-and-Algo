#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
};
void push(Node** head, int n_data){

    Node* new_node = new(Node);
    new_node->data = n_data;
    new_node->next = *head;
    *head = new_node;
}
Node* merge_ll(Node* head1, Node* head2){
    
    Node* ptr = head1;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next=head2;
    return head1;
}
void print_ll(Node* head){
    while(head!=NULL){
        cout<<head->data<< endl;
        head = head->next;
    }
}
int main(){
    Node* head = new(Node);
    head = NULL;
    Node* head1 = new(Node);
    head1 = NULL; 
    Node* head2 = new(Node);
    head2 = NULL;

    push(&head1,10);
    push(&head1,20);
    push(&head1,30);
    push(&head1,40);

    push(&head2,50);
    push(&head2,60);
    push(&head2,70);
    push(&head2,80);

    head = merge_ll(head1,head2);

    print_ll(head);
}