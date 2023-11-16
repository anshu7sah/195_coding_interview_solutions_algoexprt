//bst.h
// #ifndef BST_H
// #define BST_H

class Node{
public:
	Node* left;
	Node* right;
	int data;
	Node(int d);
};

class BST{
public:
	Node* head;
	BST();
	void insert(int data);
	void display(Node* temp);


};
// #endif