#include<bits\stdc++.h>
using namespace std;

class Stack_pg{

    private:
         
         int n = 5;
         int a[5];
         int top = -1;
    public:

        int is_empty(){
   
             if(top == -1){
                 return 1;
            }
            else{
               return -1;
            }
        }
        int is_full(){

            if(top == 5){
                 return 1;
            }
            else{
                return -1;
            }
        }
        void push(int x){

            if(top == 5){
                cout << "Stack Overflow" << endl;
            }
            else{
                
                top = top + 1;
                a[top] = x;
            }
        }
        int pop(){
            if(top == -1){
                cout << "Stack Underflow" << endl;
                return -1;
            }
            else{
                int v = a[top];
                a[top] = 0;
                top--;
                return v; 
            }
        }
        void print_stack(){

            for(int i = 0; i<n; i++){
                cout << a[i] << endl;
            }
        }
};
int main(){

    Stack_pg s1;

    s1.push(5);
    s1.push(6);
    s1.push(7);
    s1.push(8);
    s1.push(9);
    s1.print_stack();

    cout << "Poped value is : " << s1.pop() << endl;

    s1.print_stack();

}    