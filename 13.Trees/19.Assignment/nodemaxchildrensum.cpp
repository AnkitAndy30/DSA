#include<iostream>
using namespace std;
#include"andyTreenode.h"
#include<queue>

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
		cout << "Enter number of children's for " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter data for " << i << " th children" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *tempnode = new TreeNode<int>(childdata);
			pendingnodes.push(tempnode);
			front->children.push_back(tempnode);
		}
	}
	return root;
}

void printlevelwise(TreeNode<int> *root){
	queue<TreeNode<int>*> pendingnodes;
	pendingnodes.push(root);
	
	while(pendingnodes.size() != 0){
		TreeNode<int> *front = pendingnodes.front();
		pendingnodes.pop();
		cout << front->data << ": ";
		for(int i = 0; i < root->children.size(); i++){
			cout << front->children[i] << ", ";
			pendingnodes.push(front->children[i]);
		}
		cout << endl;
	}
}

TreeNode<int> *nodewithmaxsum(TreeNode<int> *root){
	int sum = root->data;
	TreeNode<int> *nodewmaxsum = root;
	for(int i = 0; i < root->children.size(); i++){
		sum = sum + root->children[i]->data;
	}
	TreeNode<int> *tempnodewmaxsum = root;
	for(int i = 0; i < root->children.size(); i++){
		tempnodewmaxsum = nodewithmaxsum(root->children[i]);
		int tempsum = tempnodewmaxsum->data;
		for(int i = 0; i < tempnodewmaxsum->children.size(); i++){
			tempsum = tempsum + tempnodewmaxsum->children[i]->data;
		}
		if(tempsum > sum){
			sum = tempsum;
			nodewmaxsum = tempnodewmaxsum;
		}
	}
	int tempsum = tempnodewmaxsum->data;
	for(int i = 0; i < tempnodewmaxsum->children.size(); i++){
		tempsum = tempsum + tempnodewmaxsum->children[i]->data;
	}
	if(tempsum > sum){
		sum = tempsum;
		nodewmaxsum = tempnodewmaxsum;
	}
	return nodewmaxsum;
}

//5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0

int main(){
	TreeNode<int> *root = takeinputlevelwise();
	TreeNode<int> *nodewmaxsum = nodewithmaxsum(root);
	cout << nodewmaxsum->data << endl;
}
