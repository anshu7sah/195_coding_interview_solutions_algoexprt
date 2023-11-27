#include <bits/stdc++.h>
using namespace std;


// time=O(c+d) and space=O(c)
bool generateDocument(string &characters,string &document){
    map<char,int> freq;
    for(auto c:characters){
        if(freq[c]){
            freq[c]+=1;
        }else{
            freq[c]=1;
        }
    }
    for(auto d:document){
        if(freq[d]){
            freq[d]-=1;
        }else{
            return false;
        }
    }
    return true;


}



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string document="abcdd";
    string characters="abcd";
    if(generateDocument(characters,document)){
        cout<<"Document can be made"<<endl;
    }else{
        cout<<"Document can not be made"<<endl;
    }
    



}

