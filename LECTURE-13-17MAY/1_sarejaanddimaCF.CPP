#include <iostream>
using namespace std;
#include <vector>

void s(vector<int> a){
    int n = a.size();
    int i = 0;
    int j = n-1;
    int sareja = 0;
    int dima = 0;
    bool flag = true;
    while(i<=j){
        if(flag){
            if(a[i]>=a[j]){
                sareja += a[i];
                i++;
            }
            else{
                sareja += a[j];
                j--;
            }
            flag = false;
        }
        
        else{
            if(a[i]>a[j]){
                dima += a[i];
                i++;
            }
            else{
                dima += a[j];
                j--;
            }
            flag = true;
        }
    }
    cout<<sareja<<' '<<dima;
}

int main(){
    int q;
    cin>>q;
    vector<int> a(q);
    for(int i=0;i<q;i++){
        cin>>a[i];
    }
     s(a);
    return 0;
}
