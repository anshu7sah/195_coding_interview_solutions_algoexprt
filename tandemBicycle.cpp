#include <bits/stdc++.h>
using namespace std;



// time=O(nlogn) and space=O(1)
int tandemBicycle(vector<int>&red,vector<int>&blue,bool fastest){
	sort(red.begin(),red.end());
	if(fastest){
		sort(blue.begin(),blue.end(),greater<int>());
	}else{
		sort(blue.begin(),blue.end());
	}

	int totalSpeed=0;
	for(int i=0;i<red.size();i++){
		totalSpeed+=max(red[i],blue[i]);
	}
	return totalSpeed;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int>red={5,5,3,9,2};
	vector<int>blue={3,6,7,2,1};
	cout<<tandemBicycle(red,blue,true)<<endl;

	



}

