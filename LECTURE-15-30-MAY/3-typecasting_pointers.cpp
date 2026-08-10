#include <iostream>
using namespace std;
#include <vector>

int main(){
    int x = 10;
    char *ptr = (char*)&x;

    char ch = 'A';

    int *ptr1 = (int*)&ch;
    
   cout<<*ptr1<<endl;
    cout<<ptr1;

    int x = 10;
    char *ptr = &x;

    char ch = 'A';
    int *ptr1 = &ch;
  
    cout<<ptr1;
    return 0;
}