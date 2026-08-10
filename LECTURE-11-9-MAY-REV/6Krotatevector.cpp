#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main(){
    vector <int> v = {1,0,4,3,2};

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<' ';
    }
    cout<<endl;
    reverse(v.begin(),v.end());

    for(int i = 0;i < v.size();i++)
    {
        cout<<v[i] << ' ';
    }
    cout<<endl;

    sort(v.begin()+2 , v.end() );//LAST WALA ADDRES INC NHI HOT
    
    for (int i = 0; i < v.size(); i++)
    {cout<<v[i]<<' ';
        /* code */
    }
    
    return 0;
}
