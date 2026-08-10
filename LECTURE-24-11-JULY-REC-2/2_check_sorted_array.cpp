#include <iostream>
using namespace std;
#include <vector>

bool f(int arr[],int n,int i){
    if(i == n-1){
        return true;
    }
    return arr[i] < arr[i+1] && f(arr,n,i+1);
}

int main(){
    int a[] = { 1,2,3,4};
    int n = sizeof(a)/sizeof(int);
    if(f(a,n,0)) cout<<"sorted";
    else cout<<"not"; 
    return 0;
}