#include<iostream>
using namespace std;
#include"andyTreenode.h"
#include<queue>
#include<climits>


TreeNode<int> *takeinputlevelwise(){
	cout << "Enter root data" << endl;
	int data;
	cin >> data;
	TreeNode<int> *root = new TreeNode<int>(data);
	
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << "Enter the number of children's of " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter the data for " << i << " th node" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int> (childdata);
			front->children.push_back(tempnode);
			pendingnodes.push(tempnode);
		}
	}
	return root;
} 
 
TreeNode<int>* largestnode(TreeNode<int>* root){
	TreeNode<int>* lnode = root;
	for(int i = 0; i < root->children.size(); i++){
		TreeNode<int>* tempnode = largestnode(root->children[i]);
		if(tempnode->data > lnode->data){
			lnode = tempnode;
		}
	}
	return lnode;
}

TreeNode<int> *seclargest(TreeNode<int> *root, TreeNode<int> *largest){
	TreeNode<int>* ans = root;
	for(int i = 0; i < root->children.size(); i++){
		TreeNode<int>* temp = seclargest(root->children[i], largest);
		if((ans->data < temp->data) && (temp->data < largest->data)){
			ans = temp;
			//cout << ans->data << " " << i << endl;
		}
	}
	return ans;
}

// 10 3 20 40 30 2 40 40 0 1 40 0 1 40 0 0

int main(){
	TreeNode<int>* root = takeinputlevelwise();
	TreeNode<int>* largest = largestnode(root);
	//cout << largest->data << "check " << endl;
	TreeNode<int>* seclarge = seclargest(root,largest);
	cout << seclarge->data << endl;
}
