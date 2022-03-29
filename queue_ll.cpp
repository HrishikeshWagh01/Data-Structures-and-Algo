#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node* next;
}*front = NULL, *rear = NULL;

void enqueue(int new_data){

    Node* new_node = new(Node);
    new_node->data = new_data;

    if(front == NULL){
        rear = front = new_node;
    }
    else{

        rear->next = new_node;
        new_node->next = NULL;
        rear = new_node;
    }
}

int dequeue(){
    
    int x = -1;
    if(front == NULL){
        cout << "Queue is Empty" << endl;
    }
    else{

        Node* ptr = front;
        front = front->next;
        x = ptr->data;
        free(ptr);
    }
    return x;
}

int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(50);
    enqueue(60);

    cout << dequeue() << endl;
}
