
HAMMING DISTANCE

#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    cout<<__builtin_popcount(n ^ m);
    return 0;
}




#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
int set = 0;
    for(int i=0;i<32; i++)
    {
       if(((n ^ m) >> i) & 1) set++;
        //else continue;
    }
    cout<<set;
    return 0;
}

