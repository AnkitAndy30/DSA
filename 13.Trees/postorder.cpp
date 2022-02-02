#include<iostream>
using namespace std;
#include<queue>
#include"andyTreenode.h"

TreeNode<int>* takeinputlevelwise(){
	cout << "Enter root data" << endl;
	int data;
	cin >> data;
	TreeNode<int> *root = new TreeNode<int>(data);
	
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter number of children's of " << front->data << endl;
		int numchild;
		cin >> numchild;
		for(int i = 0; i < numchild; i++){
			cout << "Enter the data for " << i << " th node" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int>(childdata);
			front->children.push_back(tempnode);
			pendingnodes.push(tempnode);
		}
	}
	return root;
}

void postorder(TreeNode<int> *root){
	for(int i = 0; i < root->children.size(); i++){
		postorder(root->children[i]);
	}
	cout << root->data << " ";
}

//  10 3 20 30 40 2 400 50 0 0 0 0 

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	postorder(root);
}
