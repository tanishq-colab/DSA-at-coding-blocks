#include <iostream>
using namespace std;

int main(){
    int n=42;
    int k =3;
    cout<<((1<<k)^n)<<endl;
    cout<<((1<<4)^n)<<endl;
    return 0;
}