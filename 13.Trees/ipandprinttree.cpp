#include<iostream>
using namespace std;
#include"andyTreenode.h"
#include<queue>

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
		cout << "Enter number of childrens of: " << front->data << endl;
		int numofchild;
		cin >> numofchild;
		for(int i = 0; i < numofchild; i++){
			cout << "Enter data of " << i << " th child" << endl;
			int childdata;
			cin >> childdata;
			TreeNode<int> *childnode = new TreeNode<int> (childdata);
			front->children.push_back(childnode);
			pendingnodes.push(childnode);
		}
	} 
	return root;
}

TreeNode<int>* takeinput(){
	cout << "Enter the data: " << endl;
	int data;
	cin >> data;
	TreeNode<int> *root = new TreeNode<int> (data);
	cout << "Enter the number of childrens: " << endl;
	int number;
	cin >> number;
	
	for(int i = 0; i < number; i++){
		TreeNode<int> *tempnode = takeinput();
		root->children.push_back(tempnode);
	} 
	return root;
}

void print(TreeNode<int> *root){
	cout << root->data << ":";
	for(int i = 0; i < root->children.size(); i++){
		cout << root->children[i]->data << ",";
	}
	cout << endl;
	for(int i = 0; i < root->children.size(); i++){
		print(root->children[i]);
	}
}

void printlevelwise(TreeNode<int> *root){
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
	printlevelwise(root);
}
