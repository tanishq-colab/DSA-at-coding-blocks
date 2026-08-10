#include <iostream>
using namespace std;
#include <vector>

int main(){

int x = 10;
int *xptr = &x;

	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << endl;
	cout << "*xptr = " << *xptr << endl << endl;

double y = 3.14;
double* yptr = &y;

	cout << "y = " << y << endl;
	cout << "sizeof(y) = " << sizeof(y) << endl;
	cout << "yptr = " << yptr << endl;
	cout << "sizeof(yptr) = " << sizeof(yptr) << endl;
	cout << "*yptr = " << *yptr << endl << endl;

int x = 128;
    char *ptr = (char*) &x; ///REVISE THOS IS GOOLD
    cout<<(int)*ptr<<endl;



    return 0;
}