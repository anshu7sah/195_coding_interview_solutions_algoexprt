#include <bits/stdc++.h>
using namespace std;

// time=O(n^2) and space=O(1)
void selectionSort(vector<int> &v){
	int currentIdx=0;
	while(currentIdx<v.size()-1){
		int smallestIdx=currentIdx;
		for(int i=currentIdx+1;i<v.size()-1;i++){
			if(v[smallestIdx]>v[i]){
				smallestIdx=i;
			}
		}
		int temp=v[currentIdx];
		v[currentIdx]=v[smallestIdx];
		v[smallestIdx]=temp;
		currentIdx+=1;

	}
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int> v={8,2,5,7,1,3,6,9};
	selectionSort(v);
	for(int x:v){
		cout<<x<<" ";
	}
	



}

