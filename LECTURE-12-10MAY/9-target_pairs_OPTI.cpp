#include <iostream>
using namespace std;
#include <vector>

void pa(vector <int> a,int n,int t)
{
    int cnt;
    int i = 0;
    int j= n-1;
    while(i < j){
        if(a[i] + a[j] == t){
            cout<<a[i]<<' '<<a[j]<<endl;
            i++;
            j--;
        }
        else if(a[i] + a[j] > t){
            j--;
        }
            else{
                i++;
            }
    }
}

int main(){
    vector<int> v = {10,20,30,40,50,60};
    int a = v.size();
    int t=60;
    pa(v,a,t);
    return 0;
}