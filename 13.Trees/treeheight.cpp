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
		cout << "Enter number of children's for " << front->data << endl;
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

int treeheight(TreeNode<int> *root){
	int tempheight = 1;
	int realheight = 1;
	for(int i = 0; i < root->children.size(); i++){
		tempheight = tempheight + treeheight(root->children[i]);
		if(realheight < tempheight){
			realheight = tempheight;
			tempheight = 1;
		} 
	}
	return realheight;
}

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	int height = treeheight(root);
	cout << height << endl;
}
