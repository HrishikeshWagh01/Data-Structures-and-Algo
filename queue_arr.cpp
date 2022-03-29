#include<iostream>
using namespace std;

class queue{

    private:
        int rear = -1;
        int front = -1;
        int a[5];
        int n = 5;

    public:
        void enqueue(int x){

            if(rear == n-1){
                cout << "Queue Full" << endl;
            }
            else{

                rear++;
                a[rear] = x;
            }
        }

        int dequeue(){

            int y = -1;
            if(front == rear){
                cout << "Queue is Empty" << endl;
            }
            else{

                front++;
                y = a[front];
                a[front] = 0;
            }

          return y;  
        }

        void print_queue(){

            for(int i = front; i<=rear; i++){
                cout << a[i] << endl;
            }
        }
};    
int main(){

    queue q1; 
    q1.enqueue(10);
    q1.enqueue(20);
    q1.enqueue(30);
    q1.enqueue(40);
    q1.enqueue(50);
    q1.enqueue(60);
    
    q1.print_queue();
    cout << "DEQUEUE VALUE : "<<q1.dequeue()<< endl;

    q1.print_queue();
}

