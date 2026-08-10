#include <iostream>
using namespace std;
bool iseven(int n){

    // if(n%2==0){
    //     return true;
    // }
    // return false;
    
    return n%2==0 ? true:false;
}
int main(){
    cout<<iseven(4);
    cout<<iseven(5);
    iseven(4) ? cout<<"even"<<endl : cout<<false<<endl;
    return 0;
}