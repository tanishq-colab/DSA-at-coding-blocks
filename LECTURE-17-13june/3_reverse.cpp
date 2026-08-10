#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

void reve(char str[]){
    int i = 0;
    int j = strlen(str) -1;
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}

int main() {

	char str[] = "hello";

	cout << str << endl;

    // MANUALLY
    reve(str);
cout<<str;
  
//INBUILT
	int n = strlen(str);
    strrev(str);
	// reverse(str, str + n);
	reverse(str, str + 2); // [0, 2)

	cout << str << endl;

	return 0;
}

