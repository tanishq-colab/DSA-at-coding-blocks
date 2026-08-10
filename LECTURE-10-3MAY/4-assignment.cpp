// // #include <iostream>
// // #include<algorithm>
// // using namespace std;

// // int main(){
// //     int a[15000];
// //     int n;
// //     cin>>n;

// //     int z;
// //     if(n>0)z = 1;
// //     else z=0;
// //     for(int i = 0; i < n; i++)
// //     {
// //         cin>>a[i];
// //     }
// //     sort(a,a+n);

// //     int j = 0;
// //     for(int i = 1 ;i < n; i++)
// //     {
// //         if(a[i] != a[j]){
// //             j++;
// //             z++;
// //             a[j] = a[i];
           
// //         }   
// //     }
// //     cout<<z;
// //     cout<<endl;
    
// //     for (int i = 0; i <= j; i++)
// //     {   

// //         cout<<a[i]<<' ';
// //     }
    
      
    
// //     return 0;
// // }

// // #include <iostream>
// // using namespace std;
// // #include<algorithm>
// // int main(){
// //     int a[100000];
// //     int b[100000];
    
// //     int n;
// //     cin>>n;
// //     for(int i = 0; i < n; i++)
// //     {
// //         cin>>a[i];
// //     }
// //     for(int i = 0; i < n; i++)
// //     {
// //         cin>>b[i];
// //     }
// // sort(a,a+n);
// // sort(b,b+n);
// // int i=0,j=0;
// // cout<<'[';
// //    while(i < n && j < n){
// //     if(a[i] == b[j]){
// //         cout<<a[i];
// //         i++;
// //         j++;
// //         cout<<", ";
// //     }
// //     else if(a[i] < b[j]){
// //         i++;
// //     }
// //     else{
// //         j++;
// //     }
    
// //    }
// //     cout<<']';
// //     return 0;
// // }


// #include <iostream>
// using namespace std;
// #include<vector>
// int main(){
//     vector <int> v;
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     // for(int i=0; i < v.size() ;i++){
//     //     cout<<v[i]<<' ';
//     // }
//     // cout<<endl;
//     v.push_back(10);
//     v.push_back(20);
//     v.push_back(30);
//     v.push_back(40);
//      v.push_back(50);
//     for(auto x : v){
//         cout<<x<<' ';
//     }
    
//     cout<<endl;
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
//     return 0;
// }


// int main(){
//     vector <int> v(5);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<' ';
//     } 
//     cout<<'\n';
//     int n = v.size();
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;
    
//     //vector <int> v2 = v;
//     vector<int> v2(v);
//     for(int &y : v2){
//         cout<<y<<' ';
//     }
//     cout<<'\n';
//     cout<<v.size()<<endl;
//     cout<<v.capacity()<<endl;

//     vector<int> v4 = {1,2,3,4,5};
//     vector<int> v5 (v4.begin()+ 2 , v4.begin()+4);
//     for(int i=0;i<v5.size();i++){
//         cout<<v5[i]<<' ';
//     }
//     cout<<endl;
//     vector<int> v6(v4.begin()+1 , v4.end());
//     cout<<v4.back();
//     cout<<endl;
//     for(int i=0;i<v6.size();i++){
//         cout<<v6[i]<<' ';
//     }
//     return 0;

// #include <iostream>
// using namespace std;
// #include <vector>
// #include<algorithm>
// int main(){
//  vector<int> v = {1,2,3,4,5};
 
//  sort(v.begin(),v.end(),greater<int>());

//  for(int &y:v)
//  {
//     cout<<y<<' ';
//  }

// }

// #include <iostream>
// using namespace std;
// #include <vector>
// int binarysearch(vector<int> v , int n,int t)
// {
//     int s = 0;
//     int e = n - 1;
//     while(s <= e){
//         int mid = (s + e)/ 2;
//         if( v[mid] == t){
//             return mid;
//         }
//         else if(t > v[mid]){
//             s = mid + 1;
//         }
//         else{
//             e = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     vector<int> v={1,3,4,5,6,7,8};
//     int n = v.size();
//     int t = 4;
//     for(int i = 0; i < n ; i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     cout<<binarysearch(v,n,t);
//     return 0;
// }


//#include <iostream>
// using namespace std;
// #include <vector>

// int bin(vector<int> v, int n,int t){
//     int s = 0;
//     int e = n-1;
//     int ans = -1;
//     while(s<=e){
//         int mid = (s+e)/2;
//     if(v[mid] == t){
//         ans = mid;
//         s = mid + 1;
//     }
//     else if(v[mid] < t){
//         s = mid + 1;
//     }
//     else {
//         e = mid - 1 ;
//     }
//     }
//     return ans; 
// }

// int main(){
//     vector<int> c = {10,20,30,30,30,30,40,40,50};
//     int n =c.size();
//     int t = 10;
//    cout<< bin(c,n,t);
   
//     return 0;
// }

// int first(vector<int> a , int n,int t){
//     int s=0;
//     int e = n-1;
//     int ans =-1;
//     while(s<=e){
//         int mid = (s+e)/2;
//         if(a[mid] == t){
//             ans = mid;
//             e = mid- 1;
//         }
//         else if(t>a[mid]){
//             s = mid+1;
//         }
//         else {
//             e = mid -1;
//         }
//     }
//     return ans;
// }

// int last(vector<int> a , int n,int t){
//     int s=0;
//     int e = n-1;
//     int ans =-1;
//     while(s<=e){
//         int mid = (s+e)/2;
//         if(a[mid] == t){
//             ans = mid;
//             s= mid+ 1;
//         }
//         else if(t>a[mid]){
//             s = mid+1;
//         }
//         else {
//             e = mid -1;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int> v =  {10,20,30,30,30,30,40,40,50};
//     int n = v.size();
//     int t = 309;
//     int ss= first(v,n,t);
//     if(ss == -1) 
//     {cout<<0<<endl;
//     }
//     else
//     {
//         cout<<last(v,n,t) - first(v,n,t)+1;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>
// #include<algorithm>
// void inter( vector<int> v1, vector<int>v2,int n){
//     sort(v1.begin(),v1.end());
//     sort(v2.begin(),v2.end());
//     vector<int> v3;
//   //  int x =v2.size();
//     int i = 0;
//     int j = 0;
//     while(i<n && j <n){
//     if(v1[i] == v2[j]){
//         v3.push_back(v1[i]);
//         i++;
//         j++;
//     }
//     else if(v2[j] > v1[i]){
//         i++;
//     }
//     else{
//         j++;
//     }}
//     cout<<'[';
// for (int i = 0; i < v3.size(); i++)
// {
//     cout<<v3[i];
//     (i != v3.size()-1) ? cout<<", ":cout<<"" ;
// }
// cout<<']';
//     }


// int main(){
//     int n;
//     cin>>n;
//     vector<int> v1(n);
//     vector<int>v2(n);
//     for(int i=0;i<n;i++){
//         cin>>v1[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cin>>v2[i];
//     }
//     inter(v1,v2,n);
    
//     return 0;
// }

// void z(vector<int> a , int n)
// {
//     sort(a.begin(), a.end());
//     int i = 0;
//     int j = n-1;
//     while(i<n){
//         if(a[i] != 0){
//             swap(a[i],a[j]);
//             i++;
//             j--;
//         }
//         else if(a[i] == 0){
//             i++;
//         }
//         else{j--;}
//     }
//     for(int i = 0; i < n ; i++){
//         cout<<a[i]<<' ';
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     z(a,n);    
//     return 0;
// }

// void tar(vector<int> a,int n,int t){
//     int i=0;
//     int j=n-1;
//    sort(a.begin(),a.end());
//     while(i<=j)
//     {
//         if(a[i] + a[j] == t){
//             cout<<a[i]<<" and "<<a[j]<<endl;
//             i++;
//             j--;
//         }
//         else if(t > a[i] + a[j]){
//             i++;
//         }
//         else {
//             j--;
//         }
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0;i < n;i++){
//         cin>>a[i];
//     }
//     int t;
//     cin>>t;
//     tar(a,n,t);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include <vector>

// sum(vector<int> v,vector<int> v,int n,int t)
// {
//     int z=0;
//     int i = 0;
//     int j = n-1;
//     while(z<t)
//     {
//         while(i<j){
//             if(v[i]+v[j] == )
//         }


//         z++;
//     }
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int> a(n);
//     for(int i=0;i < n;i++){
//         cin>>a[i];
//     }
//     int t;
//     cin>>t;
//     sum(v,a,n,t);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// #include <vector>
// #include <algorithm>

// int main(){

//     int T;
//     cin >> T;

//     while(T--){

//         int n;
//         cin >> n;

//         vector<int> v(n);

//         for(int i = 0; i < n; i++){
//             cin >> v[i];
//         }

//         int money;
//         cin >> money;

//         sort(v.begin(), v.end());

//         int i = 0;
//         int j = n - 1;

//         int a = 0;
//         int b = 0;

//         while(i < j){

//             int sum = v[i] + v[j];

//             if(sum == money){

//                 a = v[i];
//                 b = v[j];

//                 i++;
//                 j--;
//             }

//             else if(sum < money){
//                 i++;
//             }

//             else{
//                 j--;
//             }
//         }

//         cout << "Deepak should buy roses whose prices are "
//              << a << " and " << b << "." << endl;

//         cout << endl;
//     }

//     return 0;
// }


// int subarray(vector<int> a , int n)
// {
//     int x = INT_MAX;
//     for(int i= 0; i < n ;i++)
//     {
//         for(int j = i ; j <= n-1 ;j++)
//         {   
//             int sum = 0;
//             for (int k = i; k <=j; k++)
//             {
//                 //cout<<a[k]<<' ';
//                 sum += a[k];
//               x = min(sum,x);
//             }
//           //  cout<<endl;
//         }
//        // cout<<endl;
//     }
//     return x;
// }

// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i= 0;i<n;i++)
// {
//     cin>>v[i];
// }    
//     cout<<subarray(v,n);
//     return 0;
// }


// int main(){
//     vector<int> arr = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
// 	int n = arr.size();

// int x = INT_MIN;

//     vector<int> psum(n);
//     psum[0] = arr[0];
//     for(int i=1;i < n ;i++){
//         psum[i] = psum[i-1] + arr[i]; 
//     }

//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             int sum = i == 0 ? psum[j] :  psum[j] - psum[i-1];
//             x = max(sum,x);
//         }

//     }
//     cout<<x<<' ';
//     return 0;

// }


#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> v = {1,2,3,4,5};
    int n = v.size();
    vector<int> psum(n);
     psum[0] = v[0];
    // for(int i=1;i<n;i++)
    // {
    //     psum[i] = psum[i-1] + v[i];
    // } 
    // int x = -100000;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++)
    //     {
    //         psum[-1] = 0;
    //         int sum = psum[j] - psum[i-1];
    //         x = max(sum,x);

    //     }
    // }
    // cout<<x;
    
    for(int i=0;i<n;i++){ psum[-1] = 0;
        psum[i]= psum[i-1] + v[i];
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */cout<<psum[i]<<" ";
    }
    
    return 0;
}