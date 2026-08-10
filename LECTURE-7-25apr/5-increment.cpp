// #include <iostream>
// using namespace std;
// void inc(int x){
    
//     cout<<x;
// }
// int main(){
//     int n;
//     cin>>n;
//     inc(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// void inc(int x){
//     x++;    
// }
// int main(){
//     int n = 10;
//    // cin>>n;
//     inc(n);
// cout<<n;
//     return 0;
// }


#include <iostream>
using namespace std;
int inc(int x){
    x++;   
    return x; 
}
int main(){
    int n = 10;
   // cin>>n;
   n =  inc(n);
cout<<n;
    return 0;
}