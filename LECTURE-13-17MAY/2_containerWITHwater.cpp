#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a {1,8,6,2,5,4,8,3,7};
    int n = a.size();
    int maxi=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
         {
           int w = j-i;
           int h = min(a[i],a[j]);
           int area = h * w;
           maxi = max(area,maxi);
        }
    }
    cout<<maxi;
    
    return 0;
}