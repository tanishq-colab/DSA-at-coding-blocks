#include <iostream>
using namespace std;
#include <vector>

int fibo(int n,int cnt){
    cnt++;
    if(n==0||n==1) return n;
    return fibo(n-1,cnt)+fibo(n-2,cnt);
}

int fdp(int n, vector<int> &dp,int cnt2){
    cnt2++;
    if(dp[n] != -1){
        return dp[n];
    }
    if(n == 0|| n == 1){
        return dp[n] = n;
    }
    return dp[n] = fdp(n-1,dp,cnt2) + fdp(n-2,dp,cnt2);
}
int cnt4=0;
int bdp(int n, vector<int> &dp){
    cnt4++;
dp[0] = 0;
dp[1] = 1;
for(int i = 2; i <= n; i++){
dp[i] = dp[i-1] + dp [i-2];
}
return dp[n];
}

int main(){
    int n = 20;
    int cnt = 0;
    int cnt2=0;
    cout<<fibo(n,cnt)<<endl;

    vector<int> dp(n+1,-1);
    cout<<fdp(n,dp,cnt2)<<endl;
cout<<bdp(n,dp)<<endl;
cout<<cnt4;


    
    return 0;
}