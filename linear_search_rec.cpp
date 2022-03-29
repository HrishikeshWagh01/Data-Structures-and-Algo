#include<bits\stdc++.h>
using namespace std;

int linear_rec(int arr[], int n,int i, int k){

     if(i == n){
         cout << "Element Not Found" << endl;
         return -1;
     }
     else{
         if(arr[i] == k)
           return i;
         
         else
           linear_rec(arr,n,i+1,k);

     }
}

int main(){

    int a[5] = {14,56,23,74,10};
    int size = 5;

    cout <<"Element found at index :" <<  linear_rec(a,size,0,74) << endl;
}