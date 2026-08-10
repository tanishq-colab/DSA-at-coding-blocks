
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m =n/2;
    for (int i = 1; i <=2*n-1; i++)
    {
    cout<<'*';
    }    cout<<endl;
    
    for(int i=1; i <= n-1;i++){
        for(int j=1;j<=n-i;j++){
            cout<<'*';
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<' ';
        }
        for(int j=1;j<=n-i;j++){
            cout<<'*';
        }
        cout<<endl;
    }
    
    for(int i=2; i <=n-1 ;i++){

        for(int j=1;j<=i;j++){
            cout<<'*';
        }
         for(int j=1;j<=2*(n-i)-1;j++){
             cout<<' ';
         }
        for(int j=1;j<=i;j++){
            cout<<'*';
        }
        cout<<endl;
    }

    for(int i=1;i<=2*n-1;i++){
        cout<<'*';
    }
    return 0;
}




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


#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
      
        for(int j=1; j<=2*(n-i) ;j++){
            cout<<"  ";
        }
        
        for(int j=i;j >= 1;j--)
        {
            cout<<j<<' ';
        }
     
        for (int j = 2; j <2*i-1 ; j++)
        {
            cout<<"  ";
        }
    
        for(int j = 1;j <= i ;j++)
        { if(i==1) continue;
            cout<<j<<' ';
           
        }
    
        cout<<endl;
    }
    for(int i=n-1; i>=1 ;i--){
      
        for(int j=1; j<=2*(n-i) ;j++){
            cout<<"  ";
        }
        
        for(int j=i;j >= 1;j--)
        {
            cout<<j<<' ';
        }
     
        for (int j = 2; j <2*i-1 ; j++)
        {
            cout<<"  ";
        }
    
        for(int j = 1;j <= i ;j++)
        { if(i==1) continue;
            cout<<j<<' ';
           
        }
    
        cout<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int m;
    cin>>m;
    int n = m/2 + 1;
    cout<<endl;
    for(int i=1;i<=n;i++){
      
        for(int j=1; j<=2*(n-i) ;j++){
            cout<<"  ";
        }
        
        for(int j=i;j >= 1;j--)
        {
            cout<<j<<' ';
        }
     
        for (int j = 2; j <2*i-1 ; j++)
        {
            cout<<"  ";
        }
    
        for(int j = 1;j <= i ;j++)
        { if(i==1) continue;
            cout<<j<<' ';
           
        }
    
        cout<<endl;
    }
    for(int i=n-1; i>=1 ;i--){
      
        for(int j=1; j<=2*(n-i) ;j++){
            cout<<"  ";
        }
        
        for(int j=i;j >= 1;j--)
        {
            cout<<j<<' ';
        }
     
        for (int j = 2; j <2*i-1 ; j++)
        {
            cout<<"  ";
        }
    
        for(int j = 1;j <= i ;j++)
        { if(i==1) continue;
            cout<<j<<' ';
           
        }
    
        cout<<endl;
    }
    return 0;
}