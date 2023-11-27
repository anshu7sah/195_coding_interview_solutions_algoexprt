#include <bits/stdc++.h>
using namespace std;



// time=O(n^2) and space=O(1)
void bubbleSort(vector<int>&v){
    bool isSorted=false;
    int counter=0;
    while(!isSorted){
        isSorted=true;
        for(int i=0;i<v.size()-1-counter;i++){
            if(v[i]>v[i+1]){
                int temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
                isSorted=false;
            }

        }
        counter+=1;
    }

}





int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    vector<int> x={5,3,8,1,0,4};
    bubbleSort(x);
    for(int y:x){
        cout<<y<<" ";
    }
    



}

