#include<iostream>
#include"BinaryTree.h"
#include<queue>
using namespace std;

BinaryTreeNode<int> *takeInputLevelWise(){
	cout << "Enter Root Data " << endl;
	int rootData;
	cin >> rootData;
	BinaryTreeNode<int> *root = new BinaryTreeNode<int> (rootData);
	queue<BinaryTreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		BinaryTreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter left child of " << front->data << endl;
		int leftdata;
		cin >> leftdata;
		if(leftdata != -1){
			BinaryTreeNode<int> *leftnode = new BinaryTreeNode<int> (leftdata);
			front->left = leftnode;
			pendingnodes.push(leftnode);
		}
		
		cout << "Enter right child of " << front->data << endl;
		int rightdata;
		cin >> rightdata;
		if(rightdata != -1){
			BinaryTreeNode<int> *rightnode = new BinaryTreeNode<int> (rightdata);
			pendingnodes.push(rightnode);
			front->right = rightnode;
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

int numofnodes(BinaryTreeNode<int> *root){
	if(root == NULL){
		return 0;
	}
	return 1 + numofnodes(root->left) + numofnodes(root->right);
}

//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int main(){
	BinaryTreeNode<int> *root = takeInputLevelWise();
	printTreeLevelWise(root);
	cout << "Num of nodes : " << numofnodes(root) << endl;
}
