#include <iostream>
#define PI 3.14
#define PRINT cout<<
#define ll long long
#define F5 for(int i=0;i<n;i++){cout<<i<<' ';}
using namespace std;

int main(){
    cout<< PI <<endl;
    cout<< 2 * PI<<endl;
    PRINT 5 * PI<<endl;

    int n;
    cin>>n;
    F5(n);
    return 0;
}