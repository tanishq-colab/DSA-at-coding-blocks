#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a = {0,1,1,1,0,2,0,2};
            
    int n = a.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid <= high){
        if(a[mid] == 0){
            swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid] == 1){
            mid++;
        }
        else{
            swap(a[mid],a[high]);
            high--;
        }
    }

    for(int i = 0 ; i < n ; i++){
        cout<<a[i]<<' ';
    }
    return 0;
}