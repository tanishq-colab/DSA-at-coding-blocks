#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = a.size();
    int wa=0;
    vector<int> li(n);
    vector<int> ri(n);
    li[0] = a[0];
    ri[n-1] = a[n-1];
    for(int i = 1;i<n;i++){
    
            li[i] = max(li[i-1],a[i]);
    }

    for(int i = n-2; i >=1 ; i--){
        ri[i] = max(ri[i+1],a[i]);
    }

    for(int i = 0; i<n ;i++){
        
        wa += min(li[i],ri[i]) - a[i];
    }
    cout<<wa;
    return 0;
}