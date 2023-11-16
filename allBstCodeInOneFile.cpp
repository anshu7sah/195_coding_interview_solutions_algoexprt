#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    Node* left;
    Node* right;
    int data;

    Node(int d) : data(d), left(nullptr), right(nullptr) {}
};

class BST {
public:
    Node* head;

    BST() : head(nullptr) {}

    void insert(int data) {
    	// average time complexity is O(log(n)) and space O(1)
    	// worst case: time-> O(n) and space->O(1)
        if (head == nullptr) {
            head = new Node(data);
        } else {
            Node* temp = head;
            while (true) {
                if (data < temp->data) {
                    if (temp->left == nullptr) {
                        temp->left = new Node(data);
                        break;
                    } else {
                        temp = temp->left;
                    }
                } else {
                    if (temp->right == nullptr) {
                        temp->right = new Node(data);
                        break;
                    } else {
                        temp = temp->right;
                    }
                }
            }
        }
    }

    bool contains(int data){
    	Node* temp=head;
    	while(temp!=nullptr){
    		if(data<temp->data){
    			temp=temp->left;
    		}else if (data>temp->data){
    			temp=temp->right;
    		}else{
    			return true;
    		}
    	}
    	return false;
    }

      Node* findMin(Node* root) {
        while (root->left != nullptr) {
            root = root->left;
        }
        return root;
    }

    void deleteNode(int data){
    	Node* temp=head;
    	Node* parent=nullptr;
    	while(temp!=nullptr){
    		if(data<temp->data){
    			parent=temp;
    			temp=temp->left;
    		}else if(data>temp->data){
    			parent=temp;
    			temp=temp->right;
    		}else{
    			if(temp->left==nullptr && temp->right==nullptr){
    				if (parent == nullptr) {
                        head = nullptr;
                    } else if (temp == parent->left) {
                        parent->left = nullptr;
                    } else {
                        parent->right = nullptr;
                    }
                    delete temp;
                    break;
    			}else if(temp->left==nullptr && temp->right!=nullptr){
    				if (parent == nullptr) {
                        head = temp->right;
                    } else if (temp == parent->left) {
                        parent->left = temp->right;
                    } else {
                        parent->right = temp->right;
                    }
                    delete temp;
                    break;
    			}else if(temp->right==nullptr && temp->left!=nullptr){
    				if (parent == nullptr) {
                        head = temp->left;
                    } else if (temp == parent->left) {
                        parent->left = temp->left;
                    } else {
                        parent->right = temp->left;
                    }
                    delete temp;
                    break;
    			}else{
    				Node* successor = findMin(temp->right);
                    temp->data = successor->data;
                    deleteNode(successor->data);
    			}
    		}	
    	}
    }

    void display(Node* temp) {
        if (temp != nullptr) {
            display(temp->left);
            cout << temp->data << " ";
            display(temp->right);
        }
    }
   
};
int nodeDepthsRecur(Node* root,int depth=0){
    if(root==nullptr){
        return 0;
    }
    return depth+nodeDepthsRecur(root->right,depth+1)+nodeDepthsRecur(root->left,depth+1);
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    BST a;
    a.insert(10);
    a.insert(5);
    a.insert(12);
    a.insert(14);
    a.insert(11);
    a.insert(4);
    a.insert(6);
    a.insert(3);
    a.insert(16);
    a.insert(13);
    a.insert(18);
    
    a.display(a.head);
    cout<<endl;
    // a.deleteNode(7);
    // a.display(a.head);
    cout<<endl;
    
    cout<<nodeDepthsRecur(a.head)<<endl;



    // if(a.contains(15)){
    // 	cout<<"value is in the tree"<<endl;
    // }else{
    // 	cout<<"value is not in the tree"<<endl;
    // }

    return 0;
}
