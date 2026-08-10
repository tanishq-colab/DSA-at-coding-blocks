#include <iostream>
using namespace std;
#include <vector>
#include<cstring>
void f(char inp[],int n,int i){
    if(i==n)
    {
        cout<<inp<<endl;
    
        return;
    
    }
    
    for(int j = i; j < n; j++)
    {
        swap(inp[i],inp[j]);
    
        f(inp,n,i+1);
    
        swap(inp[i],inp[j]);
    }
}

int main(){
char inp[] = "abc";
int n = strlen(inp);
f(inp,n,0);
    return 0;
}