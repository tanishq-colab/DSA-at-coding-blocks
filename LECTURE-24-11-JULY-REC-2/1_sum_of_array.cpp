#include <iostream>
using namespace std;

int summ(int arr[], int n) {
    if (n == 0) {
        return 0;
    }

    return arr[n - 1] + summ(arr, n - 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << summ(arr, n);

    return 0;
}

------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int f(int arr[], int n,int i) {
    if (i == n) {
        return 0;
    }

    return arr[i] + f(arr,n,i + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(int);

    cout << f(arr, n,0);

    return 0;
}