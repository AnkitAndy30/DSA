#include<iostream>
using namespace std;
#include"andyTreenode.h"
#include<queue>

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
		cout << "Enter number of children's for " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter the data for " << i << " th child" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int>(childdata);
			pendingnodes.push(tempnode);
			front->children.push_back(tempnode);
		}
	} 
	return root;
}

void replacenodewithdepth(TreeNode<int> *root,int k){
	root->data = k;
	for(int i = 0; i < root->children.size(); i++){
		replacenodewithdepth(root->children[i],k+1);
	}
}

void printtreelevelwise(TreeNode<int> *root){
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << front->data << ": ";
		for(int i = 0; i < front->children.size(); i++){
			cout << front->children[i]->data << ",";
			pendingnodes.push(front->children[i]);
		}
		cout<<endl;
	}
}

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	int k = 0;
	replacenodewithdepth(root,k);
	printtreelevelwise(root);
}
