// #include <iostream>
// using namespace std;
// #include <vector>
// #include<algorithm>
// int main(){
//     vector<int> v = {4,6,8};
//     vector<int> v2 = {1,2,3,5,7,9};
//     int n = v.size();
//     int z = v2.size();
//     int i = 0;
   
//     while(  i < n ){
//         int count=0;
//         int j = 0;
//         while(j < z){
//             if(v2[j] < v[i]){
//                 count++;
//                 j++;
//             }
//             else{
//                 j++;
//             }
//         }
//         i++;
//         cout<<count<<' ';
    
//     }

//     return 0;
// }
#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>
int main(){
    vector<int> a = {-1,0,1,2,-1,-4};
    int n = a.size();
   sort(a.begin(),a.end());

    for(int i = 0 ; i < n-2 ; i++)
    {
        if(i > 0 and a[i] == a[i-1]) continue;
        int j = i+1;
        int k = n-1;

        while(j < k)
        {
            
        int sum = a[i] + a[j] + a[k];
        if(a[i] + a[j] + a[k] == 0 )
        {
            
                cout<<a[i]<<' '<<a[j]<<' '<<a[k]<<endl;
                j++;
                k--;
                while(j<k and a[j] == a[j-1])
                j++;
          
            while(j<k and a[k] == a[k+1])
                k--;
            }
            else if(sum > 0){
                k--;
            }
            else{
                j++;
            }
            
            
        }
    }
    

    return 0;
}



