#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int firstoccurence(vector<int>& a,int n,int t){
    int s= 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
    int mid  =(s+e)/2;

    if( a[mid]==t ){
        ans = mid;
        e = mid -1;
    }
    else if(t < a[mid]){
        e = mid - 1;
    }
    else {
        s = mid + 1;
    }
}
    return ans;
}

int lastoccurence(vector<int>& a,int n,int t){
    int s= 0;
    int e = n-1;
    int ans = -1;
    while(s<=e){
    int mid  =(s+e)/2;

    if( a[mid]==t ){
        ans = mid;
        s = mid + 1;
    }
    else if(t < a[mid]){
        e = mid - 1;
    }
    else {
        s = mid + 1;
    }
}
    return ans;
}
int main(){
    vector<int> v = {1,2,3,3,3,3,4,4,5};
    int n = v.size();
    int t = 4;
    if(firstoccurence == -1){
        cout<<0;
    }
   else{cout<<lastoccurence(v,n,t) -firstoccurence(v,n,t) +1;} // will not work if element not ofund; make chnaegs like if else
    
    return 0;
}