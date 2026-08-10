#include <iostream>
using namespace std;

int main(){
    int n = 42;
    
    int s =1;
    s = (1<<4);

    cout<<(n | s);
    return 0;
}