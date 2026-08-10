#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int f(int n,vector<int>& p,vector<int>& dp){
    if(dp[n] != -1){
        return dp[n];
    } 

    if(n == 0) return dp[n] = 0;
int x = 0;

        //decide nect cut


for(int i = 1 ; i <=n; i++){

      x = max(x,p[i-1] + f(n-i, p,dp));

    }
    return dp[n] = x;
}

int main(){

    vector<int> p = {1,5,8,9,10,17,17,20};

    int n = p.size();
    vector<int> dp(n+1,-1);
    cout<<f(n,p,dp);
    return 0;
}