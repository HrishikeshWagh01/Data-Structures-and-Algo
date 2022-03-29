#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
int partition(int A[],int l,int h)
{
   int pivot=A[l];
   int i=l,j=h;

  
   while(i<j){

       i++;
       j = j -1;

      while(A[i]<=pivot){
          i++;
      };
      while(A[j]>pivot){
          j--;
      };

      if(i<j){
          swap(&A[i],&A[j]);
      }
    }

    swap(&A[l],&A[j]);
    return j;
}
void select_dac(int A[],int l,int h,int k)
{
  int low = l;
  int high = h;
  
  while(1){

      int j = partition(A,low,high);

      if(k==j){
          return;
      }
      else if(k<j){
          high = j;
      }
      else{
          low = j+1;
      }
  }
  
}
int main()
{
 int A[]={10,80,50,20,40,30,90,60};
 int n=8;

for(int i = 0;i<n;i++){
   select_dac(A,0,n,i);
}

 for(int i=0;i<n;i++){
 cout << A[i] << endl;
 }

 return 0;
}