// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int ans=0;
//     while(ans * ans<=n){
//         ans++;
//     }
//     ans--;
//     cout<<ans;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     double ans=0;
//     double inc=0;
//     while(ans*ans<=n){
//         ans++;
//     }
//     //cout<<--ans;
//     while(ans*ans<=n){
//         ans+=0.1;
//     }
//     ans-=0.1;
//     while(ans*ans<=n){
//         ans+=0.01;
//     }
//     ans-=0.01;
//     cout<<ans;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    double a =0;
    double z=1;
    double inc = 0.1;
    while(z<=3){
    while(a*a <= n){
        a = a + inc;
       } 
       a = a -inc;
       inc/=10;
       z++;
}

cout<<a;
    return 0;
}