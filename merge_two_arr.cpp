#include<bits\stdc++.h>
using namespace std;

int main(){

    int a[] = {1,2,3,4,5};
    int b[] = {4,5,6,7,8};

    int as = 5;
    int bs = 5;
    
    int cs = as + bs;
    int c[cs];

    for(int i = 0; i < as; i++){
        c[i] = a[i];
    }
    for(int j = as, i =0; j < cs && i< bs; j++, i++){
        c[j] = b[i];
    }

    for(int k = 0; k<cs; k++){

        cout << c[k] << endl;
    }
}