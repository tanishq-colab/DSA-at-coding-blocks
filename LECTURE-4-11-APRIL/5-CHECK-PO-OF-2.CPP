#include <iostream>
using namespace std;

int main(){
    int n =22;
    (n & (n-1)) == 0 ? cout<<n<<" is a power of two"<<endl : cout<<"not a power of 2";
    return 0;
}
  
or
__builtin_popcount(n)>2 cout<<" not a power of 2";