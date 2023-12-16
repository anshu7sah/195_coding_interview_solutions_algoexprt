#include <bits/stdc++.h>
using namespace std;
bool comparator(vector<int>a,vector<int>b){
	return a[0]<b[0];
}

// time=O(nlogn) and space=O(n);
vector<vector<int>> merge(vector<vector<int>>&v){
	sort(v.begin(),v.end(),[](const vector<int>& a, const vector<int>& b) {
            return a[0] < b[0];
        });
	vector<vector<int>> temp;
	vector<int> currentInterval=v[0];
	temp.push_back(currentInterval);
	int tempCount=0;

	for(int i=1;i<v.size();i++){
		int endIndexPrev=currentInterval[1];
		int startIndexCur=v[i][0];
		int endIndexCur=v[i][1];
		if(endIndexPrev>=startIndexCur){
			currentInterval[1]=max(currentInterval[1],endIndexCur);
			temp[tempCount]=currentInterval;
		}else{
			currentInterval=v[i];
			temp.push_back(currentInterval);
			tempCount++;
		}


	}
	return temp;
}





int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	vector<vector<int>>v={{1,2},{3,5},{4,7},{6,8},{9,10}};
	for(auto a:merge(v)){
		cout<<a[0]<<" "<<a[1]<<endl;
	}


}

