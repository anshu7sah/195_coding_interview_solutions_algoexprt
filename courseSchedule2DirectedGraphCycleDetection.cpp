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
        l[a].push_back(b);
    }


    bool dfs(int node,vector<bool>&visited,vector<bool>&stack,vector<int>&result){
        visited[node]=true;
        stack[node]=true;
        
        for(int a:l[node]){
            if(stack[a]){
                return false;
            }
            if (!visited[a]) {
               if( dfs(a, visited, stack, result)==false){
                   return false;
               }
            }
        }

        result.push_back(node);
        stack[node]=false;
        
        return true;
    }



    vector<int> contains_cycle(){
        vector<bool>visited(V,false);
        vector<bool>stack(V,false);
        vector<int>result;
        for (int i = 0; i < V; i++) {
            if(!visited[i]){
                if(dfs(i, visited, stack, result)==false){
                result={};
                return result;
            }
            }
    }
    return result;
    };
};

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<vector<int>>prerequisites ={{0,1}};
	int numCourses=2;

	Graph g(numCourses);
        if(prerequisites.empty()){
            cout<<"getting output";
            vector<int>result;
            for(int i=0;i<numCourses;i++){
                result.push_back(i);
            }
            // return result;
            for(auto a:result){
            	cout<<a<<endl;
            }
        }
        for(int i=0;i<prerequisites.size();i++){
            g.addEdges(prerequisites[i][0],prerequisites[i][1]);
        }
        for(auto a:g.contains_cycle()){
        	cout<<a<<endl;
        }
	



}

