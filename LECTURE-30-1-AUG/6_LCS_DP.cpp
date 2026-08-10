#include <iostream>
using namespace std;
#include <vector>

time o(mn)
space o(mn) due to dp[][]


string s("ATGC");
    string s2("AGCT");
    int m = s.size();
    int n = s.size();
    
    vector<vector<int>>dp(m+1,vector<int>(n+1,0));

int f(int i ,int j){
    
    for(int i = m -1 ; i >= 0; i--){
        for(int j = n - 1; j >= 0;j--){
            if(s[i] == s2[j]){
                dp[i][j] = 1 + dp[i+1][j+1];
            }
            else {
                dp[i][j] = max(dp[i][j+1] , dp[i+1][j]);
            }
        }
    }
    return dp[0][0];

}

int main(){
    
    cout<<f(0,0);
    return 0;
}