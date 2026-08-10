#include <iostream>
using namespace std;

void selectionsort(int a[],int count)
{
    for (int i = 0 ; i <=count-2 ; i++)

    {
        int minidx = i;
        for (int j = i+1; j < count; j++)
        {
            if(a[j] < a[minidx])
            {
                minidx=j;
            }
        }
        swap(a[minidx],a[i]);    
    }
    
}

int main(){
    int a[] = {5,4,1,3,2};
    int n =sizeof(a)/sizeof(int);
    selectionsort(a,n);
    for (int i = 0; i < n; i++)
    {
        /* code */cout<<a[i]<<' ';
    }
    
    return 0;
}
