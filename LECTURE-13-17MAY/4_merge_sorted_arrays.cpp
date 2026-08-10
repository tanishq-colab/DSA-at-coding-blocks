// #include <iostream>
// using namespace std;
// #include <vector>

// int main(){
//     vector<int> a = {10,30,50,70};
//     vector<int> b = {20,40,60};
//     int m = a.size()+b.size();
//     vector<int> c(m);
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while(i< a.size() && j< b.size()){
//         if(a[i] <= b[j]){
//             c[k] = a[i];
//             k++;
//             i++;
//         }
//         else {
          
//             c[k] = b[j];
//             k++;
//             j++;
//         }
//     }
//     while(i <= a.size()){
        
//         c[k] = a[i];
//         k++;
//         i++;
//     }
//     while(j <= b.size()){
       
//          c[k] = b[j];
//         k++;j++;
//     }
//     for(int y : c){
//         cout<<y<<' ';
//     }
//     return 0;
// }

// //TRY DECREASING ORDER


#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector<int> a = {10,30,50,70};
    vector<int> b = {20,40,60};
    int n = a.size()+b.size();
    int i=0;
    int j=0;
    int k=0;
    vector<int> f(n);
    while( i<a.size() && j<b.size()){
        if(a[i]>=b[j]){
            f[k++] = b[j++];
        }
        else{
            f[k++] = a[i++];
        }
    }
    while(i < a.size()){
        f[k++] = a[i++];
    }
    while(j< b.size()){
        f[k++] = b[j++];
    }

    for(int& y : f){
        cout<<y<<' ';
    }

    return 0;

}