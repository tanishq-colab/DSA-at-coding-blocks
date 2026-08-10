#include <iostream>
using namespace std;
#include <vector>

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int count = 0;
        int maxi= 0;
        for(int i = 0; i < n; i++){
            if(v[i] == 0){
                count++;
                maxi = max(count,maxi);
            }
            else {count = 0;}
           
        }   
        cout<<maxi<<endl;
    }
    return 0;
}