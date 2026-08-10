#include <iostream>
using namespace std;
#include <vector>

int main(){
    int x = 10;
    int *ptr1 = &x;
    int *const ptr2 = &x;
    const int *ptr3 = &x;
    const int *const ptr4 = &x;
    
    // cout<<*ptr1<<endl;
    // cout<<*ptr2<<endl;
    // cout<<*ptr3<<endl;
    // cout<<*ptr4<<endl; 

    // cout<<(*ptr1)++<<endl;
    // cout<<x;

    // cout<<(*ptr2)++<<endl;
    // cout<<x;
    
    // cout<<(*ptr3)++<<endl;
    // cout<<x;
    
    // cout<<(*ptr4)++<<endl;
    // cout<<x;
    
    // int y = 20;
    // ptr1 = &y;
    
    // int y = 20;
    // ptr2 = &y;

    int y = 20;
    ptr3 = &y;

    // int y = 20;
    // ptr4 = &y;
    return 0;
}