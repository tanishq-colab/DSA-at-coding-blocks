#include <iostream>
using namespace std;

template <typename T>

T max1(T a, T b){
    return (a < b) ? b : a;
}

int main(){
    cout<< max1(2,3)<<endl;
    cout<< max1(1.732,1.414)<<endl;
    return 0;
}

