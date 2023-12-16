#include <bits/stdc++.h>
using namespace std;


// time=O(n) and space=O(1)
void moveAhead(vector<int>&v,int key){
	int first=0;
	int last=v.size()-1;
	while(first<last){
		while(last>=0 && v[last]==key){
			last--;
		}
		if(first<last and v[first]==key){
			int temp=v[first];
			v[first]=v[last];
			v[last]=temp;
			last--;
			
		}
		first++;

	}
}





int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>v={2,1,2,2,2,3,4,2};
	moveAhead(v,2);
	for(int a:v){
		cout<<a<<" ";
	}
	



}

