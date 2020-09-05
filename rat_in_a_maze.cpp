#include <bits/stdc++.h>
using namespace std;
#define N 4 
bool isSafe(int maze[N][N],int x,int y)
{
    if(x>=0&&x<N&&y>=0&&y<N&&maze[x][y]==1)
        return true;
    return false;
}
bool solveMazeUtil(int maze[N][N],int x,int y,int sol[N][N]);
void print(int sol[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout<<sol[i][j];
        cout<<endl;
    }
}
bool solveMaze(int maze[N][N])
{
    int x=0,y=0;
    int sol[N][N]={{0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0},
                    {0,0,0,0}};
    if(solveMazeUtil(maze,x,y,sol)==false)
        {
            cout<<"No path"<<endl;
            return false;
        }
    print(sol);
    return true;
}
bool solveMazeUtil(int maze[N][N],int x,int y,int sol[N][N])
{
    if(x==N-1&&y==N-1)
        {
        sol[x][y]=1;
        return true;
        }
    if(isSafe(maze,x,y)==true)
        {
        sol[x][y]=1;
        if(solveMazeUtil(maze,x+1,y,sol)==true)
            return true;
        if(solveMazeUtil(maze,x,y+1,sol)==true)
            return true;
        sol[x][y]=0;
        return false;
    }
return false;
}    
            
int main()

{
    int maze[N][N]={{1,1,1,1},
                   { 1,1,1,1},
                    {1,1,1,1},
                    {1,1,1,1}};
                    
    solveMaze(maze);
    return 0;
}
