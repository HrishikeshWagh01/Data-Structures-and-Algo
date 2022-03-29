#include<iostream>
using namespace std;

class Node{

  public:
    int data;
    Node *next;
    Node *prev;
};
void push(Node **head, int new_data){

    Node* new_node = new(Node);
    new_node->data = new_data;

    new_node->next = *head;
    new_node->prev = NULL;

    if((*head)!=NULL){
        (*head)->prev = new_node;
    }
    *head = new_node;
}
void insert_after(Node* prev_node, int new_data){

    Node* new_node = new(Node);
    new_node->data = new_data;

    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if(new_node->next!=NULL){
        new_node->next->prev = new_node;
    }
}
void insert_atEnd(Node** head, int new_data){

    Node* new_node = new(Node);
    new_node->data = new_data;
    new_node->next = NULL;

    Node* ptr= *head;
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }
    ptr->next = new_node;
    new_node->prev = ptr;
}
void display_ll(Node* head){

    while(head!=NULL){
        cout << head->data << endl;
        head = head->next;
    }
}
int main(){

  Node* head = new(Node);
  head = NULL;
  push(&head,10);
  push(&head,20);
  push(&head,30);
  push(&head,40);
  push(&head,50);

  display_ll(head);
  cout << "\n" << endl;
  insert_after(head->next,35);
  insert_atEnd(&head,5);
  display_ll(head);

}