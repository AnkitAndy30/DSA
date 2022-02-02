#include<iostream>
using namespace std;
#include<queue>
#include"andyTreenode.h"

TreeNode<int>* takeinputlevelwise(){
	cout << "Enter the root data" << endl;
	int data;
	cin >> data;
	TreeNode<int> *root = new TreeNode<int> (data);
	
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter the number of children's for " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter the data for " << i << " th child" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int> (childdata);
			pendingnodes.push(tempnode);
			front->children.push_back(tempnode);
		}
	}
	return root;
}

int countleafnodes(TreeNode<int> *root){
	int count = 0;
	
	if(root == NULL){
		return count;
	}
	if(root->children.size() == 0){
		return 1;
	}
	
	for(int i = 0; i < root->children.size(); i++){
		count = count + countleafnodes(root->children[i]);
	}
	return count;
}

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	int numofleafnodes = countleafnodes(root);
	cout << numofleafnodes << endl;
}
