#include <iostream>
using namespace std;
int multiply(int x,int y){
    return x*y;
}
int main(){
    cout<<multiply(4,5)<<endl;
    int ans = multiply(3,7);
    cout<<ans<<endl;
    cout<<20 + 4 +multiply(2,3)<<endl;

    return 0;
}