#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    vector<int> v = {1,2,3,4};

    sort(v.rbegin(),v.rend());
            OR
    sort(v.begin(),v.end(),greater<int>());
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<' ';
    }
    


    return 0;
}