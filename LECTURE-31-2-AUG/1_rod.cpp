#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int f(int n,vector<int>& p){
    if(n == 0) return 0;
int x = 0;

        //decide nect cut


for(int i = 1 ; i <=n; i++){

      x = max(x,p[i-1] + f(n-i, p));

    }
    return x;
}

int main(){

    vector<int> p = {1,5,8,9,10,17,17,20};
    int n = p.size();
    cout<<f(n,p);
    return 0;
}