// 1 by reversing time (on) space o(n);
// 2 two poimyetr

#include <iostream>
using namespace std;
#include <vector>
#include<cstring>
int main(){
    char st[] = "abfcba";
    int i = 0;
    int j = strlen(st);
    while(i<j){
        if(st[i] == st[j]){
            i++;
            j++;
        }
        
        else break;
    }
   
    return 0;
}