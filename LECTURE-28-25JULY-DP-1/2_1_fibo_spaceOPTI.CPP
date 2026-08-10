#include <iostream>
using namespace std;
#include <vector>

int f(int n){
    if(n==0 || n==1){
        return n;
    }
    int a = 0;
    int b = 1;
    for(int i = 1 ; i < n ; i++){
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(){
    int n = 2;
  cout<<  f(n);
    return 0;
}