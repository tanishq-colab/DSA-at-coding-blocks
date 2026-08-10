#include <iostream>
using namespace std;

int main(){
    // int test;
    // cin>>test;
    int hc,dc;
    cout<<" char health "<<endl;
    cin>>hc;
    cout<<" char damage "<<endl;
    cin>>dc;
    int hm,dm;
    cout<<" monster health "<<endl;
    cin>>hm;
    cout<<" monster damage "<<endl;
    cin>>dm;
    int t1,t2;
while(t1 > 0 || t2 > 0)
{
    t1= hm - dc;
    t2 = hc - dm;
}
   if(hc > 0) cout<<"char ";
   else cout<<"mon";
    return 0;
}

