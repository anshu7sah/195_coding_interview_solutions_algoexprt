#include <bits/stdc++.h>
using namespace std;

// O(nlogn) time / O(1) space


int nonConstructibleChange(vector<int> &coins){
	sort(coins.begin(),coins.end());
	int currentChange=0;

	for (auto x:coins){
		if(currentChange+1<x){
			return currentChange+1;
		}
		currentChange+=x;
	}

	return currentChange+1;

}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>coins;
	int size;
	cin>>size;
	for(int i=0;i<size;i++){
		int temp;
		cin>>temp;
		coins.push_back(temp);
	}

	cout<<nonConstructibleChange(coins)<<endl;
	



}

