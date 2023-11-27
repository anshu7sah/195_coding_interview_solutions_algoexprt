#include <bits/stdc++.h>
using namespace std;


// time=O(n) and space=O(n)
string ceasercipher(string &s,int key){
	string newStr="";
	for(auto a:s){
		if((a+key)>122){
			newStr+=(96+(a+key)%122);
		}else{
			newStr+=(a+key);
		}
	}
	return newStr;
}





int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string a="anshu";
	
	cout<<ceasercipher(a,2)<<endl;
	



}


