#include <iostream>
using namespace std;
#include <vector>

bool f(int a[],int m,int k,int time){

    int cnt = 0;
    for(int d :a){
        if(d<=time){
            cnt++;
            if(cnt == k){
                m--;
                cnt = 0;
                if(m == 0){
                    return true;
                }
            }
        }
        else{
            cnt = 0;
        }
    }
return false;
}

int main(){
    int s = min_element(a.begin(),a.end());
    int e = max_element(a.begin(),a.end());
    int ans = -1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(f(a, m, k, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return 0;
}