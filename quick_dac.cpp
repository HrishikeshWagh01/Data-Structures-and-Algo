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
void QuickSort(int A[],int l,int h)
{
  int j;

  if(l<h)
  {
    j=partition(A,l,h);
    QuickSort(A,l,j);
    QuickSort(A,j+1,h);
  }
}
int main()
{
 int A[]={5,10};
 int n=2;

 QuickSort(A,0,n);

 for(int i=0;i<n;i++){
 cout << A[i] << endl;
 }

 return 0;
}