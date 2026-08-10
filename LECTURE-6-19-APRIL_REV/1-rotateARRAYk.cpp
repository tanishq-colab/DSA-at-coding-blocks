// #include <iostream>
// using namespace std;

// int main(){
//     int a[]={10,20,30,40,50,60,70};
//     int n = sizeof(a)/sizeof(int);
//     int k = 3;

//     // reading k 
//      k = k % n; //if k is more than a
    
//     for (int j = 0;  j< k; j++)
//     {
//         for(int i = n- 1; i >= 1;i--){
//             swap(a[i] , a[i-1]);
//         }
//     }
//     for (int i =0; i <n ; i++)
//     {
//         cout<<a[i]<<' ';
//     }
    
//     return 0;
// }





#include <iostream>
using namespace std;

int main(){
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(int);
    int k= 0;
    cin>>k;
    for(int j = 0; j < k; j++){
        for (int i = n-1; i >= 1; i--)
        {
            swap(a[i],a[i-1]);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
cout<<a[i]<< ' ';
    }
    

    return 0;
}