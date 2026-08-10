// #include <iostream>
// using namespace std;
// #include <vector>

// int *resize(int *a,int c){
//     cout<<"resizinf form"<<' '<<c*sizeof(int)<<' '<<2*c*sizeof(int)<<endl;
//     int *b = new int[2*c];
//     for(int i = 0 ; i < c; i++){
//         b[i] = a[i];
//     }
//     delete [] a;
//     return b;

// }

// int main(){
//    int *a =  new int[1];
//   int c = 1;
//    int i = 0;
//    int x;
//    while(true){
//     cin>>x;
//     if(x < 0){
//         break;
//     }
//     if(i == c){
//         resize(a,c);
//         c  = 2*c;
//     }
//     a[i] = x;
//     i++;
//    }
   
//     return 0;
// }

#include <iostream>
using namespace std;
#include<vector>
int * resize(int *a, int c){
    cout<<"resizing from "<<c<<" to "<<2*c<<endl;;
  int *b = new int[2*c];
  for(int i=0;i<c;i++){
    b[i] = a[i];
}
  delete [] a;
  return b;
}

int main() {
    int *a= new int[1];
    int c =1;
    int s =0;
    int i = 0;
    int x;
    while(true){
        cin>>x;
        if(x<0) break;
        if(i == c){
            a =resize(a,c);
      c =  2*c;
    }
        a[i] = x;
        i++;
    }
    for(int j=0 ; j<i ; j++){
        cout<<a[j]<<' ';
    }
}
