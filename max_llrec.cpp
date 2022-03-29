#include<bits\stdc++.h>
using namespace std;

class node{

    public :
      int data;
      node* next;
};
void push(node** head, int new_data){

    node* new_node = new(node);
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node; 
}
int max_ll(node* head){
    
    int max;
    if(head==NULL){
        return max;
    }
    else{
        max = head->data;
        if(head->next->data > max){
            max = head->next->data;
        }
        return max_ll(head->next);
    }
}
void printList(node* head)
{
    while (head != NULL) {
        cout << head->data << endl;
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main(){

    node* head = new(node);
    head = NULL;
    push(&head,10);
    push(&head,20);
    push(&head,60);
    push(&head,30);
    push(&head,40);

    printList(head);

    int out = max_ll(head);
    cout << "Maximum Element is : " << out << endl;
}
