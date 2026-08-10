#include <iostream>
#include<cmath>
using namespace std;
bool isprime(int &x)
{
    for(int i=2;i <= sqrt(x);i++)
    
    // ORR WHERE(I*I<=x)
    {
     if(x % i == 0) return false;
    }
    return true;
}

void printprimes(int m){
    for(int n = 2; n <= m ;n++)
    {
        if(isprime(n))
        {
            cout<<n<<' ';
        }

    }
}
int main(){
    int n;
    cin>>n;
    printprimes(n);
    return 0;
}
//IMPORTANTTT REVISE.