#include <iostream>
using namespace std;

void bubblesort(int a[] , int n)
{
    for(int i=1;i<=n-1;i++)
    {  bool flag = false;
        for(int j=0;j<n-i;j++)
        {  
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                flag = true;
            }
        }
        if(flag == false){
            break;
        }
    }
}

int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        cin>>a[i];
    }

    bubblesort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }

    return 0;
}