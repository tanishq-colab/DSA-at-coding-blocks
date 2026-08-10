#include <iostream>
using namespace std;

int main(){
    bool flag = false;
    int arr[100];
    int n;
    cout<<"enter no of values ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int t;
    cout<<"enter target";
    cin>>t;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == t ){
            cout<<"found at "<<i;
            flag = true;
            break;
        }
    }
    if (flag);
    else cout<<-1;
    OR
    if(i==n){
        cout<<-1;
    }
    
    return 0;
}