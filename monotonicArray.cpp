#include <bits/stdc++.h>
using namespace std;

// bool monotonicArray(vector<int> &arr){
// 	if(arr.size()<=2){
// 		return true;
// 	}
// 	int direction=arr[0]-arr[1];
// 	for(int i=2;i<arr.size();i++){
// 		if(direction<0){
// 			if(arr[i-1]>arr[i]){
// 				return false;
// 			}
// 		}else if(direction>0){
// 			if(arr[i-1]<arr[i]){
// 				return false;
// 			}
// 		}else{
// 			direction=arr[i-1]-arr[i];
// 		}
// 	}
// 	return true;
// }



// time=O(n) and space=O(1)
bool monotonicArray(vector<int>&arr){

	bool isIncreasing=true;
	bool isDecreasing=true;
	for(int i=1;i<arr.size();i++){
		if(arr[i-1]>arr[i]){
			isIncreasing=false;
		}else if(arr[i-1]<arr[i]){
			isDecreasing=false;
		}
	}
	return isIncreasing or isDecreasing;
}







int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> v={-1,-1,-1,-4,-4,-5,-6};
	

	if(monotonicArray(v)){
		cout<<"Monotonic"<<endl;
	}else{
		cout<<"not monotinic"<<endl;
	}
	



}

