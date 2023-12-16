#include <bits/stdc++.h>
using namespace std;


// time=O(n) and space=O(1)
int longestPeak(vector<int>&v){
	int peakLength=0;
	if(v.size()<3){
		return peakLength;
	}
	int i=1;
	while( i<v.size()-1){
		if(v[i]>v[i-1] and v[i]>v[i+1]){
			int rightIdx=i+2;
			int leftIdx=i-2;

			while(leftIdx>=0 and (v[leftIdx]<v[leftIdx+1]) ){
				leftIdx--;
			}
			while(rightIdx<v.size() and (v[rightIdx]<v[rightIdx-1]) ){
				rightIdx++;
			}


			i=rightIdx;
			int length=rightIdx-leftIdx-1;
			if(length>peakLength){
				peakLength=length;
			}
		}else{
			i++;
		}

	}
	return peakLength;



}




int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	// vector<int> v={1,2,3,3,4,0,10,6,5,-1,-3,2,3};
	// vector<int> v={0,1,2,3,4,5,4,3,2,1,0};
	vector<int> v={4,5,4};


	// [0,1,2,3,4,5,4,3,2,1,0]
	cout<<longestPeak(v)<<endl;
	



}

