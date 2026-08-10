#include <iostream>
using namespace std;
#include <vector>

void toh(int n,char src,char hel,char des)
{
    if( n==0)return;

    toh(n-1,src,des,hel);
    cout<<"move from " <<src<<" to " <<des<<endl;
    toh(n-1,src,des,hel);
}

int main(){
    int n = 3;
    toh(n,'a','b','c');
    return 0;
}