#include <iostream>
using namespace std;
#include <vector>

int ladder(int n,int k){

    vector<int>dp(n+1);
    dp[0] = 1;
    for(int i =1 ;i<=n;i++){
int cnt = 0;
for(int j = 0 ; j <= k; j++){
        if(i-j>= 0 ){
            cnt += dp[i-j]; 
        }
    }
    dp[i] = cnt;
    }
return dp[n];
}

int main(){
    int n,k;
    cin>>n>>k;
    
    cout<<ladder(n,k);

    return 0;
}