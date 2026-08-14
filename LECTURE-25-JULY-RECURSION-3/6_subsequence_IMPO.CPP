// #include <iostream>
// using namespace std;
// #include <vector>
// #define l endl
// #include<iomanip>
// #include<algorithm>

// int good(string str , int n)
// {
//     int z = 0;
//     int maxo = 0;
//     for(int i = 0 ; i < n;i++)
//     {
//         for(int j = i; j < n ; j++){
          
//             string rev = str.substr(i,j-i+1);
//             string temp = rev;
//             reverse(rev.begin(),rev.end());
//             if(temp == rev)
//             {
//                 z++;
//             }
//         }       
// }
// return z;
// }
// int main(){
//     string str = "abaaba"; 
//     int n = str.size();
//   cout<< good(str,n) ;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>

// int dx[] = {1,0,-1,0};
// int dy[] = {0,1,0,-1};


// void pathh(char maze[][10],char path[][10],int m,int n,int i, int j){

//   if(i == m || j == m || i == -1 || j == -1){
//     return;
//   }
//   if(maze[i][j] == 'X'){
//     return;
//   }
//   if(path[i][j] == '1') return;

//   if( i == m-1 && j == n-1){
//     path[i][j] = '1';
//     for(int i = 0 ; i < m ; i++){
//       for(int j = 0 ; j < n ; j++){
//         cout<<path[i][j]<<' ';
//       }
//       cout<<endl;
//     }
//     return;
//   }

//   path[i][j] = '1';
//   // pathh(maze,path,m,n,i+1,j);
//   // pathh(maze, path, m, n , i , j + 1 );
//   // pathh(maze, path , m, n, i-1 , j);
//   // pathh(maze, path, m, n ,i , j-1);
//   for(int ii = 0 ; ii < 4 ;ii++){
//     pathh(maze,path,m,n,i + dx[ii],j + dy[ii]);
//   }

// path[i][j] = '0';

// }

// // // int main(){
  
// // // 	char maze[][10] = {
// // 		"0X00",
// // 		"0X0X", 
// // 		"0000",
// // 		"00X0",
// // 		"XX00"
// // 	};

// // 	char path[][10] = {
// // 		"0000",
// // 		"0000",
// // 		"0000",
// // 		"0000",
// // 		"0000"
// // 	};

// // 	int m = 5;
// // 	int n = 4;

// // 	pathh(maze, path, m, n, 0, 0);
// //     return 0;
// // }

// #include <iostream>
// using namespace std;
// #include <vector>
// #include<algorithm>
// int f(int n, vector<int> &dp){

//   dp[1] = 0;

//   for(int i = 2; i <= n ;i++){

//     int op = dp[i-1];
//     int op2 = 10000;
//     int op3= 10000;
//     if(i % 2 == 0){
//       op2 = dp[i/2];
//     }
//     if(i % 3 == 0){
//       op3 = dp[i/3];
//     }

//     dp[i] = 1 + min(op,min(op2,op3));
//   }
//   return dp[n];
// }

// int main(){
//     int n = 10;
//     vector<int> dp(n+1,-1);
//   cout<<  f(n,dp);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>

// int f(int n, int k, vector<int> dp){
//     dp[0] = 1;
//     dp[1] = dp[0];
//     for(int i = 2 ; i <=n ;i++){
//         dp[i] = 2 * dp[i - 1];
//     }
//     for(int i = k + 1; i<=k ;i++){
//         dp[i] = 2 * dp[i - 1] - dp[i-k-1];
//     }
//     return dp[n];
// }

// int main(){
//     int n,k;
//     cin>>n>>k;
//     vector<int> dp(n+1);
//    cout<< f(n,k,dp);
//     return 0;
// }


#include <iostream>
using namespace std;
#include <vector>
#include<bits/stdc++.h>


void f(string &ip,char op[],int i, int j){

    if(ip[i] == '\0'){
             
        op[j] = '\0';
      cout<<op<<' ';
        
          return;
    }
    f(ip,op,i+1,j);
    op[j] = ip[i];
    
    f(ip,op,i+1,j+1);

    string ss = to_string((int)ip[i]);
    for(int k=0;k<ss.size();k++){
        op[j+k] = ss[k];
    }
    f(ip,op,i+1,j+ss.size());
    
    


}

int main(){
    string str;
    cin>>str;
  
    char op [10];
    f(str,op,0,0);
    
    return 0;
}