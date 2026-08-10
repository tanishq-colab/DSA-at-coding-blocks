#include <iostream>
using namespace std;
#include <vector>
#include<cstring>
//TIME O(2^n)
//SPACE O(N);

int dp[100][100];

int ftop(int n,int*a,int i,int j ,int y){
    //LOOKUP
    if(dp[i][j]!= -1){
        return dp[i][j];
    }
    
    y = n - j + i;

    if( i == j){
        return dp[i][j] = y * a[i];
    }
 return dp[i][j]= max(a[i]*y + ftop(n,a,i+1,j,n-j+i) , a[j] *y+ ftop(n,a,i,j-1,n-j+i));
}


int main(){
    int n = 5;
    int a[] = {2,3,5,1,4};
    int sum = 0;
    memset(dp,-1,sizeof(dp));
    cout<<ftop(n,a,0,n-1,1);

   
    return 0;
}