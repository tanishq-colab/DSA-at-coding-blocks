#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int subarraysum(vector<int> v,int n)
{
    int s = INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int sum =0;
            for(int k=i;k<=j;k++)
            {
                    sum += v[k];
                    s = max(s,sum);
            }
        }
    }
    return s;
}
int main(){
    vector<int> v = {1,2,3,4,5,6};
    int n = v.size();
   cout<< subarraysum(v,n);
    return 0;
}
