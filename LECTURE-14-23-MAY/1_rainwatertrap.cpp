#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = a.size();
    int wa=0;
    for(int i = 0;i<n;i++){
        int li = -111;
        int ri = -222;
        
        for(int j = 0;j<=i;j++){
            li = max(li,a[j]);
        }
        
        for(int j = i ;j < n ; j++){
            ri = max(ri,a[j]);
        }     
       wa += min(li,ri) - a[i];
    }

    cout<<wa;
    return 0;
}