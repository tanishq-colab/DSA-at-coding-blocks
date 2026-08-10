#include <iostream>
using namespace std;
#include<vector>
int main(){
    vector <int> v{10,20,30,40,50,60};
    int n = v.size();
int t = 60;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++)
        {
            if(v[i] + v[j] == t)
            {
                cout<<v[i]<<' '<<v[j]<<endl;
            }
        }
    }
    return 0;
}