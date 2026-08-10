#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int f(int n,vector<int>& p,vector<int>& dp){
   
    dp[0] = 0;

    if(n == 0) return dp[n] = 0;
        //decide nect cut
    for(int i = 1 ; i <=n; i++){
        int x = 0;
          for(int j = 1; j <= i; j++){

                x = max(x ,p[j-1]+dp[i-j]);
            }
        dp[i] = x;

    }
    return dp[n];
}

int main(){

    vector<int> p = {1,5,8,9,10,17,17,20};

    int n = p.size();
    vector<int> dp(n+1,-1);
    cout<<f(n,p,dp);
    return 0;
}