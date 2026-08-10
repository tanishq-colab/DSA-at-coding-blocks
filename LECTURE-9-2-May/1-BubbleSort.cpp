#include <iostream>
using namespace std;

void bubblesort(int a[],int n){
    for (int i = 1; i <= n-1; i++)
    {
        for(int j=0; j < n-i ;j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    
}

int main(){
    // int a[100];
    // int n;
    // cin>>n;
    // for (int i = 0; i < n; i++)

    // {
    //     cin>>a[i];
    // }
    int a[] = {50,40,30,20,10};
    int n = sizeof(a)/sizeof(int);
    
    bubblesort(a,n);
    for (int i = 0; i < n; i++)
    {
        /* code */cout<<a[i]<<' ';
    }
    
    return 0;
}