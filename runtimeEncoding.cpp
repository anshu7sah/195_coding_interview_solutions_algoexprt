#include <bits/stdc++.h>
using namespace std;


// time=O(n) and space=O(n)
char* runLineEncoding(string &s){
	char* temp = new char[2 * s.length()];
	int j=0;
	int i=1;
	int length=1;
	for(i=1;i<=s.length();i++){
		
		if(s[i]==s[i-1] && length<9 ){
			
				length+=1;
			
		}else if(s[i]!=s[i-1] || length==9){
			
			temp[j++]='0'+length;
				temp[j++]=s[i-1];
				length=1;
		}

	}

	temp[j]='\0';
	return temp;
}







int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	string s="aaaaaaaaaaaabbbb4444555ccc";
	char* result=runLineEncoding(s);
	

	cout<<result<<endl;
	delete[] result;
	



}

