#include <iostream>
using namespace std;

int main(){
    int n =25;
    int b=19;
    cout<<(25 & 19)<<' '<<(b&n)<<endl;
    cout<<(25 | 19)<<' '<<(b | n)<<endl;
    cout<<(25 ^ 19)<<' '<<(b ^ n)<<endl;
    cout<<(~25)<<' '<<" "<<endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
   if(n>>k & 1) cout<<"1";
   else cout<<'0';
}