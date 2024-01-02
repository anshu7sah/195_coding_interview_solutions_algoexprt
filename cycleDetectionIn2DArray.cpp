#include <bits/stdc++.h>
using namespace std;

 bool dfs(vector<vector<char>>&grid,int i,int j,int row,int column,vector<vector<bool>>&visited,vector<int>&parent){
        visited[i][j]=true;
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        for(int k=0;k<4;k++){
        int nx=i+dx[k];
        int ny=j+dy[k];
        if(nx>=0 and nx<grid.size() and ny>=0 and ny<grid[0].size() ){
            if((!visited[nx][ny]) and (grid[nx][ny]==grid[i][j])){
                vector<int>p={i,j};
                // cout<<grid[nx][ny]<<nx<<" "<<ny<<" "<<grid[i][j]<<" "<<i<<" "<<j<<endl;
                // 	cout<<parent[0]<<" "<<parent[1]<<endl;
                bool result=dfs(grid,nx,ny,row,column,visited,p);
                if(result){
                    return true;
                }
            }else{
            	
                if(grid[nx][ny]==grid[i][j] and ((nx!=parent[0] and parent[0]!=-1 ) || (ny!=parent[1] and parent[1]!=-1))){
                	// cout<<grid[nx][ny]<<nx<<" "<<ny<<" "<<grid[i][j]<<" "<<i<<" "<<j<<endl;
                	// cout<<parent[0]<<" "<<parent[1]<<endl;
                    return true;
                }
            }
            
        }
    }
    return false;

        
    }


    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<bool>>visited(grid.size(),vector<bool>(grid[0].size(),false));
        int row=grid.size();
        int column=grid[0].size();
        if (grid.empty() || grid[0].empty()) {
             return false;
        }
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!visited[i][j]){
                    vector<int>parent={-1,-1};
                    
                    if(dfs(grid,i,j,row,column,visited,parent)){
                        return true;
                    }
                }
            }
        }
        return false;
        
    }



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<vector<char>>grid = {{'a','a','a','a'},{'a','b','b','a'},{'a','b','b','a'},{'a','a','a','a'}};
	// vector<vector<char>> grid = {
    // {'a', 'b', 'b'},
    // {'b', 'z', 'b'},
    // {'b', 'b', 'a'}
	// };


	if(containsCycle(grid)){
		cout<<"Yes"<<endl;
	
	}else{
		cout<<"No"<<endl;
	}
}





