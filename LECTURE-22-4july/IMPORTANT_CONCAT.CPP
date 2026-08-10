#include<algorithm>
#include <iostream>
using namespace std;
#include <vector>

class customer{
    public:
    string name;
    int age;
    double credits;
  
    customer(string n,int a,double c){
        name = n;
        age = a;
        credits = c;
    }
 
    void print(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<credits<<endl<<endl;
    }
  

    customer operator+ (customer c){
        customer temp(name +c.name,
        age +c.age,
    credits + c.credits);
    return temp;

    }
};

int main(){
customer c1("HELLO",21,3.1);
customer c2("paty" , 13,5.5);
// c1.print();
// c2.print();
customer c3 = c1 + c2;
c3.print();
//cout<<c1*c2;

}