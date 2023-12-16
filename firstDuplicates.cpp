#include <bits/stdc++.h>
using namespace std;


// time=O(n^2) and space=O(1)
// int firstDuplicate(vector<int> &v){
// 	int minimumIndex=v.size();
// 	for(int i=0;i<v.size();i++){
// 		for(int j=i+1;j<v.size();j++){
// 			if(v[i]==v[j]){
				
// 				if(j<minimumIndex){
// 					minimumIndex=j;
// 				}
// 			}
// 		}
// 	}
// 	if(minimumIndex==v.size()){
// 		return -1;
// 	}else{
// 		return v[minimumIndex];
// 	}
// }

// time=O(n) and space=O(n)
// int firstDuplicate(vector<int> &v){
// 	map<int,int>m;
// 	for(int a:v){
// 		if(m[a]){
// 			return a;
// 		}else{
// 			m[a]=1;
// 		}
// 	}
// 	return -1;
// }


// time=O(n) and space=O(1)
int firstDuplicate(vector<int>&v){
	for(int i=0;i<v.size();i++){
		int index=abs(v[i])-1;
		if(v[index]<0){
			return abs(v[i]);
		}else{
			v[index]=v[index]*(-1);
		}

	}
	return -1;
}








int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>v={2,1,5,3,3,2,4};
	cout<<firstDuplicate(v)<<endl;
	



}

