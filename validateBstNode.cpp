#include <bits/stdc++.h>
using namespace std;


    bool validateBinaryTreeNodes(int n, vector<int>& leftChild, vector<int>& rightChild) {
         vector<int>numOccurance(n,0);
        unordered_map<int,vector<int>>adj;
        for(int i=0;i<n;i++){
            if(leftChild[i]!=-1){
                adj[i].push_back(leftChild[i]);
                numOccurance[leftChild[i]]++;
                if(numOccurance[leftChild[i]]>1){
                    return false;
                }
                
            }
            
            if(rightChild[i]!=-1){
                adj[i].push_back(rightChild[i]);
                numOccurance[rightChild[i]]++;
                if(numOccurance[rightChild[i]]>1){
                    return false;
                }
                
            }

        }
        int root = -1;
        for (int i = 0; i < n; ++i) {
            if (numOccurance[i] == 0) {
                if (root != -1)
                    return false;
                root = i;
            }
        }
        if(root==-1){
            return false;
        }

        //bfs
        queue<int>que;
        int count=0;
        vector<bool>visited(n,false);
        que.push(root);
        count=1;
        visited[root]=true;
        while(!que.empty()){
            int node=que.front();
            que.pop();
            for(int &a:adj[node]){
                if(!visited[a]){
                    visited[a]=true;
                    count++;
                    que.push(a);
                }
            }
        }
        
        return count==n;

        
        
    }




int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // vector<int> leftChild = {1, 0, 3, -1};
    vector<int> leftChild = {1,-1,3,-1};

    // vector<int> rightChild = {-1, -1, -1, -1};
    vector<int> rightChild = {2,-1,-1,-1};
    
    int n = 4;
    bool result = validateBinaryTreeNodes(n, leftChild, rightChild);
    std::cout << "Result: " << result << std::endl;

    return 0;
    



}


