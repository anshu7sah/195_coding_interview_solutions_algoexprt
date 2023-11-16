#include <bits/stdc++.h>
using namespace std;


// time=O(nlogn) and space=O(1)

int minimum_waiting_time(vector<int>&queries){
    sort(queries.begin(),queries.end());
    int totalWaitingTime=0;
    int size=queries.size();
    for(int i=0;i<size;i++){
        totalWaitingTime=totalWaitingTime+queries[i]*(size-(i+1));
    }
    return totalWaitingTime;
}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int>v={3,2,1,2,6};

    cout<<minimum_waiting_time(v)<<endl;

    



}

