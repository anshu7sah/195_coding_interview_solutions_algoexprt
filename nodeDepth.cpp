#include <bits/stdc++.h>
using namespace std;

// time=O(N) and space=O(h) | O(logn)
// iterative method
int nodeDepths(Node* root){
	int sumOfDepths=0;
	stack<pair<Node*,int>> s;
	s.push(make_pair(root,0));
	while(!s.empty()){

		pair<Node*,int> p=s.top();
		s.pop();
		if(p.first==nullptr){
			continue;
		}
		sumOfDepths+=p.second;

		s.push(make_pair(p.first->left,p.second+1));
		s.push(make_pair(p.first->right,p.second+1));

	}
	return sumOfDepths;
}




// O(n) time and O(h) space
int nodeDepthsRecur(Node* root,int depth=0){
	if(root==nullptr){
		return 0;
	}
	return depth+nodeDepthsRecur(root->right,depth+1)+nodeDepthsRecur(root->left,depth+1);
}

















int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	



}

