


#include <iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    for(int i= n; i>=1 ;i--){
      int x=n;
      int d=i;
        for(int j=1 ;j <=n-i+1;j++){
            cout<<x;
            x--;
        }
        for(int j=1; j<=2*i-1 ;j++){
            cout<<' ';
        }
        
        for(int j=n-i+1;j >= 1;j--){
            cout<<d;
            d++;
        }
        cout<<endl;
    }
    
    for(int i = n; i >= 0; i--){
        cout << i ;
    }
    
    // increasing
    for(int i = 1; i <= n; i++){
        cout << i ;
    }
cout<<endl;
    for(int i= 1; i<=n ;i++){
        int x=n;
        int d=i;
          for(int j=1 ;j <=n-i+1;j++){
              cout<<x;
              x--;
          }
          for(int j=1; j<=2*i-1 ;j++){
              cout<<' ';
          }
          
          for(int j=n-i+1;j >= 1;j--){
              cout<<d;
              d++;
          }
          cout<<endl;
      }
    return 0;
}
