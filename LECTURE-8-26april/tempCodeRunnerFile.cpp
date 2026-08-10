#include <iostream>
using namespace std;

template <typename T>
{
    T maxso(T a,T b){
        return (a < b) ? b : a;
    }
}

int main(){
    cout<<maxso(2,1)<<endl;
    cout<<maxso(2.11,3.11);

    return 0;
}