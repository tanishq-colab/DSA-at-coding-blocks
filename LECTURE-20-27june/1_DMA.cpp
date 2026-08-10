#include <iostream>
using namespace std;
#include <vector>

int main(){
   int* ptr  = new int;
    *ptr = 50;
    cout<<*ptr<<'\n';
    char *pt = new char;
    *pt = 'y'; /// 1byte
     cout<<*pt;

     double *gr = new double;
*gr = 5.5;
cout<<*gr;
    return 0;
}