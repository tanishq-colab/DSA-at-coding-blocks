#include <iostream>
using namespace std;
#include <vector>

class customer{
    public: 
    string name;
    int age;
    char gender;
    double credits;

    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<gender<<endl;
    }

};

int main(){
    customer c1;
    c1.name= "hello";
    c1.age = 21;
    c1.gender = 'M';

    c1.print();

    customer c2;
    cin>>c2.name >> c2.age >>c2.gender;

    c2.print();

    return 0;
}