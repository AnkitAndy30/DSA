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

BinaryTreeNode<int> *buildTreeHelper(int *in, int *pre, int inS, int inE, int preS, int preE){
	if(inS > inE){
		return NULL;
	}
	int rootData = pre[preS];
	int rootIndex = -1;
	for(int i = inS; i <= inE; i++){
		if(in[i] == rootData){
			rootIndex = i;
			break;
		}
	}
	int lInS = inS;
	int lInE = rootIndex - 1;
	int lPreS = preS + 1;
	int lPreE = lInE - lInS + lPreS;
	int rInS = rootIndex + 1;
	int rInE = inE;
	int rPreS = lPreE + 1;
	int rPreE = preE;
	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
	root->left = buildTreeHelper(in,pre,lInS,lInE,lPreS,lPreE);
	root->right = buildTreeHelper(in,pre,rInS,rInE,rPreS,rPreE);
	return root;
}

BinaryTreeNode<int>* buildTree(int *in, int *pre, int size){
	return buildTreeHelper(in,pre,0,size-1,0,size-1);
}

//5 6 2 3 9 10 
//2 6 3 9 5 10 

int main(){
	int pre[] = {5, 6, 2, 3, 9, 10};
	int in[] = {2, 6, 3, 9, 5, 10};
	BinaryTreeNode<int> *root = buildTree(in,pre,6);
	printTreeLevelWise(root);
}
