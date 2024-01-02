#include <bits/stdc++.h>
using namespace std;

class Graph{
    private:
        int V;
        list<int>*l;
    public:
    Graph(int v){
        V=v;
        l=new list<int>[V];
    }
    void addEdges(int a,int b){
        l[b].push_back(a);
    }


    bool dfs(int node,vector<bool>&visited,vector<bool>&stack){
        visited[node]=true;
        stack[node]=true;
        
        for(int a:l[node]){
            if(stack[a]){
                return true;
            }else if(!visited[a]){
                if(dfs(a,visited,stack)){
                    return true;
                }
            }
        }


        stack[node]=false;
        return false;
    }



    bool contains_cycle(){
        vector<bool>visited(V,false);
        vector<bool>stack(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(i,visited,stack)){
                    return true;
                }
            }
        }
        return false;

    }


};




int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int numCourses=5;
	vector<vector<int>> prerequisites={{0,1},{1,2},{2,3},{3,4},{4,0}};
	  
        Graph g(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            g.addEdges(prerequisites[i][0],prerequisites[i][1]);
        }
        cout<<!(g.contains_cycle())<<endl;
    
	



}

