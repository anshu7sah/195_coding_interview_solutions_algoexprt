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
	void addEdges(int i,int j,bool unidir=true){
		l[i].push_back(j);
		if(unidir){
			l[j].push_back(i);
		}
	}
	void display(){

		for(int i=0;i<V;i++){
			cout<<i<<"---->";
			for(auto v:l[i]){
				cout<<v<<",";
			}
			cout<<endl;
		}
	}

	// single source shortest path algorithm for undirected graph using bfs
	void bfs(int source,int dest=-1){
		queue<int> q;
		bool* visited=new bool[V]{0};
		int* dist =new int[V]{0};
		int* parent=new int[V];


		for(int i=0;i<V;i++){
			parent[i]=-1;
		}


		q.push(source);
		visited[source]=true;
		parent[source]=source;
		dist[source]=0;



		while(!q.empty()){
			int f=q.front();
			cout<<f<<endl;
			q.pop();

			for(auto nbr:l[f]){
				if(!visited[nbr]){
					q.push(nbr);
					visited[nbr]=true;
					parent[nbr]=f;
					dist[nbr]=dist[f]+1;
				}
			}
		}


		//Print the shortest distance
		for(int i=0;i<V;i++){
			cout<<"Shortest dist to "<<i<<" is "<<dist[i]<<endl;
		}

		//print the path of the dest
		if(dest!=-1){
			int temp=dest;
			while(temp!=source){
				cout<<temp<<"--";
				temp=parent[temp];
			}
			cout<<source<<endl;
		}
	}

	void dfsHelper(int source,bool *visited){
		cout<<source<<",";
		visited[source]=true;
		for(int nbr:l[source]){
			if(!visited[nbr]){
				dfsHelper(nbr,visited);
			}
		}
		return;
	}

	void dfs(int source){
		bool *visited=new bool[V]{0};
		dfsHelper(source,visited);
	}






};







int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	Graph g(7);
	g.addEdges(0,1);
	g.addEdges(0,4);
	g.addEdges(2,1);
	g.addEdges(3,4);
	g.addEdges(4,5);
	g.addEdges(2,3);
	g.addEdges(3,5);
	g.addEdges(5,6);
	// g.display();
	// g.bfs(1);
	// g.bfs(1,6);
	g.dfs(1);


	



}

