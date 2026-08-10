#include <iostream>
using namespace std;
#include <vector>

bool ser(int a[][3]){
    
    for(int i=0;i<3;i++){
        for(int j = 0 ; j <3 ; j++){
            if(a[i][j] == 10){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int a[3][3]={{50,80,20},{90,10,70},{60,30,40}};

    ser(a)? cout<<"found" : cout<<"not";

    return 0;
}