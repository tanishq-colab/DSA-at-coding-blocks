#include <iostream>
using namespace std;
#include <vector>
#include<bits/stdc++.h>
int f(int n){
    if(n == 1) return 0;
    
    int op1 = f(n-1);

    int op2 = INT_MAX;
    if(n % 2 == 0){
        op2 = f(n/2);
    }
    
    int op3 = INT_MAX;
    
    if(n%3 == 0){
        op3 = f(n/3);
    }
    return 1+ min({op1,op2,op3});
}

int main(){
    int n = 10;
cout<<f(n);
    return 0;
}