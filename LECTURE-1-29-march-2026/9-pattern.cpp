#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int y = 1;
    for(int i = 1;i <=n;i++)
    {
        //n-1 spaces
        for(int j=1;j <=n-i ;j++){
            cout<<"  ";
        }
       
        int num = i;
        // OR
         
        //I stars
        for(int j=1;j <=i ;j++){
            cout<<num<<' ';
            num++;
        }
        //num = 2*i-2;
            //OR
             num = num - 2;
        for(int j= 2 ; j <= i ; j++){
            cout<<num<<' ';
            num--;
        }
     
        cout<<endl;
    }
    
    return 0;
}