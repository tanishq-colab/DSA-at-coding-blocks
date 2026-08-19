#include <iostream>
using namespace std;
#include <vector>
int dx[] = {1,0,-1,1};
int dy[]= {0,1,0,-1};

void f(char maze[][10],char path[][10],int m,int n,int i, int j)
{

    if(i == m || j == n || i == -1 || j == -1){
        return;
    }

    if(maze[i][j] == 'X') return;

    if(path[i][j] == '1') return;

    if(i == m-1 && j == n-1)
    {
        path[i][j] = '1';
        for(int ii = 0 ; ii < m ; ii ++)
        {
            for(int jj = 0 ; jj < n ; jj++)
       {
                cout<<path[ii][jj]<<' ';
            }
            cout<<endl;
        }
        return;
    }
    
    path[i][j] = '1';
    for(int k = 0 ; k < 4 ;k++)
    {
        f(maze, path, m, n, i + dx [k] , j+ dy[k]);
    }
    path[i][j] = '0';
}

int main() {

	char maze[][10] = {
		"0X00",
		"000X",
		"X0X0",
		"X00X",
		"XX00"
	};

	char path[][10] = {
		"0000",
		"0000",
		"0000",
		"0000",
		"0000"
	};

	int m = 5;
	int n = 4;

	f(maze, path, m, n, 0, 0);

	return 0;
}