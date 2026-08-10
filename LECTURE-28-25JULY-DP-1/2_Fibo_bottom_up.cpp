#include <iostream>
using namespace std;
#include <vector>

int cnt=0;

int f(int n, vector<int> &dp){
          
    dp[0] = 0;
    dp[1] = 1;

    for(int i = 2; i <= n; i++){
        dp[i] = dp[i-1] + dp [i-2];
    }
    cnt++;  
    return dp[n];
}

int main(){
 
    int n = 20;
    vector<int> dp(n+1 , -1);
    cout<<f(n,dp)<<endl<<cnt;
    return 0;
}