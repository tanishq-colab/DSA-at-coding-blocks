#include <iostream>
using namespace std;
#include <vector>

void p(vector<int> a,int n,vector<int> psum)
{
    for(int i=1;i<n;i++){
        psum[i] = psum[i-1] + a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<psum[i]<<' ';
    }
}
int main(){
    vector<int> a = {10,20,30,40,50};
    int n = a.size();
    vector<int> psum(n);
    psum[0] = a[0];

    p(a,n,psum);
    
    return 0;
}