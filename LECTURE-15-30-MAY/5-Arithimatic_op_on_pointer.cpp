#include <iostream>
using namespace std;
#include <vector>

int main(){
    int x = 10;
    int *ptr = &x;

    cout<<ptr<<endl;
    ptr++;
    cout<<ptr;
    
    return 0;
}        