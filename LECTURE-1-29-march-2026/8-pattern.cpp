// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     for(int i = 1;i <=n;i++)
//     {
//         // int z = 1;
//         //     if(i % 2 == 0){
//         //             z = 1-z;
//         //         cout<<z; 
//         //     }
//         //     else{ 
//         //         cout<<z;
//         //     }
//         int num =i % 2 == 0? 0 : 1;

//         for(int j=1 ;j <=i;j++)
//         {
           
//             cout<<num<<' ';
//             num = 1 - num;
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int num = i % 2 == 0 ? 0 : 1;
        for(int j=1;j<=i;j++){
           
            cout<<num;
            num = 1 - num;
        }
        cout<<endl;
    }
    return 0;
}