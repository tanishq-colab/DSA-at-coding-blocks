#include <iostream>
using namespace std;

int main(){
    int a[5] = {10,20,30,40,50};

  cout<<a[0]<<endl;
    
  for (int i = 0; i < 5; i++)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;    
    }

    for (int i = 4; i >= 0; i--)
    {
        cout<<"a["<<i<<"] = "<<a[i]<<endl;    
    }

    int b[] = {100,200,300};
    
     
    return 0;
}