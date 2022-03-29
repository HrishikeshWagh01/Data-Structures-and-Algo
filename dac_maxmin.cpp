#include<iostream>
using namespace std;

void max_min(int arr[], int i,int j,int* max, int* min){

        if(i==j){
            *max = arr[i];
            *min = arr[i];
        }
        else if(i == j - 1){
            if(arr[i] < arr[j]){
                *min = arr[i];
                *max = arr[j];
            }
            else{
                *min = arr[j];
                *max = arr[i];
            }
        }
        else{
            
            int max1,min1;
            int mid = (i+j)/2;
            max_min(arr,i,mid,max,min);
            max_min(arr,mid+1,j,&max1,&min1);

            if(*max<max1){
                *max = max1;
            }
            if(*min>min1){
                *min = min1;
            }
        }
}

int main(){

    int a[] = {50,30,90,70,40,100,80};
    int size = sizeof(a)/sizeof(int);
    int max_num,min_num;

    max_min(a,0,size-1,&max_num,&min_num);

    cout << "Maximum number is : " << (max_num) << endl;
    cout << "Minimum number is : " << (min_num) << endl;
}