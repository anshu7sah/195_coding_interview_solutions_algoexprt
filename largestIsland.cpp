#include <bits/stdc++.h>
using namespace std;



int dfs(vector<vector<int>>&matrix,vector<vector<bool>> &visited,int i,int j,int row,int column){
    visited[i][j]=true;
    int temp=1;
    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};
    for(int k=0;k<4;k++){
        int nx=i+dx[k];
        int ny=j+dy[k];
        if(nx>=0 and nx<row and ny>=0 and ny<column and matrix[nx][ny]==1 and !visited[nx][ny]){
            int subcomponent=dfs(matrix,visited,nx,ny,row,column);
            temp=temp+subcomponent;
        }
    }
    return temp;
}

 int maxAreaOfIsland(vector<vector<int>>& grid) {
    int row=grid.size();
    int column=grid[0].size();
    int largestSize=0;
    vector<vector<bool>> visited(row,vector<bool>(column,false));


    for (int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(grid[i][j]==1 && !visited[i][j]){
                int size=dfs(grid,visited,i,j,row,column);
                if(size>largestSize){
                    largestSize=size;
                }

            }
        }
        
    }
    return largestSize;
    }



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<vector<int>>grid = {{0,0,1,0,0,0,0,1,0,0,0,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,1,1,0,1,0,0,0,0,0,0,0,0},{0,1,0,0,1,1,0,0,1,0,1,0,0},{0,1,0,0,1,1,0,0,1,1,1,0,0},{0,0,0,0,0,0,0,0,0,0,1,0,0},{0,0,0,0,0,0,0,1,1,1,0,0,0},{0,0,0,0,0,0,0,1,1,0,0,0,0}};
    // vector<vector<int>>grid={
    //     {1,0,0,1,0},
    //     {1,0,1,0,0},
    //     {0,0,1,0,1},
    //     {1,0,1,1,1},
    //     {1,0,1,1,0}
    // };

    cout<<maxAreaOfIsland(grid)<<endl;

}

