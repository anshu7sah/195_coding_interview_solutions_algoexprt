#include <bits/stdc++.h>
using namespace std;

bool validatingBstHelper(Node *tree,int min,int max){
	if(tree==nullptr){
		return true;
	}
	if(tree->data<min && tree->data>=max){
		return false;
	}
	bool leftIsValid=validatingBstHelper(tree->left,min,tree->data);
	bool rightIsValid=validatingBstHelper(tree->right,tree->data,max);
	return leftIsValid and rightIsValid;

}


bool validatingBst(Node *tree){
	return validatingBstHelper(tree,INT_MIN,INT_MAX);
}



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	



}

