#include <iostream>
using namespace std;
#include <vector>

//TIME O(2^n)
//SPACE O(N);

int f(int n, int*a,int i,int j ,int y){
    if( i == j){
        return y * a[i];
    }
 return max(a[i] * y + f(n,a,i+1,j,y+1) , a[j] *y+ f(n,a,i,j-1,y+1));
}

int a[100][100][101];

int ftop(int n,)


int main(){
    int n = 5;
    int a[] = {2,3,5,1,4};
    int sum = 0;
    cout<<f(n,a,0,n-1,1);
    return 0;
}