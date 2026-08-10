// #include <iostream>
// using namespace std;
// #include<cmath>
// int main(){
//     int a,b;
//     cin>>a>>b;
//     int zz=a,ss=b;
//     int gcd;
//    while(a>0 && b>0){
//      if (a>b) a = a%b;
//      else b = b%a;
//    }
//    if(a==0) gcd = b;
//    else gcd = a;
//    int lcm = zz*ss/gcd;
//    cout<<lcm;
//    return 0;
// }

#include <iostream>
using namespace std;

int main(){
    int n,m,gcd;

    cin>>n>>m;
    
    while(n>0 && m>0)
    {
        if(n>m)n %= m;
        else m %= n;
    
    }

    if(n == 0)gcd = m;
    else gcd = n;
    cout<<gcd;
    return 0;
}