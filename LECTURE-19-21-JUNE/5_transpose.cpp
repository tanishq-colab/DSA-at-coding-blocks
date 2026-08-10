#include <iostream>
using namespace std;
#include <vector>

void transpose(int a[][4],int row,int col){

  for(int i = 0 ; i< row;i++){
    for(int j = i+1 ; j < col ;j++){
       // if(i != j){
            swap(a[i][j],a[j][i]);
        
    }
  }

}

int main(){
    int a[4][4] = {{11,12,13,14},
                    {15,16,17,18},
                    {19,20,21,22},
                    {23,24,25,26}};
int row = 4;
int col = 4;
transpose(a,row,col);
                for(int i = 0 ; i < row;i++){
                    for(int j = 0 ; j < col ;j++){
                        cout<<a[i][j]<<' ';
                    }
                    cout<<endl;
                }
            

    return 0;
}