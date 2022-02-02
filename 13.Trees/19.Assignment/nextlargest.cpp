#include<iostream>
using namespace std;
#include<queue>
#include"andyTreenode.h"
#include<climits>

int nexlarge = INT_MAX;

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
		cout << "Enter the number of nodes for " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
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

int nextlargerfind(TreeNode<int>* root, int k){
	for(int i = 0; i < root->children.size(); i++){
		int nexlarge = nextlargerfind(root->children[i],k);
	}
	
	if(k < root->data && root->data < nexlarge){
		nexlarge = root->data;
	}
	return nexlarge;
}

// 20 3 19 30 40 2 40 50 0 0 0 0 

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	cout << "Enter the number you want to find the next largest for" << endl;
	int k;
	cin >> k;
	int nextlarger = nextlargerfind(root,k);
	if(nextlarger == INT_MAX){
		cout << " " << endl;
	}
	else{
		cout << nextlarger << endl;
	}
}
