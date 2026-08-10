// #include <iostream>
// using namespace std;
// #include<climits>

// int main(){
//     int a[] = {20,5,0,25,15,10};
//   //  int a[] = {-10,-20,1,2,3};
//     int count = sizeof(a)/sizeof(int);
//     int z = INT_MIN;
//     int x = INT_MIN;
//     int ff = INT_MIN;
//     int min1 = INT_MAX;
//     int min2 = INT_MAX;

//     for (int i = 0; i < count; i++)
//     {
//         if(a[i] > z){
//             ff = x;
//             x = z;
//              z = a[i];
//         }    
//  }
 
//     for (int i = 0; i < count; i++)
//     {
//         if(a[i] > x && a[i] < z){
//              x = a[i];
//         }
//     }
    
//     for (int i = 0; i < count; i++)
//     {
//         if(a[i] > ff && a[i] < z && a[i] < x){
//              ff = a[i];
//         }
//     }

//     for (int i = 0; i < count; i++)
//     {
//         if(a[i] < min1){
//             min1 = a[i];
//         }

//     }
//      for (int i = 0; i < count; i++)
//     {
//         if(a[i] < min2 && a[i] != min1){
//             min2 = a[i];
//         }
        
//     }
//    int qq = z*x*ff;
//   int yy = min1*min2*z;

//     cout<<max(qq,yy);

//     return 0;
// }

#include <iostream>
using namespace std;
#include<climits>

int main(){
   // int a[] = {20,5,0,25,15,10};
   int a[] = {-10,-20,1,2,3,4};

    int min1 = INT_MAX;
    int min2 = INT_MAX;
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    int n = sizeof(a) / sizeof(int);

    for(int i=0;i<n;i++){
        
        if(a[i] > max1){
            max3=max2;
            max2=max1;
            max1 = a[i];
        }
        else if(a[i]> max2 && a[i] != max1){
            max3=max2;
            max2 = a[i];
        }
        else if(a[i] > max3 &&a[i]!=max2 && a[i] != max1){
            max3=a[i];
        }
        
    if(a[i] < min1){
        min2=min1;
        min1=a[i];
    }
    else if(a[i] < min2 && a[i] != min1){
        min2 = a[i];
    }
    }

    int ans = max(max1*max2*max3, min1*min2*max1);
cout<<ans;
   // cout<<max1<<" "<<max2<<" "<<max3<<' '<<min1<<' '<<min2;
    return 0;
}