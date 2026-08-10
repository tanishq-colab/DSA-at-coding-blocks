#include <iostream>
using namespace std;
#include <vector>
#include<cstring>
//TIME O(n^2)

//SPACE O(N^2) can be optimised;

int dp[100][100];

int ftop(int n,int*a,int i,int j ,int y){
    //LOOKUP
 vector<vector<int>>dp(n,vector<int>(n));
 for(int i = 0 ; i < n ; i++){
    // int j = i;                                DIAGONALS

    // int y = n;
    // dp[i][j] = p[i] * n;
    dp[i][i] = a[i] * n;

 }

 for(int i = n - 1; i >= 0 ; i--){
    for(int j = i + 1; j < n; j++){
        int y = n - j + i;
        dp[i][j] = max(y * a[i] + dp[i+1][j] , y*a[j] + dp[i][j-1]);
    }
 }

 return dp[0][n-1];
}


int main(){
    int n = 5;
    int a[] = {2,3,5,1,4};
    int sum = 0;
    memset(dp,-1,sizeof(dp));
    cout<<ftop(n,a,0,n-1,1);

   
    return 0;
}