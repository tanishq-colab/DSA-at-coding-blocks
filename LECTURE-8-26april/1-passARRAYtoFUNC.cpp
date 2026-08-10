#include <iostream>
using namespace std;

int sumof(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<sumof(arr,n)<<endl;
    
    return 0;
}




