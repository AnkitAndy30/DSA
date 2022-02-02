#include<iostream>
using namespace std;
#include<queue>
#include"andyTreenode.h"

TreeNode<int>* takeinputlevelwise(){
	cout << "Enter the root data" << endl;
	int data;
	cin >> data;
	TreeNode<int> *root  = new TreeNode<int>(data);
	
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter the number of children's of " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter the data for " << i << " th child" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempchild = new TreeNode<int> (childdata);
			front->children.push_back(tempchild);
			pendingnodes.push(tempchild);
		}  
	}
	return root;
}

int sumnodes(TreeNode<int> *root){
	int sum = root->data;
	for(int i = 0; i < root->children.size(); i++){
		sum = sum + sumnodes(root->children[i]);
	}
	return sum;
}

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	int sumofnodes = sumnodes(root);
	cout << sumofnodes << endl;
}
