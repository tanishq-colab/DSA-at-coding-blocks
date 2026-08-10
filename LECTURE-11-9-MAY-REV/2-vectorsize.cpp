#include <iostream>
using namespace std;
#include<vector>
int main(){
    vector<int> v(5,0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<endl;
    v.push_back(2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<' ';
    }
    cout<<"size "<<v.size()<<endl;
    cout<<"size "<<v.capacity()<<endl;

    vector<int> v2 = v;
    cout<<"size  v2 "<<v.size()<<endl;
    cout<<"size v2 "<<v.capacity()<<endl;

    return 0;
}