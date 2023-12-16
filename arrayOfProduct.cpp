#include <bits/stdc++.h>
using namespace std;


// first method is finding product by two loop using bruteforce method
// time will be O(n^2)

// Next method will be finding two array left product and right product
// multiply number of both the array and store in another array to get the product of array.
//time=O(n)

// vector<int> productArray(vector<int>&v){
// 	vector<int>left;
// 	vector<int>right(v.size());
// 	vector<int>temp(v.size());


// 	int product=1;
// 	for(int i=0;i<v.size();i++){
// 		left.push_back(product);
// 		product*=v[i];
// 	}
	
// 	product=1;
// 	for(int i=v.size()-1;i>=0;i--){
// 		right[i]=product;
// 		product *=v[i];
// 	}
	
// 	for(int i=0;i<v.size();i++){
// 		temp[i]=left[i]*right[i];
// 	}


	
// 	return temp;

// }







// time=O(n) and space=O(n)
vector<int> productArray(vector<int>&v){
	vector<int>temp;
	int product=1;
	for(int i=0;i<v.size();i++){
		temp.push_back(product);
		product*=v[i];
	}
	product=1;
	for(int i=v.size()-1;i>=0;i--){
		temp[i]=product*temp[i];
		product=product*v[i];
	}
	
	return temp;

}






int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	vector<int>v={5,1,4,2};
	for(int a:productArray(v)){
		cout<<a<<" ";
	}




}

