#include <bits/stdc++.h>
using namespace std;

// time=O(N) and space=O(N)
// vector<int> spiralTraversal(vector<vector<int>>&matrix){
		// int srow=0;
        // int scol=0;
        // int erow=matrix.size()-1;
        // int ecol=matrix[0].size()-1;
        // vector<int>temp;
	    // while((srow<=erow) and (scol<=ecol)){
        //     for(int i=scol;i<=ecol;i++){
        //         temp.push_back(matrix[srow][i]);
        //     }
        //     for(int i=srow+1;i<=erow;i++){
        //         temp.push_back(matrix[i][ecol]);
        //     }
        //     if((srow!=erow) ){
        //     	for(int i=ecol-1;i>=scol;i--){
        //         	temp.push_back(matrix[erow][i]);
        //     	}
           
        //     }
        //     if((scol!=ecol)){
        //         for(int i=erow-1;i>=srow+1;i--){
        //         	temp.push_back(matrix[i][scol]);
        //     	}
        //     }
        //     srow++;
        //     erow--;
        //     scol++;
        //     ecol--;
	    // }
	    // return temp;
// }

// time=O(N) and space=O(N)
void spiralFill(vector<vector<int>>matrix,int srow,int erow,int scol,int ecol,vector<int>&temp){
	if((srow>erow) || (scol>ecol)){
		return;
	}
	for(int i=scol;i<=ecol;i++){
			temp.push_back(matrix[srow][i]);
	}
	for(int i=srow+1;i<=erow;i++){
		temp.push_back(matrix[i][ecol]);
	}
	for(int i=ecol-1;i>=scol;i--){
		temp.push_back(matrix[erow][i]);
	}
	for(int i=erow-1;i>=srow+1;i--){
		temp.push_back(matrix[i][scol]);
	}

	spiralFill(matrix,srow+1,erow-1,scol+1,ecol-1,temp);
}


vector<int> spiralTraversal(vector<vector<int>>&matrix){

	vector<int>temp;

	spiralFill(matrix,0,matrix.size()-1,0,matrix[0].size()-1,temp);
	return temp;
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<vector<int>> s={{1,2,3,4},{12,13,14,5},{11,16,15,6},{10,9,8,7}};
	for(int a:spiralTraversal(s)){
		cout<<a<<" ";
	}
	



}

