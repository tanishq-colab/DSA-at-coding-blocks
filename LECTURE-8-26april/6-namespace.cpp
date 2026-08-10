// #include <iostream>
// using namespace std;

// namespace add { 
//     int f(int a, int b){
//         return a+b;
//     }
// }
// //  we can also use using namespace mul;
// namespace mul{
//     int f(int a,int b){
//         return a*b;
//     }
// }
// int f(int a,int b){
//     return a-b;
// }
// int main(){
//     cout<<add::f(2,3)<<endl;
//     cout<<mul::f(2,3)<<endl;
//     cout<<f(2,3)<<endl;
//     return 0;
// }



#include <iostream>
using namespace std;

namespace mul{
    int add(int a,int b){
        return a+b;
    }
}

namespace sw{
    int add(int a,int b){
        return a+b;
    }
}
int main(){
    cout<<mul::add(2,3)<<endl;
    cout<<sw::add(3,4);

    return 0;
}