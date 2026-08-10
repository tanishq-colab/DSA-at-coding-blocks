
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

#include <iostream>
using namespace std;

#include<cmath>
int main(){
    int n;
    cin>>n;
    int set=0;
    for(int i=0;i<  ceil(log2(n+1) );i++){
        if((n>>i) & 1)set++;
    }
    cout<<set;
    return 0;
}

// another
// BEST WAY  REVISE
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int count = 0;

//     while(n!=0)
//     {
//     count ++;

//     n = n & (n-1);
// }
// cout<<count;
    
//     return 0;
// }

