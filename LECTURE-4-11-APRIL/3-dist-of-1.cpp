// #include <iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int set=0;
//     int x = INT_MIN; /// WE CAN ALSO DO 0
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

#include <iostream>
using namespace std;
#include<bitset>
int main(){
    int n;
    cin>>n;
cout<<bitset<32>(n)<<endl;

    int cnt=0;
    
    int mx=0;
    
    while(n!=0)
    {
    int zero= n & 1;
    
    if(zero == 1){
        cnt++;
        mx = max(mx,cnt);
    }
    else cnt=0;
    n = n >> 1;

}
cout<<cnt;
    return 0;
}