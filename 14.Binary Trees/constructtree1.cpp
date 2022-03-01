#include<iostream>
#include"BinaryTree.h"
#include<queue>
using namespace std;

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

BinaryTreeNode<int> *buildTreeHelper(int *in, int *post, int inS, int inE, int postS, int postE){
	if(inS > inE){
		return NULL;
	}
	int rootData = post[postE];
	int rootIndex = -1;
	for(int i = inS; i <= inE; i++){
		if(in[i] == rootData){
			rootIndex = i;
			break;
		}
	}
	int lInS = inS;
	int lInE = rootIndex - 1;
	int lPostS = postS;
	int lPostE = lInE - lInS + lPostS;
	int rInS = rootIndex + 1;
	int rInE = inE;
	int rPostS = lPostE + 1;
	int rPostE = postE - 1;
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	root->left = buildTreeHelper(in,post,lInS,lInE,lPostS,lPostE);
	root->right = buildTreeHelper(in,post,rInS,rInE,rPostS,rPostE);
	return root;
}

BinaryTreeNode<int>* buildTree(int *in, int *post, int size){
	return buildTreeHelper(in,post,0,size-1,0,size-1);
}

//2 9 3 6 10 5 
//2 6 3 9 5 10 
 

int main(){
	int post[] = {2, 9, 3, 6, 10, 5};
	int in[] = {2, 6, 3, 9, 5, 10};
	BinaryTreeNode<int> *root = buildTree(in,post,6);
	printTreeLevelWise(root);
}
