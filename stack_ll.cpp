#include<iostream>
using namespace std;

class stack{

    public:
        int data;
        stack* next;
}*top = NULL;

void push(int x){

    stack* new_node = new(stack);
    if(new_node == NULL){
        cout << "Stack Overflow" << endl;
    }
    else{
        new_node->data = x;
        new_node->next = top;
        top = new_node;
    }
}
int pop(){
     
     int x = -1;
     stack* ptr = top;
     if(top == NULL){
         cout << "Stack Underflow" << endl;
     }
     else{
        x = ptr->data;
        top = top->next;
        free(ptr);
     }

     return x;
}
void print_sta(){

    while(top!=NULL){
        cout << top->data << endl;
        top = top->next;
    }
}
int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    cout << "Poped element is : " << pop() << endl;

    print_sta();


}
