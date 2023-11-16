#include <bits/stdc++.h>
using namespace std;


// vector<int> sortedSquareArray(vector<int> &v){
// 	// Time complexity is nlogn and space complexity is n.
// 	vector<int> temp(v.size());
// 	for(int i=0;i<v.size();i++){
// 		temp[i]=v[i]*v[i];
// 	}
// 	sort(temp.begin(),temp.end());
// 	return temp;

// }
vector<int>sortedSquareArray(vector<int>&v){
	// Time complexity is O(n)
	// Space complexity is O(n)
	vector<int>temp(v.size());
	int start=0;
	int end=v.size()-1;
	for(int i=v.size()-1;i>=0;i--){
		if(abs(v[start])>abs(v[end])){
			temp[i]=v[start]*v[start];
			start+=1;
		}else{
			temp[i]=v[end]*v[end];
			end-=1;
		}
	}
	return temp;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n;
	cin>>n;
	vector<int>v(n);

	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	vector<int> result=sortedSquareArray(v);

	for(int i=0;i<n;i++){
		cout<<result[i]<<" ";
	}
	return 0;

	




}

