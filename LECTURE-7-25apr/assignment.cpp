// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    
//     int i = 1;
//     int odd=0,even=0;
//     while(n > 0){
//         int z = n % 10;
//         if(i%2 == 1){
//             odd += z;
//         }
//         else even += z;
//         n = n/10;
      
//         i++;
//     }
    
//     cout<<odd<<endl;
//     cout<<even<<endl;
//     return 0;
// }


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

// #include <iostream>
// using namespace std;
// #include<cmath>
// int main(){
//     int n;
//     cin>>n;
//     int digit;
//     if(n==0) digit = 1;
//     else digit = (int)(log10(n) + 1);
//     int z = n;
  
    
//     int sum=0;

//    while(n > 0){
//     int re = n % 10;
//     sum = sum + (int)pow(re,digit);
//     n/=10;
//    }
//    cout<<(z == sum ? "true":"false");
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    n = n/2 + 1;
    for(int i=1;i<=n;i++){
      for(int j=1;j <= n-i 1 ;j++){
        cout<<' ';
      }
      for(int j=1;j <= 2*i-1 ;j++){
        cout<<'*';
      }
      cout<<endl;
    }

    return 0;
}