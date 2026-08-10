

#include <iostream>
using namespace std;
#include <vector>

int ladder(int n, int k , int i){
    if(i == n) return 1;

    int ways = 0;

    for(int j = 1; j <=k;j++)
    {
        if(i+j <= n) {
            ways+=ladder(n,k,i+j);
        }
    }

    return ways;
}

int main(){
    int n,k;
    cin>>n>>k;
    cout<<ladder(n,k,0)<<endl;
    return 0;
}