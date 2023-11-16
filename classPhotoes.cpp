#include <bits/stdc++.h>
using namespace std;

// time=O(nlogn) and space=O(1)
bool classPhotoes(vector<int>&red,vector<int>&blue){
	sort(red.begin(),red.end(),greater<int>());
	sort(blue.begin(),blue.end(),greater<int>());
	string s;
	if(red[0]>blue[0]){
		s="red";
	}else{
		s="blue";
	}
	for(int i=0;i<red.size();i++){
		if(s=="red"){
			if(blue[i]>=red[i]){
				return false;
			}
		}else{
			if(red[i]>=blue[i]){
				return false;
			}
		}
	}
	return true;
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	vector<int>red={5,8,1,3,4};
	vector<int> blue={6,9,2,4,5};
	if(classPhotoes(red,blue)==true){
		cout<<"It is possible to take class photoes."<<endl;
	}else{
		cout<<"It is not possible to take class photoes."<<endl;
	}
	



}

