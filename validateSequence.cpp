#include <bits/stdc++.h>
using namespace std;

#define ll long long int

bool validateSequence(vector<ll> &arr,vector<ll>&seq){
	
	ll arrCount=0;
	ll seqCount=0;
	while(arrCount<arr.size() && seqCount<seq.size()){
		if(arr[arrCount]==seq[seqCount]){
			seqCount+=1;
		}
		arrCount+=1;
	}
	
	return seqCount==seq.size()?true:false;
}




int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	
	

	// cout<<"Enter the size of the array: ";
	ll arrSize;
	cin>>arrSize;
	vector<ll> arr(arrSize);
	// cout<<"Enter the elements of the array: ";
	for (ll i=0;i<arrSize;i++){
		cin>>arr[i];
	}
	// cout<<"Enter the size of the Subsequence: ";
	ll subSize;
	cin>>subSize;
	vector<ll>seq(subSize);
	// cout<<"Enter the elements of the Subsequence: ";
	for (ll i=0;i<subSize;i++){
		cin>>seq[i];
	}

	
	if(validateSequence(arr,seq)){
		cout<<"The Subsequence is present in the array in order"<<endl;
	}else{
		cout<<"The Subsequence is not present in the array"<<endl;
	}

	return 0;



}

