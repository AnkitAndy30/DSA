#include<iostream>
using namespace std;

int flags(int input,string input1,string output,int output1){
	if(output.length() == input){
		cout<<output<<endl;
		return ++output1;
	}
	if(output.length() == 0){
		output1 = flags(input,input1,output + input1[0],output1);
		output1 = flags(input,input1,output + input1[2],output1);
	}
	if(output[output.length()-1] == 'W'){
		if(output.length() != input-1){
			output1 = flags(input,input1,output + input1[1],output1);
		}
		output1 = flags(input,input1,output + input1[2],output1);
	}
	if(output[output.length()-1] == 'B'){
		if(output[output.length() - 2] == 'W'){
			output1 = flags(input,input1,output + input1[2],output1);
		}
		else{
			output1 = flags(input,input1,output + input1[0],output1);
		}
	}
	if(output[output.length() - 1] == 'R'){
		output1 = flags(input,input1,output + input1[0],output1);
		if(output.length() != input-1){
			output1 = flags(input,input1,output + input1[1],output1);
		}
	}
	return output1;
}

int main(){
	int input;
	cout<<"Enter number of stripes"<<endl;
	cin>>input;
	string input1 = "WBR";
	string output = "";
	int output1 = 0;
	cout<<flags(input,input1,output,output1)<<endl;
}
