#include <iostream>
using namespace std;
#include<bits/stdc++.h>
void subarray(vector<int> v,int n){
//N CUBE COMPLEXITY
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k = i; k <=j;k++){
                cout<<v[k]<<' ';
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
int main(){
    vector<int> v = {10,20,30,40,50};
    int n = v.size();
    subarray(v,n);

    return 0;
}