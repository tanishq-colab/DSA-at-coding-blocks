#include <iostream>
using namespace std;

int main(){
int n;
cin>>n;

    int x,y=0;

    for(int i=0;i<n ;i++){

    cin>>x;
    y = (x^y);

    }
    cout<<y;
    
    return 0;
}

