#include <iostream>
using namespace std;

int partition(int arr[], int lo, int hi) {

    int i = lo;
    int j = lo;
    int pivot = arr[hi];

    while (j < hi) {
        if (arr[j] < pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    swap(arr[i], arr[hi]);
    return i;
}

void f(int arr[], int lo, int hi) {

    if (lo >= hi)
        return;

    int pidx = partition(arr, lo, hi);

    f(arr, lo, pidx - 1);
    f(arr, pidx + 1, hi);
}

int main() {

    int a[] = {6, 5, 2, 3, 4, 1};

    int n = sizeof(a) / sizeof(int);

    f(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}