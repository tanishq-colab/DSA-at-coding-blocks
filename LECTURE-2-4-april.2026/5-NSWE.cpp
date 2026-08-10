#include <iostream>
using namespace std;

int main(){
    char ch;
    int x=0,y=0;
 //ch = cin.get();
    while(true)
    {
        ch=cin.get();
        if(ch == '\n') break;
        if (ch =='N') y++;
       else if (ch =='S') y--;
       else if (ch =='W') x--;
       else  x++;
    }

    if(x > 0){
        //PRINT E X TIMES
        for(int i=1; i<=x ;i++){
            cout<<'E';
        }
    }
    if(y > 0){
        for(int i=1; i<=y ;i++){
            cout<<'N';
        }
    }
    if(x < 0) {
        x = -x;
        for(int i=1;i<=x;i++){
            cout<<'W';
        }
    }    
    if(y< 0) {
        y = -y;
        for(int i=1;i<=y;i++){
            cout<<'S';
        }
    }
       
    
    
    return 0;
}