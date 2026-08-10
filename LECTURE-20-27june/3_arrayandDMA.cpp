#include <iostream>
using namespace std;
#include <vector>

int main(){
    int * ptr = new int[5];

    *ptr = 10;
    *(ptr + 1 ) = 20;

   // OR

    ptr[2] = 30;
    ptr[4] = 40;
    delete ptr;
    cout<<*ptr<<'\n';
    cout<<*(ptr+1)<<endl;
    cout<<*(ptr+4);
    return 0;
}