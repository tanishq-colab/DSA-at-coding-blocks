#include <iostream>
using namespace std;
void myswap(int &x,int &y){
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"a before "<<a<<endl;
    cout<<"b before "<<b<<endl;
    myswap(a,b);
    cout<<"a after = "<<a<<endl;
    cout<<"b after = "<<b<<endl;
    return 0;
}