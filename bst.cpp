#include "bst.h"
#include <bits/stdc++.h>

using namespace std;

Node::Node(int d):data(d),left(nullptr),right(nullptr){}

BST::BST():head(nullptr){}

void BST::insert(int data){
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

void BST::display(Node* temp){
	if (temp != nullptr) {
            display(temp->left);
            cout << temp->data << " ";
            display(temp->right);
        }
}