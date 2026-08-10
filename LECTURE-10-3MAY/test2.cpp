#include <iostream>
using namespace std;
#include<climits>
int main(){
    int a[101];
    int n,ind1,ind2;
    int max = INT_MIN;
    int min = INT_MAX;
    cin>>n;
   if(n<2 || n > 100) return 0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
   int moves;

    for (int i = 0; i < n; i++)
    {
        if(a[i] > max){
            max = a[i];
            ind1 = i;
        }

         if (a[i] <= min)
        {
            min = a[i];
            ind2 = i;
        }
    }
    moves = ind1  + (n-1 - ind2) ;
    if(ind1 > ind2){
        moves--;
    }
 
 cout<<moves;
    return 0;
}