#include <iostream>
using namespace std;

int main(){
    char ch;
    int a=0;
    while(ch != '$'){
        cin>>ch;

        if(ch == '$') break;
        else a++;
    }
cout<<a;
    return 0;
}