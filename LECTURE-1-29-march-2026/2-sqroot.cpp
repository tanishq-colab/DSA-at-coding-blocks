#include <iostream>
using namespace std;
#include<iomanip>
int main(){
    int n;
    cin>>n;
    double ans=0;
    while(ans * ans<=n){
        ans++;
    }
    ans= ans-1;
    while(ans * ans<=n){
        ans = ans +0.1;
    }
    ans = ans -0.1;
    while(ans * ans<=n){
        ans = ans +0.01;
    }
    ans = ans -0.01;
    
    cout<<setprecision(3)<<fixed<<ans;
    return 0;
}