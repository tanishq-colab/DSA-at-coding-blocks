#include <iostream>
using namespace std;
#include <vector>

int main(){
    int x = 10;
    cout<<"int"<<endl;
    cout<< x<<endl;
    cout<<&x<<endl;
    cout<<sizeof(&x)<<endl<<endl;

    double y = 3.14;
    cout<<"double"<<endl;
    cout<<y<<endl;
    cout<<&y<<endl;
    cout<<sizeof(&y)<<endl;
    cout<<sizeof(y)<<endl<<endl;
    
    cout<<"character"<<endl;
    char z = 'a';
    cout<<&z<<endl;
    cout<<sizeof(&z)<<endl<<endl;

    return 0;
}