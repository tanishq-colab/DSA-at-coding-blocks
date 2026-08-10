#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int main(){
    int n,k;
    cin>>n>>k;
  vector< long long>a (n);
    
    
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i = 0 ; i < k ; i++){
        long long x;
        cin>>x;
        cout<< upper_bound(a.begin(),a.end(), x) - a.begin()<<' ';
       
    }
    

    return 0;
}