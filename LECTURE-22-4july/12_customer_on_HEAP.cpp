#include <iostream>
using namespace std;
#include <vector>

class customer{
    public: 
    string name;
    int age;
    char gender;
    double credits;

    customer(){}
    void print(){

    cout<<name<<endl;
    cout<<age<<endl;
    cout<<gender<<endl;
    cout<<credits<<endl<<endl;

    }
    
    customer(string n, int a, char g, double c){

        name = n;
        age = a;
        gender = g;
        credits = c;

    }
};


int main(){
   customer * cpter = new customer;

   cin>>cpter->name >> cpter->age >> cpter->gender >>cpter->credits;
   
   cpter -> print();
   customer *c1=new customer("bheee",42 , 'M', 1222);
   c1->print();

    
    return 0;
}