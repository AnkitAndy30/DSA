#include<iostream>
#include"BinaryTree.h"
#include<queue>
using namespace std;

BinaryTreeNode<int> *takeinputlevelwise(){
	cout << "Enter root data " << endl;
	int rootdata;
	cin >> rootdata;
	BinaryTreeNode<int> *root = new BinaryTreeNode<int> (rootdata);
	
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
			pendingnodes.push(leftnode);
			front->left = leftnode;
		}
		
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


bool findnode(BinaryTreeNode<int> *root,int k){
	if(root->data == k){
		return true;
	}
	else if((root->left == NULL) || (root->right == NULL)){
		return false;
	}
	
	bool leftc = findnode(root->left,k);
	bool rightc = findnode(root->right,k);
	if(leftc || rightc){
		return true;
	}
	return false;
}


int main(){
	BinaryTreeNode<int> *root = takeinputlevelwise();
	int k;
	cout << "Enter the integer you want to find" << endl;
	cin >> k;
	bool node = findnode(root,k);
	cout << node << endl;
	//printtreelevelwise(root);
}
