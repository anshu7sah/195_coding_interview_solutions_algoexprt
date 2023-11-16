#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	ll size,sum;
	vector<ll>v;
	map<ll,ll> hash;
	
	cin>>size>>sum;
	for (ll i=0;i<size;i++){
		ll temp;
		cin>>temp;
		v.push_back(temp);
	}
	for (ll i=0;i<size;i++){
		if(hash[sum-v[i]]){
			// cout<<sum-v[i]<<" "<<v[i];
			cout<<hash[sum-v[i]]<<" "<<i+1;
			return 0;
		}else{
			hash[v[i]]=i+1;
		}
	}
	cout<<"-1";

	





}

