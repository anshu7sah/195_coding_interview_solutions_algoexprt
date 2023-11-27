#include <bits/stdc++.h>
using namespace std;


// time=O(n^2) and space=O(1)
void insertionSort(vector<int> &v){
	for(int i=1;i<v.size();i++){
		int j=i;
		while(j>0 and v[j]<v[j-1]){
			int temp=v[j];
			v[j]=v[j-1];
			v[j-1]=temp;
			j--;
		}
	}
}






int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> v={8,2,5,7,1,3,6,9};
	insertionSort(v);
	for(int x:v){
		cout<<x<<" ";
	}
	



}

