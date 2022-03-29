#include<iostream>
using namespace std;

void swap(int* x, int* y){
    int  temp = *x;
    *x = *y;
    *y = temp;
}

int max_num(int arr[], int i){
    
    if(i==0){
        return arr[i];
    }
    else{

        if(arr[i]>arr[i-1]){
            swap(&arr[i],&arr[i-1]);
        }
       return max_num(arr,i-1);
    }
}
int main(){

    int a[] = {50,20,90,40,70};
    int size = sizeof(a)/sizeof(int);
    cout << "Maximum number is : " << max_num(a,size-1) << endl;
}