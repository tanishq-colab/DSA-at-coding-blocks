#include <iostream>
using namespace std;

void bubblesort(int a[],int n){

    for(int i=1;i<=n-1;i++)
    {
        bool flag = false;
        for(int j = 0; j < n - i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j] , a[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }

}

int main(){
    int a[]={5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);

    bubblesort(a,n);
    
    return 0;
}