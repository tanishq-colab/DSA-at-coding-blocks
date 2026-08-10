#include <iostream>
using namespace std;

int main(){
    int a[]={10,20,30,40,50,60,70};
    int n = sizeof(a)/sizeof(int);
    int k = 3;
    k = k % n;
    int s=0;
    int e =n-1; 
        
    while(s<e)
        {
            swap(a[s] , a[e]);
            s++;
            e--;
        }
        s=0;
        e=k-1;
    
    while(s<e)
    {
            swap(a[s] , a[e]);
            s++;
            e--;
        }

        s = k;
        e = n - 1;

    while(s<e)
    {
            swap(a[s] , a[e]);
            s++;
            e--;
        }
    
    for (int i =0; i < n ; i++)
    {
        cout<<a[i]<<' ';
    }
    
    return 0;
}

