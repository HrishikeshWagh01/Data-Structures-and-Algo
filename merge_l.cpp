#include<bits/stdc++.h>
using namespace std;

class Node{

    int data;
    Node* next;
};

void push(Node** head, int new_data){

    Node* new_node = new(Node);
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}

void print_ll(Node* head){

    while(head != NULL){
        cout << head->data << endl;
        head = head->next;
    }
}

void merge_ll(Node*p,Node*q){

    if
}

int main(){

    Node* p = new(Node);
    p = NULL;

    push(*p,1);
    push(*p,2);
    push(*p,3);
    push(*p,4);

    Node* q = new(Node);
    q = NULL;

    push(*q,5);
    push(*q,6);
    push(*q,7);
    push(*q,8);


}