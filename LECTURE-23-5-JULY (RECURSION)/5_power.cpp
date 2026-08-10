#include <iostream>
using namespace std;
#include <vector>

int f(int x, int y)
{

    if(y == 0){
        return 1;
    }

return x * f(x,y-1);
//time and space O(y);

   //OPTIMISED time(log 2 y) sapce same
 int  a =   f(x , y /2);
   if(y%2==0){
    return a*a;
   }
   else{
    return a*a*x;
   }

}

int main(){
    int x,y;
    cin>>x>>y;
   cout<< f(x,y);
    return 0;
}