#include <bits/stdc++.h>
using namespace std;

// time=O(nlogn+mlogm) and space=O(1)
vector<int> smallestDifference(vector<int>&first,vector<int>&second){
	sort(first.begin(),first.end());
	sort(second.begin(),second.end());
	int idx1=0;
	int idx2=0;
	vector<int> temp;
	int smallest=INT_MAX;
	int current=INT_MAX;
	while(idx1<first.size() and idx2<second.size()){
		int firstNum=first[idx1];
		int secondNum=second[idx2];
		if(firstNum<secondNum){
			current=secondNum-firstNum;
			idx1++;
		}else if(secondNum<firstNum){
			current=firstNum-secondNum;
			idx2++;
		}else{
			temp={firstNum,secondNum};
			return temp;
		}
		if(current<smallest){
			smallest=current;

			temp={firstNum,secondNum};
			
		}


	}
	return temp;

}







int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	vector<int> first={-1,5,10,20,28,3};
	vector<int> second={26,134,135,15,17};


	for(int a:smallestDifference(first,second)){
		cout<<a<<" ";
	}

	



}

