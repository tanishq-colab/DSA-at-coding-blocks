#include <iostream>
using namespace std;
#include <vector>

bool f(char maze[][10],int m,int n,int i,int j){
    if(i == m || j == n)return false;    // THIS
    if(maze[i][j] == 'X') return false;
    if(i == m-1 and j == n-1) return true;

    // if(j == m - 1){
    //     return f(maze,m,n,i+1,j);
    // }                                                 THEY CAN BE REPLACD BY
    // if(i == n - 1) return f(maze,m,n,i,j+1);

    return f(maze, m, n, i, j+1) || f(maze, m, n, i+1 , j);

}

int main()
{
    char maze[][10] = { "0000",
                    "0000",
                    "000X",
                    "X000"};

    int m = 4;
    int n = 4;
    f(maze,m,n,0,0) ? cout<<"found" : cout<<"not";
    
    return 0;
}