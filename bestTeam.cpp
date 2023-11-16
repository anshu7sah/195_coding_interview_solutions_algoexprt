#include <bits/stdc++.h>
using namespace std;



string tournamentWinner(vector<vector<string>>competitions,vector<int>results){
	string bestTeam="";
	map<string,int>points;
	points[""]=0;

	for(int i=0;i<competitions.size();i++){
		string winningTeam;
		if(results[i]==0){
			winningTeam=competitions[i][1];
			
		}else{
			winningTeam=competitions[i][0];
		}
		if(points[winningTeam]){
				points[winningTeam]+=3;
			}else{
				points[winningTeam]=3;
			}
		if(points[bestTeam]<points[winningTeam]){
			bestTeam=winningTeam;
		}
	}

	return bestTeam;

}




int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	vector<vector<string>> competitions;
	vector<int>results;
	long long count;
	cin>>count;
	competitions.resize(count, vector<string>(2));
	for (int i=0;i<count;i++){
		cin>>competitions[i][0]>>competitions[i][1];
	}
	for (int i=0;i<count;i++){
		int result;
		cin>>result;
		results.push_back(result);
	}
	cout<<tournamentWinner(competitions,results)<<endl;

	
	return 0; 
	



}

