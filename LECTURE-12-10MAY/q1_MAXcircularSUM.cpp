#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> v = {1,2,-3,4,5};
    vector<int> psum(v.size());

    psum[0] = v[0];
    int x = -111;
    for(int i = 1 ; i < v.size() ; i++){
        psum[i] = psum[i-1] + v[i];
        x = max(x,psum[i]);
    }
    cout<<x;
    return 0;
}