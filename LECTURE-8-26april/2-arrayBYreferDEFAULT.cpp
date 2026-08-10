#include <iostream>
using namespace std;
void modi(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        arr[i]++;
    }
    
}
int main(){
    int arr[] = {1,3,4,5};
    int n = sizeof(arr)/sizeof(n);
    modi(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<' ';
    }
    
    return 0;
}