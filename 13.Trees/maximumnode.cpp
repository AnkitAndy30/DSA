#include<iostream>
using namespace std;
#include<queue>
#include"andyTreenode.h"

TreeNode<int>* takeinputlevelwise(){
	cout << "Enter root data" << endl;
	int data;
	cin >> data;
	TreeNode<int> *root = new TreeNode<int> (data);
	
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter number of children of " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter the data for the " << i << " th child" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int> (childdata);
			pendingnodes.push(tempnode);
			front->children.push_back(tempnode);
		}
	}
	return root;
}

int maxnode(TreeNode<int>* root){
	int maxdata = root->data;
	for(int i = 0; i < root->children.size(); i++){
		int maxd = maxnode(root->children[i]);
		if(maxd > maxdata){
			maxdata = maxd;
		}
	}
	return maxdata;
}

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	int maximum = maxnode(root);
	cout << maximum;
}
