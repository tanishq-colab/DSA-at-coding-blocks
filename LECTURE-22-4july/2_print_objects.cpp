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

void print(const customer &c){

    cout<<c.name<<endl;
    cout<<c.age<<endl;
     cout<<c.gender<<endl;

}

int main(){
    customer c1;
    c1.name= "hello";
    c1.age = 21;

    print(c1);
    customer c2;
    cin>>c2.name >> c2.age >>c2.gender;

    print(c2);

    return 0;
}