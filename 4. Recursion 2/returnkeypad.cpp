#include<iostream>
using namespace std;

string mapping(int num){
	if(num == 2){
		return "abc";
	}
	if(num == 3){
		return "def";
	}
	if(num == 4){
		return "ghi";
	}
	if(num == 5){
		return "jkl";
	}
	if(num == 6){
		return "mno";
	}
	if(num == 7){
		return "pqrs";
	}
	if(num == 8){
		return "tuv";
	}
	if(num == 9){
		return "wxyz";
	}
}

int retkey(int key, string output[]){
	if(key == 0){
		output[0] = "";
		return 1;
	}
	int lastdigit = key%10;
	string temp = mapping(lastdigit);
	int smallnumber = key/10;
	int smallcal = retkey(smallnumber,output);
	/*for(int i = 0; i < (smallcal*(temp.size()-1)); i++){
		output[i + smallcal] = output[i];
		cout<<output[i];
	}*/
	//int k = 0;
	for(int i = 0; i < (temp.length()-1); i++){
		for(int k = 0; k < smallcal/**(i+1)*/; k++){
			output[k + (i+1)*smallcal] = output[k];
		}
	}
	
	int l = 0;
	for(int i = 0; i<temp.length(); i++){
		for(int j = 0 ; j < smallcal ;j++){
			output[l] = temp[i] + output[l];
			l++;
		}
	}
	return (smallcal*temp.length());
}


/*int retkey(int key, string output[]){          mine code ---
	if(key == 0){
		output[0] = "";
		return 1;
	}
	//int lastdigit = key%10;
	int smallnumber = key/10;
	int smallcal = retkey(smallnumber,output);
	string temp = mapping(key%10);
	for(int i = 0; i < (smallcal*(temp.size()-1)); i++){
		output[i + smallcal] = output[i];
		cout<<output[i];
	}
	/*int k = 0;
	for(int i = 0; i < (temp.length()-1); i++){
		for(; k < smallcal; k++){
			output[k + (i+1)*smallcal] = output[k];
		}
	}
	
	int j = 0;
	for(int i = 0; i<temp.length(); i++){
		for( ; j < smallcal*(i+1) ;j++){
			output[j] = temp[i] + output[j];
		}
	}
	return (smallcal * temp.length());    ---except this line  also not perfectly working
}*/


int main(){
	int key;
	cout<<"Enter the key"<<endl;
	cin>>key;
	string output[1000];
	int siz = retkey(key,output);
	for(int i = 0; i < siz; i++){
		cout<<output[i]<<endl;
	}
}
