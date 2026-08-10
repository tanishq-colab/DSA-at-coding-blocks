#include <iostream>
using namespace std;

int main()
{
    int n=8;
    int mask= 0x55555555;
    
    if ((n & n-1) == 0) && ((n & mask) == n) cout<<"power of 4";
    else cout<<"not";
    
    return 0;

}
