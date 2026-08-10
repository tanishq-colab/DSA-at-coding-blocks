#include <iostream>
using namespace std;
#include <vector>

bool safe(int board[10][10],int r,int c,int n)
{
    //CHECK COLUMS
    int rr = r;
    int cc = c;
    for(int i = r ; i >= 0 ; i--){
        if(board[i][c] == 1) return false;
    }
    //CHECK RIGHT DIAGONAL
    rr=r;
    cc=c;

    while(rr >=0 && cc < n){
        if( board[rr][cc] == 1) return false;
        rr--;
        cc++;
    }
    rr=r;
    cc=c;
    //CHECK LEFT DIAGONAL
    while(rr>=0 && cc>=0){
        if(board[rr][cc] == 1)return false;
        rr--;
        cc--;
    }
    return true;
}

bool nq(int board[][10],int r,int n){
    if(r == n){ 

        for(int x = 0 ; x < n; x++){
            for(int y = 0 ; y < n ; y++){
                if(board[x][y] == 1 )cout<<"Q ";
                else cout<<"_ ";
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }

    for(int c = 0 ; c < n ; c++)
    {
        if(safe(board,r,c,n)){
            board[r][c] = 1;
            if(nq(board,r+1,n)) return true;

            else
            {
                 board[r][c] = 0;
            }
            
        }
       
    }
    return false;

}

int main(){
    int n = 4;
    int b[10][10] = {0};

    nq(b,0,n);


    return 0;
}