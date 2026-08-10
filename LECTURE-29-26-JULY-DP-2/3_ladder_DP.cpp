#include <iostream>
using namespace std;
#include <vector>

int ladder(int n,int k){
    if(n == 0) return 1;
    
    if(n < 0) return 0;

    int ans=0;
    
    for(int i = 1 ; i <=k ; i++)
    {
    if(n - i >=0)
    {
        ans += ladder(n-i,k);
    }
    }
   return ans;
}

int ladder_DP(int n, int k , vector<int> &dp){
    if(dp[n] != -1)
    {
        return dp[n];
    }
    
    if(n == 0) return dp[n] = 1;
    
    int ans = 0;
    
    for(int i = 1; i <= k; i++){
    
        if(n-i >= 0){
    
            ans += ladder_DP(n-i,k,dp);
    
        }
    }
return dp[n] = ans;
}

int main(){
    int n,k;
    
    cin>>n>>k;
  vector<int> dp(n+1,-1);
    cout<<  ladder_DP(n,k,dp)<<endl;
  
    return 0;
}
