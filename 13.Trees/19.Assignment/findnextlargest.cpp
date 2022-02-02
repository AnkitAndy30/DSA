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
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter the data of " << i << " th child" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int> (childdata);
			pendingnodes.push(tempnode);
			front->children.push_back(tempnode);
		}
	}
	return root;
}

int findnextlarger(TreeNode<int> *root, int k){
	int ans;
	if(root->data < k){
		ans = NULL;
	}
	else{
		ans = root->data;
	}
	for(int i = 0; i < root->children.size(); i++){
		int temp = findnextlarger(root->children[i],k);
		if(ans == NULL){
			ans = temp;
		}
		else if(ans > temp){
			ans = temp;
		}
	}
	return ans;
}

// 10 3 5 6 12 2 9 8 2 100 3 0 0 0 0 0 

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	cout << "Enter the number you want to find the next largest" << endl;
	int k;
	cin >> k;
	int nextlarger = findnextlarger(root,k);
	cout << nextlarger << endl;
}
