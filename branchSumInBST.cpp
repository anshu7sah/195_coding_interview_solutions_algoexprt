#include <bits/stdc++.h>
using namespace std;

// O(n) time | O(n) space
void branchSum(Node* root,int sum,vector<int>&sumArr){
	if(root==nullptr){
		return;
	}
	int newRunningSum=sum+root->data;

	if(root->left==nullptr && root->right==nullptr){
		
		sumArr.push_back(newRunningSum);
		return;
	}
	branchSum(root->left,newRunningSum,sumArr);
	branchSum(root->right,newRunningSum,sumArr);

}








int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	



}

