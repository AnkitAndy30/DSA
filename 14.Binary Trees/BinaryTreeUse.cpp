#include<iostream>
#include"BinaryTree.h"
#include<queue>
using namespace std;

BinaryTreeNode<int> *takeInputLevelWise(){
	cout << "Enter root data" << endl;
	int rootData;
	cin >> rootData;
	BinaryTreeNode<int> *root = new BinaryTreeNode<int> (rootData);
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		BinaryTreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftChilddata;
		cin >> leftChilddata;
		if(leftChilddata != -1){
			BinaryTreeNode<int> *leftnode = new BinaryTreeNode<int> (leftChilddata);
			front->left = leftnode;
			pendingnodes.push(leftnode);
		}
		
		cout << "Enter right child of " << front->data << endl;
		int rightChilddata;
		cin >> rightChilddata;
		if(rightChilddata != -1){
			BinaryTreeNode<int> *rightnode = new BinaryTreeNode<int> (rightChilddata);
			front->right = rightnode;
			pendingnodes.push(rightnode);
		}
	}
	return root;
}

void printTreeLevelWise(BinaryTreeNode<int> *root){
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		BinaryTreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << front->data << ": ";
		if(front->left != NULL){
			cout << "L " << front->left->data << " , ";
			pendingnodes.push(front->left);
		}
		
		if(front->right != NULL){
			cout << "R " << front->right->data;
			pendingnodes.push(front->right); 
		}
		cout << endl;
	}
}

void printtree(BinaryTreeNode<int>* root){
	if(root == NULL){
		return;
	}
	cout << root->data << ": ";
	if(root->left != NULL){
		cout << "L " << root->left->data<< " , ";
	}
	if(root->right != NULL){
		cout << "R " << root->right->data;
	}
	cout << endl;
	printtree(root->left);
	printtree(root->right); 
}

BinaryTreeNode<int>* takeInput(){
	int data;
	cout << "Enter data" << endl;
	cin >> data;
	if(data == -1){
		return NULL;
	}
	BinaryTreeNode<int> *root = new BinaryTreeNode<int> (data);
	root->left = takeInput();
	root->right = takeInput();
	return root;
}

int main(){
	/*BinaryTreeNode<int> *root = BinaryTreeNode<int> (1);
	BinaryTreeNode<int> *node1 = BinaryTreeNode<int> (2);
	BinaryTreeNode<int> *node2 = BinaryTreeNode<int> (3);
	root->left = node1;
	root->right = node2;
	*/
	
	BinaryTreeNode<int> *root = takeInputLevelWise();
	printTreeLevelWise(root);
}
