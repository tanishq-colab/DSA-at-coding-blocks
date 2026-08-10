#include <iostream>
using namespace std;
#include <vector>

int kadanes(const vector<int> a){
    int n =a.size();
    
    vector<int> v(n);

    v[0] = a[0];
    
    int maxsofar = v[0]; 
   
    for(int i=1 ;i<n;i++){
    
        v[i] = max(v[i-1] + a[i] , a[i]);    
    
        maxsofar = max(maxsofar,v[i]);

    } 
    
    return maxsofar;
}
int main(){
    vector<int> a = {-3,2,-1,4,-5};
    cout<<kadanes(a);
    return 0;
}


