#include <iostream>
using namespace std;
#include<cmath>
bool isprime(int &x){
    for(int i=2;i <= sqrt(x);i++)
    
    // ORR WHERE(I*I<=x)
    
    {
     if(x%i == 0) return false;
     
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int ans = isprime(n);

   ans ? cout<<"prime" : cout<<"not prime";
    return 0;
}