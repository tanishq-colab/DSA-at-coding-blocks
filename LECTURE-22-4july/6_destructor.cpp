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
    cout<<credits<<endl<<endl;

    }
    
    customer(string n, int a, char g, double c){

        name = n;
        age = a;
        gender = g;
        credits = c;

    }
    ~customer(){
        cout<<"destructor"<<endl;
    }
};


int main(){
    customer c1("rama",21,'M',1729);
    c1.print();
    customer c2("curie",27 , 'F', 2000);
    c2.print();
    customer c3; /// WILL NOT WORK WELL HAVE TO MAKE OWN CONSTRUCTOR
    return 0;
}