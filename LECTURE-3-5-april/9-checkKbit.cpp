#include <iostream>
using namespace std;

int main(){
    int n=42;
    int k = 3;
    if((n>>k) & 1) cout<<"one";
    else cout<<"zero";
    return 0;
}