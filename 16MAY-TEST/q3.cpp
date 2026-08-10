#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int total = 0;

    for(int i=0 ; i < n ; i++){
        cin>>a[i];
        total += a[i];
    }
    sort(a.rbegin(),a.rend());
    int count=0;
    int my=0;
    for(int i = 0 ; i < n ; i++){
        
        my +=a[i];
        count++;
        if(my > total - my){
            break;
        }

    }
    cout<<count;
    return 0;
}