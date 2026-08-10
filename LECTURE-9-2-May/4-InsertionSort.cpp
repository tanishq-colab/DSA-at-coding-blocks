#include <iostream>
using namespace std;

void insertionsort(int a[], int n){
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        //INSERT KEY IN SORTED PART OF ARRAY
        int j = i - 1;

     /*   int j;
        for(int j = i-1; j>=0 && key < a[j] ; j--){
            a[j+1] = a[j];
        }
    */
        while(j>=0 && key < a[j]){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

void insert(int a[] ,int n){
    for(int i=1;i<n;i++){
        int curr = a[i];
        int prev = i-1;
        while(prev >= 0 && a[prev] > curr){
            a[prev+1] = a[prev];
            prev--;
        }
        a[prev+1] = curr ;
    }
}

int main(){
    int a[] = {5,4,1,3,2};
    int n = sizeof(a)/sizeof(int);
    insert(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
        }
    
    return 0;
}

