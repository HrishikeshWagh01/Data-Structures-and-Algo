#include<iostream>
using namespace std;

void insertion(int arr[], int n){

    int x;
    for(int i=1;i<n-1;i++){
        int j = i-1;
        x = arr[i];
        while(j>=0 && arr[j]>x){
           arr[j+1] = arr[j];
           j--;
        }
        arr[j+1] = x;
    }
}
