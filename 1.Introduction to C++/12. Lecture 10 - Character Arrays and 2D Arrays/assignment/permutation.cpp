#include<iostream>
#include<cstring>
using namespace std;

/*bool permutation(char str1[], char str2[]){
	int len1 = strlen(str1);
	int array[256];
	int len2 = len1;
	for(int i=0; i<len1; i++){
		int a = str1[i];
		array[a] = array[a] + 1;
	}
	for(int j=0; j<len1; j++){
		int b = str2[j];
		array[b] = array[b] - 1;
	}
	
	for(int k=0; k<256; k++){
		if(array[k] != 0){
			return false;
		}
	}
	return true;
}*/
bool permutation(char str1[], char str2[]){
	int len1 = strlen(str1);
	int sum1=0,sum2 = 0;
	for(int i=0; i<len1; i++){
		int a = str1[i];
		sum1 = sum1 + a; 
	}
	for(int j=0; j<len1; j++){
		int b = str2[j];
		sum2 = sum2 + b;
	}
	if(sum1 == sum2){
		return true;
	}
	else{
		return false;
	}
}
/*
bool permutation(char str1[], char str2[]){
	int len1 = strlen(str1);
	int len2 = len1;
	for(int i=0; i<len1; i++){
		bool ver = false;
		for(int j=0; j<len2; j++){
			if(str1[i] == str2[j]){
				ver = true;
				break;
			}
		}
		if(!ver){
			return false;
		}
	}
	return true;
}*/

int main(){
	char str1[30], str2[30];
	cout<<"Enter the string"<<endl;
	cin>>str1>>str2;
	cout<<permutation(str1,str2);
}
