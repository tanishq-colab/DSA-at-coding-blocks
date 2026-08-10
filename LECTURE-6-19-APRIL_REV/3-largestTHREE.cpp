#include <iostream>
using namespace std;
#include<climits>

int main(){
    int a[] = {20,5,0,25,15,10};
    int count = sizeof(a)/sizeof(int);
    int z = INT_MIN;
    int x = INT_MIN;
    int ff = INT_MIN;

    for (int i = 0; i < count; i++)
    {
        if(a[i] > z){
            ff = x;
            x = z;
             z = a[i];
        }
//         else if(a[i] > x && a[i] != z){
//             ff = x;
//             x = a[i];
//        }
//        else if(a[i] > ff && a[i] != z && a[i] != x){
//         ff = a[i];
//    }

 }
   
    for (int i = 0; i < count; i++)
    {
        if(a[i] > x && a[i] < z){
             x = a[i];
        }
    }
    
    for (int i = 0; i < count; i++)
    {
        if(a[i] > ff && a[i] < z && a[i] < x){
             ff = a[i];
        }
    }
   
    cout<<z<<' '<<x<<' '<<ff;
    return 0;
}







