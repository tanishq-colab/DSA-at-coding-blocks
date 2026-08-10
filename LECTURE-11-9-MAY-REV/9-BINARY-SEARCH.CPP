#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int binarysearch(vector<int>& a,int n,int t){
    int s= 0;
    int e = n-1;
    
    while(s<=e){
    int mid  =(s+e)/2;

    if( a[mid]==t ){
        return mid;
    }
    else if(t < a[mid]){
        e = mid - 1;
    }
    else {
        s = mid + 1;
    }
}
    return -1;
}
int main(){
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    int t = 5;
    cout<<binarysearch(v,n,t);
    return 0;
}