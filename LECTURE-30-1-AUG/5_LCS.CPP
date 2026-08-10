#include <iostream>
using namespace std;
#include <vector>
//time 2^m+n
//space m+n

int f(string &s,string& s2,int m,int n,int i ,int j){
    if(i == m || j == n) return 0;
    
    if(s[i] == s2[j])

    {
       return 1 + f(s,s2,m,n,i+1,j+1);
    }

    if(s[i] != s2[j]){
        return max(f(s,s2,m,n,i + 1,j),f(s,s2,m,n,i, j + 1));
    }
   


}

int main(){
    string s("ATGC");
    string s2("AGCT");
    int m = s.size();
    int n = s.size();
    cout<<f(s,s2,m,n,0,0);
    return 0;
}