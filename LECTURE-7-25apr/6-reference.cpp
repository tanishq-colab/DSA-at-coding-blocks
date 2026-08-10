#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = a;
    b++;
    cout<<a<<' '<<b<<' ';

    int c = 10;
    int &d = c;
    d++;
    cout<<c<<' '<<d<<' ';

    return 0;
}