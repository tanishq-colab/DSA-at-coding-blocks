#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    vector<int> v = {1,2,3,4,5,6};

    int n = v.size();
    
    int maxsofar = INT_MIN;
    
    vector<int> psum(n);
    
    psum[0] = v[0];
    
    for(int i = 1; i < n; i++){
        psum[i] = psum[i-1] + v[i];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum = i == 0 ? psum[j] : psum[j] - psum[i-1];
            
            maxsofar = max(maxsofar,sum);
        }
    }
   cout<<maxsofar;
    return 0;
}