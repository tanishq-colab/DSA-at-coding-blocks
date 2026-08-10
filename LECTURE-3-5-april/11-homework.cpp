
//COUNT SET BITS

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int set=0;
//     for(int i=0;i<32;i++){
//         if((n>>i) & 1)set++;
//     }
//     cout<<set;
//     return 0;
// }
//OPTIMISED

// #include <iostream>
// using namespace std;

//#include<cmath>
// int main(){
//     int n;
//     cin>>n;
//     int set=0;
//     for(int i=0;i<  ceil(log(n+1) );i++){
//         if((n>>i) & 1)set++;
//     }
//     cout<<set;
//     return 0;
// }

//LONGEST RUN OF 1

// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int set=0;
//     int x = INT_MIN;
//     for (int i = 0; i < 32; i++)
//     {
//         if((n>>i) & 1)
//         {
//              set++;
//              x = set;
//         }
//         else set =0;
//     }
//     cout<<x;
//     return 0;
// }

//HAMMING DISTANCE

// #include <iostream>
// using namespace std;

// int main(){
//     int n,m;
//     cin>>n>>m;
// int set = 0;
//     for(int i=0;i<32; i++){

//         if(((n ^ m) >> i) & 1) set++;
        
//         else continue;
//     }
//     cout<<set;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//      int m= n/2;
//      for(int i=1;i<=n;i++){
//         cout<<"*\t";
//      }
//      cout<<endl;
//      for(int i=1 ;i<=m;i++){
//         for(int j=1;j<=m-i+1;j++){
//             cout<<"*\t";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<'\t';
//         }
//         for(int j=1;j<=m-i+1;j++){
//             cout<<"*\t";
//         }
//         cout<<endl;
//      }
//      for(int i=m-1 ;i >= 1; i--){
//         for(int j=1;j<=m-i+1;j++){
//             cout<<"*\t";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<"\t";
//         }
//         for(int j=1;j<=m-i+1;j++){
//             cout<<"*\t";
//         }
//         cout<<endl;
//      }

//      for(int i=1;i<=n;i++){
//         cout<<"*\t";
//      }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1 ;i <= n;i++)
//     {
//         for(int j=1;j<=n-i;j++){
        
//             cout<<" ";
//         }
//         for(int j=1 ;j <=n; j++)
//         {
//             if(i > 1 && i < n && j> 1 && j < n){ 
//                      cout<<" ";
//                     }

//             else cout<<"*";
//         }
    
//         cout<<endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i=1; i <= n; i++){
       
//         for(int j=1; j <= n-i;j++){
//             cout<<"\t";
//         }
//        int z=i;
//         for(int j=1; j <= i ;j++){
//             cout<<z<<"\t";
//             z++;   
//         }

//         z=z-2;
//         for(int j=2 ;j <= i; j++){
//             cout<<z<<'\t';
//             z--;
//         }
//         cout<<endl;
//     }
//     for(int i=n-1; i >= 1; i--){
       
//         for(int j=1; j <= n-i;j++){
//             cout<<"\t";
//         }
//        int z=i;
//         for(int j=1; j <= i ;j++){
//             cout<<z<<"\t";
//             z++;   
//         }

//         z=z-2;
//         for(int j=2 ;j <= i; j++){
//             cout<<z<<'\t';
//             z--;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int mid = n/2+1;
//     for(int i=1;i<=n;i++)
//     { 
//         for(int j=1;j<=n;j++){
            
//               if( i==1 && j>=1 && j>mid && j <=n )cout<<'*';
            
//             else if(i == mid || j==mid ) cout<<'*';
        
//           else if(i<=mid  && j==1 ) cout<<'*';
//             else if(i>mid and i <= n && j==n )cout<<"*";
//             else if(i == n && j>=1 && j<=mid) cout<<'*';
//             else cout<<' ';
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int m=n/2+2;
//     for (int i = 1; i <=2*n-1; i++)
//     {
//         cout<<'*';
//     }
//     cout<<endl;

//     for ( int i = 1; i <2*n-1; i++)
//     {   
//         for (int j = 1; j <= m ; j++)
//         {   
//             cout<<'*';

//             }
           
//         for(int j=1 ; j <=2*i - 1 ;j++){
//             cout<<" ";
//         }
//         for (int j = 1 ; j <= m; j++)
//         {   
//             cout<<'*';

//             }
//         cout<<endl;
    
        
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;

//     for(int i = n; i >= 0; i--)
//     {
//         for(int j = 0; j < n - i; j++){
//             cout << "  ";
//         }

//         for(int j = i; j >= 0; j--){
//             cout << j << " ";
//         }

//         for(int j = 1; j <= i; j++){
//             cout << j << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i = n; i >= 0; i--)
//     {
//         for(int j = 1 ; j <= n - i ; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = i; j >= 0; j--)
//         {   
//             cout<<j<<' ';
        
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<' ';
//         }
        
        
//         cout<<endl;
//     }
//     for(int i = 1; i <= n; i++)
//     {
//         for(int j = 1 ; j <= n - i ; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = i; j >= 0; j--)
//         {   
//             cout<<j<<' ';
        
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<' ';
//         }
        
        
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int m =n/2;
//     for (int i = 1; i <=2*n-1; i++)
//     {
//     cout<<'*';
//     }    cout<<endl;
    
//     for(int i=1; i <= n-1;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<'*';
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<' ';
//         }
//         for(int j=1;j<=n-i;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }
    
//     for(int i=2; i <=n-1 ;i++){

//         for(int j=1;j<=i;j++){
//             cout<<'*';
//         }
//          for(int j=1;j<=2*(n-i)-1;j++){
//              cout<<' ';
//          }
//         for(int j=1;j<=i;j++){
//             cout<<'*';
//         }
//         cout<<endl;
//     }

//     for(int i=1;i<=2*n-1;i++){
//         cout<<'*';
//     }
//     return 0;
// }




// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i = n; i >= 0; i--){
//         int x = n;

//         int d=i;

//         for(int j=0;j<n-i+1;j++)
//         {
//             cout<<x<<" ";
//         x--;    
//         }
//         for (int j =2 ; j <=2*i+1; j++)
//         {
//             cout<<"  ";
//         }
        
//         for(int j=n-i+1; j >= 1;j--){
//             cout<<d<<" ";
//         d++;    
//         }
        
//         cout<<endl;
//     }
//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main(){
    
//     int n;
//     cin>>n;
//     for(int i= n; i>=1 ;i--){
//       int x=n;
//       int d=i;
//         for(int j=1 ;j <=n-i+1;j++){
//             cout<<x<<' ';
//             x--;
//         }
//         for(int j=1; j<=2*i-1 ;j++){
//             cout<<"  ";
//         }
        
//         for(int j=n-i+1;j >= 1;j--){
//             cout<<d<<' ';
//             d++;
//         }
//         cout<<endl;
//     }
    
//     for(int i = n; i >= 0; i--){
//         cout << i<<' ' ;
//     }
    
//     // increasing
//     for(int i = 1; i <= n; i++){
//         cout << i <<' ';
//     }
// cout<<endl;
//     for(int i= 1; i<=n ;i++){
//         int x=n;
//         int d=i;
//           for(int j=1 ;j <=n-i+1;j++){
//               cout<<x<<' ';
//               x--;
//           }
//           for(int j=1; j<=2*i-1 ;j++){
//               cout<<"  ";
//           }
          
//           for(int j=n-i+1;j >= 1;j--){
//               cout<<d<<' ';
//               d++;
//           }
//           cout<<endl;
//       }
//     return 0;
// }
#include <iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int n = m/2 + 1;
    cout<<endl;
    for(int i=1;i<=n;i++){
      
        for(int j=1; j<=2*(n-i) ;j++){
            cout<<"  ";
        }
        
        for(int j=i;j >= 1;j--)
        {
            cout<<j<<' ';
        }
     
        for (int j = 2; j <2*i-1 ; j++)
        {
            cout<<"  ";
        }
    
        for(int j = 1;j <= i ;j++)
        { if(i==1) continue;
            cout<<j<<' ';
           
        }
    
        cout<<endl;
    }
    for(int i=n-1; i>=1 ;i--){
      
        for(int j=1; j<=2*(n-i) ;j++){
            cout<<"  ";
        }
        
        for(int j=i;j >= 1;j--)
        {
            cout<<j<<' ';
        }
     
        for (int j = 2; j <2*i-1 ; j++)
        {
            cout<<"  ";
        }
    
        for(int j = 1;j <= i ;j++)
        { if(i==1) continue;
            cout<<j<<' ';
           
        }
    
        cout<<endl;
    }
    return 0;
}