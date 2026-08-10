#include <iostream>
using namespace std;
#include <vector>

int c(const string &a){
    int n = a.size()-1;
    int cnta=0,cntb=0;
    for(int i = n;i>=0;i--){
        if(a[n] == 'b'){
            cntb++;
        }
        else if(a[n] == 'a'){
            cnta+=cntb;
        }
        n--;}
    
    return cnta;
}

int main(){
    string a = "ababbaab";
cout<<c(a);
    return 0;
}