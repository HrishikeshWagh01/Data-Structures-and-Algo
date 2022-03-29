#include<iostream>
using namespace std;

class Queue{
 
 public:
    int size;
    int rear;
    int front;
    int *Q;
};
void create(Queue* q, int size){

    q->rear = 0;
    q->front = 0;
    q->size = size;
    q->Q = new int[size];
}
void enqueue(Queue* q, int val){

    if((q->rear+1)%q->size == q->front){
        cout << "Queue is FUll" << endl;
    }
    else{

        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = val;
    }
}
int dequeue(Queue * q){
    
    int x = -1;
    if(q->rear == q->front){
        cout << "Queue is Empty" << endl;
    }
    else{
        
        q->front = (q->front+1)%q->size;
        x = q->front;
        q->front = 0;
    }
    return x;
}
void display(Queue q){

    for(int i = q.front+1; i<=q.rear; i++){
        cout << q.Q[i] << endl;
    }
}
int main(){

    Queue q1;
    create(&q1,6);
    enqueue(&q1,10);
    enqueue(&q1,20);
    enqueue(&q1,30);
    enqueue(&q1,40);
    enqueue(&q1,50);

    display(q1);
}