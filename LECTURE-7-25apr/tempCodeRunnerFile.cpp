#include <iostream>
using namespace std;
#include<cmath>
int main(){
    int n;
    cin>>n;
    int c = ceil(log10(n+1));
    
    cout<<c;
    return 0;
}