#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;//to how many decimal places
    cin>>p; 
    int i=1; 
    double inc =0.1; //points
    double ans = 0;
 while(i<=p)
{
    while(ans * ans<=n){
        ans = ans + inc;
    }
    ans= ans - inc;
    inc = inc/10;
   i=i+1;
}
cout<<ans;
return 0;
}





























