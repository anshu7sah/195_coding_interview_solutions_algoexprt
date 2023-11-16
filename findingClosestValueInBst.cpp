#include <bits/stdc++.h>
using namespace std;

// recursive solution
//average:-time complexity =O(logn) | O(logn) space
// worst:- time=O(n) | O(n) space
int closestValueInBst(Node* tree,int data){
	return closestValueInBstHelper(tree,data,INT_MAX);
}

int closestValueInBstHelper(Node* tree,int data,int closest){
	if(tree==nullptr){
		return closest;
	}
	if(abs(tree->data-data)<abs(closest-data)){
		closest=tree->data;
	}
	if(data>tree->data){
		return closestValueInBstHelper(tree->right,data,closest);
	}else if(data<tree->data){
		return closestValueInBstHelper(tree->left,data,closest);
	}else{
		return closest;
	}
}



// iterative solution
// average:- O(logn) time and O(1) space
// worst:- O(n) time and O(1) space
int closestValueInBstHelper(Node* tree,int data,int closest){
	Node* current=tree;
	while(current!=nullptr){
		if(abs(current->data-data)<abs(closest-data)){
		closest=current->data;
	}
	if(data>current->data){
		current=current->right;
	}else if(data<current->data){
		current=current->left;
	}else{
		return closest;
	}
	}
	return closest;
}








int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif


	



}

