#include <iostream>
using namespace std;
#include<algorithm>
int main(){
    cout<<max(1,2)<<endl; //GENERALL WORKS FOR ONLY 2 VALUES

    cout<<max(2,max(3,4))<<endl;
    
    cout<<max(2,max(3,max(4,5)))<<endl;
    
    cout<<max({2,3,4,5})<<endl<<endl;  //WORKS WITH HEADER FILE ALGORITHM

   // SAME FOR MIN

   cout<<min(1,2)<<endl;
   cout<<min(2,min(3,4))<<endl;
   cout<<min(2,min(3,min(4,5)))<<endl;
   cout<<min({2ll,3ll,4ll,5ll})<<endl;
    return 0;
}