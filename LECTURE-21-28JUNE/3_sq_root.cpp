// #include <iostream>
// using namespace std;
// #include <vector>

// int main(){
//     int n;
//     cin>>n;
//     double ans=0;
//     int s = 0, e = n;
    
//      while(s<=e){
//         int mid = s + (e - s)/ 2;
//         if(mid*mid<=n){
//             ans = mid;
//             s = mid+1;
//         }
//         else {
//             e = mid - 1;
//         }
//      }

//      while(ans*ans<=n){
//         ans = ans + 0.1;
//      }
// ans = ans - 0.1;
// cout<<ans;
//      return 0;
// }
#include <iostream>
using namespace std;
#include <vector>
    #include<iomanip>
int main(){
    int n;
    cin>>n;
    double ans=0;
    double s = 0, e = n;
    double err = 1e-7;
    
     while(e-s> err){
        double mid = s + (e - s)/ 2;
        if(mid*mid<=n){
            ans = mid;
            s = mid + err;
        }
        else {
            e = mid - err;
        }
     }

        cout<<setprecision(7)<<fixed<<ans;
     return 0;
}