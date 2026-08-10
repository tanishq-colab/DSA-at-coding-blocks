#include <iostream>
using namespace std;
#include <vector>

int kad(const vector<int> &a){
    int n = a.size();

    int x = a[0];
  
    int maxso = x;
  
    for(int i = 1 ; i < n ; i++){
        x = max(x + a[i] , a[i]);
        maxso = max(maxso,x);
    }
    return maxso;
}

int main(){
    vector<int> a = {-3,2,-1,4,-5};
cout<<kad(a);
    return 0;
}

