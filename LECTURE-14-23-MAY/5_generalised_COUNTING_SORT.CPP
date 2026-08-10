#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a = {4,3,2,2,4,3,5,4,5,2};
    int n = a.size();
    //N L R IMPUT FROM USER
    int k = 3;
    int r = 5;
    int l = 2;
    vector<int> map(r-l+1);
    
    for(int i = 0 ; i < n ;i++){
        int x = a[i];
        map[x-l]++;
    }
    for (int i = 0; i < r-l+1 ; i++)
    {
        for(int j = 1; j<=map[i];j++){
            cout<<i+l<<' ';
        }
    }
    

    return 0;
}