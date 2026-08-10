#include <iostream>
using namespace std;
#include<climits>
int main(){
    int a[1000000];
    int n;
    int maxi = INT_MIN;
    cin>>n;
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i] > maxi){
            maxi = a[i];
        }
    }
    int u = 0;
    int z=0;
    for (int i = 0; i < n; i++)
    {  

                   z = maxi - a[i];
            u = u +  z;

    }
    cout<<u;


    return 0;
}