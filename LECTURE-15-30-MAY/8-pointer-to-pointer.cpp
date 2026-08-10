#include <iostream>
using namespace std;
#include <vector>

int main(){
    int x = 10;

	int* xptr = &x;
	int** xxptr = &xptr;
	int*** xxxptr = &xxptr;

	cout << "x = " << x << endl;
	cout << "*xptr = " << *xptr << endl;
	cout << "**xxptr = " << **xxptr << endl;
	cout << "***xxxptr = " << ***xxxptr << endl;

    cout << "x = " << x << endl;
	cout << "*xptr = " << xptr << endl;
	cout << "**xxptr = " << xxptr << endl;
	cout << "***xxxptr = " << xxxptr << endl;
	return 0;
}