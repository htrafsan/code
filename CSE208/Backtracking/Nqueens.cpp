#include <bits/stdc++.h>
using namespace std;

int N;
int **board;


bool isSafe(int row, int col)
{
    int i, j;
    for (i = 0; i < col; i++)
        if (board[row][i])
            return false;
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;
    for (i = row, j = col; j >= 0 && i < N; i++, j--)
        if (board[i][j])
            return false;
    return true;
}


bool SolveNQueens(int col)
{
    if (col >= N)
        return true;
    for (int i = 0; i < N; i++) {
        if (isSafe(i, col)) {
            board[i][col] = 1;
            if (SolveNQueens(col + 1))
                return true;
            board[i][col] = 0;
        }
    }
    return false;
}


int main()
{
    cin>>N;
    board = new int*[N];
    for(int i=0;i<N;i++)board[i]= new int[N];

    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)board[i][j]=0;

    if(SolveNQueens(0)==true){
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++)
                printf(" %d ", board[i][j]);
            printf("\n");
        }
    }
    else printf("No Solution");
    return 0;
}
