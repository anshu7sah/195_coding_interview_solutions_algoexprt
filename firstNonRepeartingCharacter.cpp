#include <bits/stdc++.h>
using namespace std;


// time=O(n^2) and space=O(1)
// int firstNonRepeatingCharacter(string &s){
// 	for(int i=0;i<s.length();i++){
// 		bool foundDuplicate=false;
// 		for(int j=0;j<s.length();j++){
// 			if(s[i]==s[j] and i!=j){
// 				foundDuplicate=true;
// 			}
// 		}
// 		if(!foundDuplicate){
// 			return i;
// 		}
// 	}
// 	return -1;
// }


// time=O(n) and space=O(1)
int firstNonRepeatingCharacter(string &s){
	map<char,int> freq;
	for(auto a:s){
		if(freq[a]){
			freq[a]+=1;
		}else{
			freq[a]=1;
		}
	}
	for(int i=0;i<s.length();i++){
		if(freq[s[i]]==1){
			return i;
		}
	}
	return -1;
}







int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s="abccdda";
	int idx=firstNonRepeatingCharacter(s);
	if(idx!=-1){
		cout<<s[idx]<<endl;
	}else{
		cout<<idx<<endl;
	}
	



}

