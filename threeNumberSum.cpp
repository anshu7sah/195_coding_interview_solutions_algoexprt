#include <bits/stdc++.h>
using namespace std;
#define ll long long


string getIndex(vector<ll> v, ll K)
{
    auto it = find(v.begin(), v.end(), K);
  
    // If element was found
    if (it != v.end()) 
    {
      
        // calculating the index
        // of K
        ll index = it - v.begin();
       return to_string(index + 1);;
    }
    else {
        return "-1";
    }
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll size,target;

	cin>>size>>target;

	vector<ll>v(size);
	vector <ll> w(size);

	for (ll i=0;i<size;i++){
		
		ll temp;
		cin>>temp;
		v[i]=temp;
		w[i]=temp;
	}
	sort(v.begin(),v.end());

	for (ll i=0;i<size-2;i++){
		ll left=i+1;
		ll right=size-1;
		while(left<right){
			ll sum=v[i]+v[left]+v[right];
		if(sum==target){
			cout<<getIndex(w,v[i])<<" "<<getIndex(w,v[left])<<" "<<getIndex(w,v[right]);
			return 0;
		}else if(sum>target){
			right-=1;
		}else{
			left+=1;
			}	
		}
	}
	cout<<"-1";
	return 0;

	



}

