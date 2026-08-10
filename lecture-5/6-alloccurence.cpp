#include <iostream>
using namespace std;

int main(){
    int a[100];
    int n;
    bool flag = false;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int t;
    cout<<"target ";
    cin>>t;
    
    for (int i = 0; i < n; i++)
    {    
        if(a[i] == t)
        {
            cout<<i<<' ';
            flag = true;
        }
    }

    if(flag == false) cout<<-1;
    
    
    return 0;
}