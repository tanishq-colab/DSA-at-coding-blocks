#include <iostream>
using namespace std;
#include <vector>
void f(vector<int>& v){
    for (int i = 0; i < v.size(); i++)
    {
        v[i]++;

    }
    
}

int main(){
    vector<int> v = {1,2,3,4};
    for(int&y : v ){
        cout<<y<<' ';
    }
    cout<<endl;

    f(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<' ';
    }
    
    return 0;
}