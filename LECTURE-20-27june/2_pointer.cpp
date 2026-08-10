#include <iostream>
using namespace std;
#include <vector>

double* f(){
    double* ptr = new double;
    *ptr= 10;
    return ptr;
}

int main(){
    double *ptr = f();
    cout<<*ptr;
    return 0;
}