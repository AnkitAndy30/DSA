#include<iostream>
using namespace std;
#include<queue>
#include"andyTreenode.h"

int countnodes(TreeNode<int> *root){
	int count = 1;
	for(int i = 0; i < root->children.size(); i++){
		count = count + countnodes(root->children[i]);
	}
	return count;
}

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
		cout << "Enter the numberof children's for " << front->data << endl;
		int numchild;
		cin >> numchild;
		for(int i = 0; i < numchild; i++){
			cout << "Enter the data for " << i <<" th child"<< endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempchild = new TreeNode<int> (childdata);
			front->children.push_back(tempchild);
			pendingnodes.push(tempchild);
		}
	}
	return root;
}

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	int numofnodes = countnodes(root);
	cout << numofnodes << endl;
}
