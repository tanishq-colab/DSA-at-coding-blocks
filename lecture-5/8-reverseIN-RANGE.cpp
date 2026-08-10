#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i < n ; i++)
    {
        cin>>a[i];
    }
    cout<<"start ";
    int s;
    cin>>s;
    cout<<"end ";
   int e;
    cin>>e;
    while(s < e){
        swap(a[s],a[e]);
        s++;
        e--;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    
    return 0;
}