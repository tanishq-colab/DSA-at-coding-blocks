#include <iostream>
using namespace std;
int c;
int multi(int a,int b){
    c = a * b;
    return c;
}

int main(){
    int ref = multi(2,3);
    cout<<c<<" "<<ref<<endl;
    ref++;
    cout<<c<<" "<<ref<<endl;
    return 0;
}