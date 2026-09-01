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

// #include <iostream>
// using namespace std;
// #include <vector>

// void f(string ip,int i){

  
//     if(ip[i] == '\0'){
//         cout<<ip<<' ';
//         return;
//     }

//     if(ip[i] == '?'){
//         ip[i] = '0';
//         f(ip,i+1);
//         ip[i] = '1';
//         f(ip,i+1);
//     }
//   else f(ip,i+1);
  
// }

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//     string s;
//     cin>>s;
// 	 f(s,0);
// 	 }
   
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>

// class listnode{
//     public:
//     int val;
//     listnode* next;
//     listnode(int val){
//         this->val=val;
//         this->next = NULL;
//     }
// };
// int cnt=0;
// void insert(listnode* &head,int val){
//     listnode* n = new listnode(val);
    
//     n->next = head;
//     head = n;
// }

// void del(listnode*& head){
//     listnode* temp = head;
//     head = head->next;
//     delete temp;
// }

// void p(listnode* head){

// while(head!= NULL){
//     cout<< head->val<<' ';
//     head = head->next;
//     cnt++;
// }}
// int len(listnode* head){
//     if(head == NULL){return 0;}
//     return 1 + len(head->next);
// }

// void reve(listnode*& head){
//     listnode* prev = NULL;
//      listnode *curr = head;
//      while(curr != NULL){
//         listnode* temp = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = temp;
//      }
//      head = prev;
// }
// listnode* getta(listnode*head){
//     while(head->next != NULL){
//         head = head-> next;
//     }
//     return head;
// }

// void tail(listnode* head,int value){
//    listnode* n = new listnode(value);
//    listnode *tail = getta(head);
//    tail->next = n;
// }

// void delele(listnode* head){
//     listnode*prev = NULL;
//     listnode* curr= head;
//     while(curr-> next != NULL){
//         prev = curr;
//         curr = curr->next;
//     }
//     prev->next= NULL;
//     delete curr;
// }

// int main(){

//    listnode* head = NULL;

//     insert(head,50);
//     insert(head,40);
//     insert(head,30);
//     insert(head,20);
//     insert(head,10);
//     p(head);
//     cout<<endl;
//     // reve(head);
//     tail(head,60);
//     p(head);
// cout<<endl;
//     delele(head);
//     p(head);
//     return 0;
// }




// // you are given a string S and an integer K you have to fing longest substring
// // such that it has atmost k distinct letters and have an odd frequency

// #include <iostream>
// #include <string>
// using namespace std;


// int countAscii(string str, int i) {
//     // Base case
//     if (i == str.length()) {
//         return 1;
//     }

    
//     return countAscii(str, i + 1) + countAscii(str, i + 1)  + countAscii(str, i + 1);
// }

// void printAscii(string str, int i, string ans) {
//     // Base case
//     if (i == str.length()) {
//         cout << ans << " ";
//         return;
//     }

//     printAscii(str, i + 1, ans);


//     printAscii(str, i + 1, ans + str[i]);

//     printAscii(str, i + 1, ans + to_string((int)str[i]));
// }

// int main() {
//     string str;
//     cin >> str;

//     printAscii(str, 0, "");
//     cout << endl;

//     cout << countAscii(str, 0) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>
// #include<stack>

// int main(){
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.push(40);
//     cout << "size : " << s.size() << endl;
// 	cout << "top : " << s.top() << endl;

//     s.pop();
//     cout << "size : " << s.size() << endl;
// 	cout << "top : " << s.top() << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>
// #include<stack>

// bool fun(string r,stack<char> s){

//     for(char &x : r){
//         if(x == '(' ||x == '{' ||x == '['  ){
//             s.push(x);
//         }
//       else if( x == ')' &&!s.empty()  && s.top() == '(') 
//          {
//             s.pop();
//          }
         
//      else if( x == '}' &&!s.empty() && s.top() == '{') 
//          {
//             s.pop() ;
            
//         }
//      else if ( x == ']' && !s.empty() && s.top() == '[') {
//             s.pop();
//         }
//         else {
//             return false;
//         }
//     }
//     return s.empty();


// }

// int main(){
//     string r = "(((";
//     stack<char> s;

//     fun(r,s) ? cout<<"true" : cout<<"false";
//         return 0;
// }
#include<algorithm> 
#include <iostream>
using namespace std;
#include <vector>
#include<stack>

vector<int> ans(vector<int>& v){
    stack<int> s;
    int n = v.size();
    vector<int> aa;
    for(int i = n-1 ; i>=0;i--){
        while(!s.empty() and v[s.top()] >=v[i]){
            s.pop();
        }
        if(s.empty()){
            aa.push_back(n);
        }
        else {
            aa.push_back(s.top());
        }
s.push(i);
    }
    reverse(aa.begin(),aa.end());
    return aa;
}

int main(){

    vector<int> v = {2, 5, 1, 3, 6, 4, 0};
  vector<int> p =  ans(v);
  for(int i = 0; i < p.size() ;i++){
    cout<<p[i] << ' ';
  }
    return 0;
}