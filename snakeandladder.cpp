#include <bits/stdc++.h>
using namespace std;



class Graph{
	int V;
	list<int> *l;
public:
	Graph(int v){
		V=v;
		l=new list<int>[V];
	}
	 ~Graph() {
        delete[] l;
    }

	void addEdges(int u,int v){
		l[u].push_back(v);
		l[v].push_back(u);
	}
	int minCostBFS(int source,int dest){
		queue<int>q;
		bool* visited=new bool[V]{0};
		int* dist =new int[V]{0};


		q.push(source);
		visited[source]=true;
		dist[source]=0;

		while(!q.empty()){
			int f=q.front();
			
			q.pop();

			for(auto nbr:l[f]){
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr]=true;
					dist[nbr]=dist[f]+1;
				}
			}
		}
		int result = dist[dest];

        delete[] visited;
        delete[] dist;

        return result;
	}

	void display(){
		for(int i=1;i<V;i++){
			cout<<i<<"-->";
			for(auto a:l[i]){
				cout<<a<<",";
			}
			cout<<endl;
		}
	}
};






int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<vector<int>> board = {{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,35,-1,-1,13,-1},{-1,-1,-1,-1,-1,-1},{-1,15,-1,-1,-1,-1}};
	


	Graph g(37);
	for (int i=1;i<=36;i++){
		for(int j=1;j<=6;j++){
			int temp = i + j;
           if(temp<=36){
           	 int row = 5-(temp-1)/6;
            int column = (temp-1)%6;
            
			if(board[row][column]!=-1){
				temp = board[row][column];

			}
			if(temp<=36){
				g.addEdges(i,temp);
			}
           }

		}
	
	}
	cout<<g.minCostBFS(1,36)<<endl;
	



}


