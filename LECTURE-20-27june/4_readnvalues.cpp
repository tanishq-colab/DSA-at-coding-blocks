#include <iostream>
using namespace std;
#include <vector>

int main(){
    int n;
    cin>>n;
    int *ptr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>ptr[i];
    }
    
    return 0;
}