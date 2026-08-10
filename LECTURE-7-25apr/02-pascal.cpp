// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int df=1;
//     n=n/2+1;
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1; j <= n-i;j++){
//             cout<<' ';
//         }
//         for(int j=1 ; j<=2*i-1 ;j++){
//             cout<<df<<' ';
//             df *= 11; 
//             cout<<endl;
//         }
//         cout<<endl;
//     }

//     return 0;
// }


#include <iostream>
using namespace std;
#include<cmath>

bool isprime(int &x)
{
    for(int i=2; i<=sqrt(x); i++){

        if(x % i == 0)return false;

    }  
    return true;
}

void print(int &n){
    for(int i =2; i< n;i++)
    {
        if(isprime(i)) cout<<i<<' ';
    }
    
}
int main()
{
    int n;
    cin>>n;
    print(n);

    return 0;
}