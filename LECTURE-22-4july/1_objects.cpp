#include <iostream>
using namespace std;
#include <vector>

class customer{
    public: 
    string name;
    int age;
    char gender;
    double credits;

};


int main(){
    customer c1;
    c1.name= "hello";
    c1.age = 21;
    cout<<c1.name<<endl;
    cout<<c1.age<<endl<<endl;

    customer c2;
    cin>>c2.name >> c2.age >>c2.gender;

    cout<<c2.name<<endl;
    cout<<c2.age<<endl;
    cout<<c2.gender<<endl;
    return 0;
}