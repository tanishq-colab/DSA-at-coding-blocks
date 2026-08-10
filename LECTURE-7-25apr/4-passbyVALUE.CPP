#include <iostream>
using namespace std;
int mul(int x,int y){
    int c = x*y;
    return c;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b);
    return 0;
}