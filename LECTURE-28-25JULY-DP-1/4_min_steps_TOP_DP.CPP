#include <iostream>
using namespace std;
#include <vector>
#include<bits/stdc++.h>

int ftopdown(int n,vector<int> &dp){
    if(dp[n] != -1){
        return dp[n];
    }
    if(n == 1) return dp[n] = 0;
    
    int op1 = ftopdown(n-1,dp);

    int op2 = INT_MAX;
    if(n % 2 == 0){
        op2 = ftopdown(n/2,dp);
    }
    
    int op3 = INT_MAX;
    
    if(n%3 == 0){
        op3 = ftopdown(n/3,dp);
    }
    return dp[n] = 1 + min({op1, op2, op3});
}

int main(){
    int n = 10;
    vector<int> dp(n+1,-1);
cout<<ftopdown(n,dp);
    return 0;
}