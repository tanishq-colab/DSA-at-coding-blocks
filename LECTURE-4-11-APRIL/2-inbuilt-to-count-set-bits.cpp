#include <iostream>
using namespace std;
#define ll long long 
int main(){
    
    int x;
    cin>>x;
    cout<<__builtin_popcount(x)<<endl;;
    ll z = 1e12;
    cout<<__builtin_popcountll(z);
    return 0;
}