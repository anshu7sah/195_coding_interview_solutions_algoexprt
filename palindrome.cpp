#include <bits/stdc++.h>
using namespace std;


// time=O(n^2) and space=O(n)
// bool palindrome(string &s){
// 	string n="";
// 	for(int i=s.length()-1;i>=0;i--){
// 		n+=s[i];
// 	}
	
// 	if(s==n){
// 		return true;
// 	}else{
// 		return false;
// 	}

// }


// time=O(n) and space=O(n)
// bool palindrome(string &s){
// 	char n[s.length()];
// 	for(int i=s.length()-1;i>=0;i--){
// 		n[s.length()-1-i]=s[i];
// 	}
// 	n[s.length()]='\0';
	
// 	if(s==n){
// 		return true;
// 	}else{
// 		return false;
// 	}
	

// }



// time=O(n) and space=O(n)
// bool palindrome(string &s,int i=0){
// 	int j=s.length()-1-i;
// 	if(i<j){
// 		return s[i]==s[j] and palindrome(s,i+1);
// 	}else{
// 		return true;
// 	}
// }

// time=O(n) and space=O(n)
// tail recurrsion
// bool palindrome(string &s,int i=0){
// 	int j=s.length()-1-i;
// 	if(i>=j){
// 		return true;
		
// 	}else if(s[i]!=s[j]){
// 		return false;
// 	}else{
// 		return palindrome(s,i+1);
// 	}
// }


// time=O(n) and space=O(1)
bool palindrome(string &s){
	int i=0;
	int j=s.length()-1;
	while(i<j){
		if(s[i]!=s[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}









int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	string s="abccb";

	if(palindrome(s)){
		cout<<"string is palindrome";
	}else{
		cout<<"string is not palindrome";
	}
	



}

