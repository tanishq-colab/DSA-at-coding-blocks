#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
        }
        
int s = n-2;
int e = n - 1;

        while(e>0){
            swap(a[s],a[e]);
            s--;
            e--;
        }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';        /* code */
    }
    
    return 0;
}