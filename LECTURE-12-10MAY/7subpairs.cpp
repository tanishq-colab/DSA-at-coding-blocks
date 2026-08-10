#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    vector<int> v = {10,20,30,40,50};
    int n= v.size();
    for(int i=0;i<n-1;i++)
    {
            for(int j= i+1;j<n;j++)
            {
                
                    cout<<'('<<v[i]<<','<<v[j]<<')';
                
            }
            cout<<endl;
    }
    return 0;
}