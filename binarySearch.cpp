#include <bits/stdc++.h>
using namespace std;



// time=O(logn) and space=O(logn)

// int binarySearchHelper(vector<int> &v,int target,int left, int right){
// 	if(left>right){
// 		return -1;
// 	}
// 	int mid=(left+right)/2;
// 	if(target==v[mid]){
// 		return mid;
// 	}else if(target>v[mid]){
// 		return binarySearchHelper(v,target,mid+1,right);
// 	}else{
// 		return binarySearchHelper(v,target,left,mid-1);
// 	}

// }


// time=O(logn) and space=O(1)
int binarySearchHelper(vector<int> &v,int target,int left, int right){
	while(left<=right){
		int mid=(left+right)/2;
		if(target==v[mid]){
			return mid;
		}else if(target>v[mid]){
			left=mid+1;
		}else{
			right=mid-1;
		}
	}
	return -1;
}


int binarySearch(vector<int>&v,int target){
	return binarySearchHelper(v,target,0,v.size()-1);
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	vector<int> v={5,6,7,8,9,10};
	cout<<binarySearch(v,11)<<endl;
	



}

