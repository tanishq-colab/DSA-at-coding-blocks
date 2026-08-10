#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a = {1,0,3,2,3,1,2,0,2};
    int n = a.size();
    int k = 3;
   // vector<int> map(k);

    vector<int> map(k+1);
    for(int i = 0 ; i < n ;i++){
        int x = a[i];
        map[x]++;

    }
    // for(int i = 0;i<=k;i++){
    //     cout<<map[i]<<' ';
    // }
    for(int i = 0; i <=k;i++){
        for(int j = 1; j<=map[i];j++){
            cout<<i<<' ';
        }
    }
    return 0;
}



#include <iostream>
using namespace std;
#include<vector>
int main() {
    
    vector<int> v = {1,2,-3,4,-1,3};
    int n = v.size();
   vector<int> psum(n);
    psum[0] = v[0];
    for(int i = 1; i < n ; i++){
        psum[i] = psum[i-1] + v[i];
        if(psum[i]==0){
            cout<<"true";
            return 0;
        }
    } 
cout<<"false";

}
