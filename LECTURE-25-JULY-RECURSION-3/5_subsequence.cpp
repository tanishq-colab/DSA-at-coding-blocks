#include <iostream>
using namespace std;
#include <vector>

void f(char inp[], char out[], int i,int j){
    if(inp[i] == '\0')
    {
        out[j] = '\0';

        cout<<out<<'\n';
        
        return;
    }

    out[j] = inp[i];

    f(inp,out,i+1,j+1);
    
    f(inp,out,i+1,j);

}

int main(){
    
    char inp[] = "abc";
    
    char out[10];
    
    f(inp,out,0,0);
    
    return 0;
}

