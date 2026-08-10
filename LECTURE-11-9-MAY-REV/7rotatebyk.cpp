#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    int k;
    cin>>k;
    k = k % n;

    reverse(v.begin(),v.end());
    
    reverse(v.begin(),v.begin()+k);
    
    reverse(v.begin() + k,v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
    return 0;
}