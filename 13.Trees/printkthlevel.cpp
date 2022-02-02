#include<iostream>
using namespace std;
#include<queue>
#include"andyTreenode.h"

TreeNode<int>* takeinputlevelwise(){
	cout << "Enter the root data" << endl;
	int data;
	cin >> data;
	TreeNode<int> *root = new TreeNode<int>(data);
	
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter number of children's for " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0 ; i < numofchild; i++){
			cout << "Enter the data for " << i << " th node" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int> (childdata);
			pendingnodes.push(tempnode);
			front->children.push_back(tempnode);
		}
	}
	return root;
}

void printkthlevel(TreeNode<int> *root, int k){
	if(root == NULL){
		return;
	}
	if(k == 0){
		cout << root->data << " ";
	}
	
	for(int i = 0; i < root->children.size(); i++){
		printkthlevel(root->children[i],k-1);
	}
}

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	cout << "Enter the number of level you want to print" << endl;
	int k;
	cin >> k;
	printkthlevel(root,k);
}
