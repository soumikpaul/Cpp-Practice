#include <bits/stdc++.h>
using namespace std;
#define n 8
bool issafe(int x,int y,int sol[n][n])
{
    return ( x >= 0 && x < n && y >= 0 &&
             y < n && sol[x][y] == -1);

}
void printSolution(int sol[n][n])
{
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < n; y++)
            cout<<sol[x][y];
        cout<<endl;
    }
}
int solveKTUtil(int x,int y,int move_no,int sol[n][n],int xmove[],int ymove[]);
bool solve()
{
    int sol[n][n];
    for (int x = 0; x < n; x++)
        for (int y = 0; y < n; y++)
            sol[x][y] = -1;
 
    sol[0][0]=0;
    int xmove[]={2, 1, -1, -2, -2, -1,  1,  2};
    int ymove[]={1, 2,  2,  1, -1, -2, -2, -1};
    if (solveKTUtil(0, 0, 1, sol, xmove, ymove) == false)
    {
        printf("Solution does not exist");
        return false;
    }
    else
        solveKTUtil(0, 0, 1, sol, xmove, ymove);
        printSolution(sol);
 
    return true;
}
int solveKTUtil(int x,int y,int move_no,int sol[n][n],int xmove[n],int ymove[n])
{
    int next_x,next_y;
    if(move_no=n*n)
        return true;
    for(int k=0;k<8;k++)
    {
        next_x=x+xmove[k];
        next_y=y+ymove[k];
        if(issafe(next_x,next_y,sol))
            {
            sol[next_x][next_y]=move_no;
            if(solveKTUtil(next_x,next_y,move_no+1,sol,xmove,ymove)==true)
                return true;
            else
                sol[next_x][next_y]=-1;
            }
    }
    return false;
}    
int main()
{
    solve();
    return 0;
}
