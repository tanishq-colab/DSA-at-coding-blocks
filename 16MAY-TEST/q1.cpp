#include <iostream>
using namespace std;
#include <vector>

int main(){
    int t;
    cin>>t;
    vector<int> v(t);
    for(int i=0;i<t;i++){
        cin>>v[i];
    }
    int count=1;
    for (int i = 0; i < t-1; i++)
    {
      if(v[i] != v[i+1]){
        count++;
      }

    }
    cout<<count;
    return 0;
}