#include<iostream>
using namespace std;

// rate in Maze problem
bool isAllow(int **arr, int x, int y, int n)
{
    if(x<n&&y<n&&arr[x][y]==1) 
        return true;
    return false;
}

bool ratinMaze(int **arr,int x,int y,int n,int **solArr)
{   if((x==(n-1))&&(y==(n-1))) {
    solArr[x][y]=1;
    return true;
}
    if(isAllow(arr,x,y,n))
    {
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr)) 
           return true;
        if(ratinMaze(arr,x,y+1,n,solArr)) 
           return true;
        solArr[x][y]=0; //backtracking
        return false;
    }
    return false; //x and y allow hi nhi krtA
}
int main()
{
    int n; cin>>n;
    int **aRRAY=new int*[n];
    for(int i=0;i<n;i++)
    {
        aRRAY[i]=new int[n];
    }
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>aRRAY[i][j];
        }
    }
    
     int **solaRRAY=new int*[n];
     for(int i=0;i<n;i++)
    {
         solaRRAY[i]=new int[n];
     for(int j=0;j<n;j++)
     {
         solaRRAY[i][j]=0;
     }
    }
     if(ratinMaze(aRRAY,0,0,n,solaRRAY))
     {

          for(int i=0;i<n;i++)
            {
                 for(int j=0;j<n;j++)
              {
                cout<<solaRRAY[i][j]<<" ";
              }
        
     
            } 
    }
     return 0;
}


