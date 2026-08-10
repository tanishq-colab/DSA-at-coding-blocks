#include <iostream>
using namespace std;

int main(){
    char ch;
    int upper=0,lower=0,space=0,special=0,digit=0;
    while(ch != '$'){
        ch = cin.get();
        if(ch =='$') break;

        else if(ch>='a'&&ch<='z') {
        ++lower;
        }
        else if(ch>='A'&&ch<='Z') {
        ++upper;
        }
        else if(ch>='0'&&ch<='9') {
            ++digit;
        }
        else if(ch==' ' || ch =='\n' || ch == '\t') {
            ++space;
        }
        else ++special;
    }
    cout<<"lower = "<<lower<<endl;
    cout<<"digit = "<<digit<<endl;
    cout<<"upper = "<<upper<<endl;
    cout<<"space = "<<space<<endl;
    cout<<"special = "<<special<<endl;
    return 0;
}