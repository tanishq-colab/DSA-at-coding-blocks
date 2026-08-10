#include <iostream>
using namespace std;
#include <vector>

int main(){
    int a[] = {1,2,3,4,5};
    int n = 5;
    int* ptr = a;
    for(int i = 0; i < n ; i++){
        cout<<ptr[i]<<endl;
        //or
        cout<<*(ptr+i)<<endl;
    }
    return 0;
}