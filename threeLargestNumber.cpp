#include <bits/stdc++.h>
using namespace std;


void shiftAndUpdate(vector<int> &v,int num,int idx){
	for(int i=0;i<=idx;i++){
		if(i==idx){
			v[i]=num;
		}else{
			v[i]=v[i+1];
		}
	}
}


// time=O(n) and space=O(1)
vector<int> threeLargestNumber(vector<int>& v){

	vector<int>temp={INT_MIN,INT_MIN,INT_MIN};
	for(auto x:v){
		if(temp[2]<x){
			// temp[0]=temp[1];
			// temp[1]=temp[2];
			// temp[2]=x;
			shiftAndUpdate(temp,x,2);
		}else if(temp[1]<x){
			// temp[0]=temp[1];
			// temp[1]=x;
			shiftAndUpdate(temp,x,1);

		}else if(temp[0]<x){
			// temp[0]=x;
			shiftAndUpdate(temp,x,0);

		}
	}
	return temp;

}






int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> v={141,1,17,-7,-27,18,541,8,7,7};
	for(auto x:threeLargestNumber(v)){
		cout<<x<<" ";
	}


	



}

