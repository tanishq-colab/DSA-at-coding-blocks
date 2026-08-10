#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int arr[] = {50, 40, 40, 30, 30, 30, 20, 10, 10,30};
	int n = sizeof(arr) / sizeof(int);

	int key = 30;

	// 1. searching for a key in a sequence using find()

	//cout<<*find(arr,arr+n,key); // VALUE

	//cout<<find(arr,arr+n,key)-arr; // INDEX OF VALUE
	// key = 100;
	// auto fin = find(arr,arr+n,key);
	
	// if(fin == arr+n){
	// 	cout<<"not present";
	// }
	// else cout<<"present";


	// 2. counting the occurrences of a key in a sequence using count()
	key = 30;
	cout<<count(arr,arr+n,key);




	return 0;
}