#include <iostream>
using namespace std;
#include <vector>

bool st(int a[][3],int n,int t){
    
int i = 0;
int j = n-1;

            while(i < n && j >=0){
                if(a[i][j] == t){
                    return true;
                }
                else if(a[i][j] > t){
                    j--;
                }
                else(i++);
            }
        
    
    return false;
}

int main(){
    
    int a[3][3] ={{10,20,30},{40,50,60},{70,80,90}};
    int n = 3;
    int t = 1;
    st(a,n,t) ? cout<<"present" : cout<<"not";

    return 0;
}