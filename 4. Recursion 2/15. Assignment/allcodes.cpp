#include<iostream>
using namespace std;

/*string func(char input){
	if(input == '1'){
		return "a";
	}
	if(input == '2'){
		return "b";
	}
	if(input == '3'){
		return "c";
	}
	if(input == '4'){
		return "d";
	}
	if(input == '5'){
		return "e";
	}
	if(input == '6'){
		return "f";
	}
	if(input == '7'){
		return "g";
	}
	if(input == '8'){
		return "h";
	}
	if(input == '9'){
		return "i";
	}
}

string funct(int input){
	if(input == 10){
		return "j";
	}
	if(input == 11){
		return "k";
	}
	if(input == 12){
		return "l";
	}
	if(input == 13){
		return "m";
	}
	if(input == 14){
		return "n";
	}
	if(input == 15){
		return "o";
	}
	if(input == 16){
		return "p";
	}
	if(input == 17){
		return "q";
	}
	if(input == 18){
		return "r";
	}
	if(input == 19){
		return "s";
	}
	if(input == 20){
		return "t";
	}
	if(input == 21){
		return "u";
	}
	if(input == 22){
		return "v";
	}
	if(input == 23){
		return "w";
	}
	if(input == 24){
		return "x";
	}
	if(input == 25){
		return "y";
	}
	if(input == 26){
		return "z";
	}
}*/

char mapping(int x){
	return ('a' + x -1);
}

void allcodes(string input,string output){
	/*if(input.length() == 1){
		output[0] = func(input[0]);
		return 1;
	}*/
	if(input.length() == 0){
		cout<<output<<endl;
		return;
	}
	char ch1 = mapping(input[0] - '0'); 
	allcodes(input.substr(1),output + ch1);
	if(input.length() >= 2 && input <= "26"){
		int temp = ((input[0] - '0')*10) + (input[1] - '0');
		char ch2 = mapping(temp);
		allcodes(input.substr(2),output + ch2);
	}
	return;
}

/*int allcodes(string input,string output[]){
	if(input.length() == 1){
		output[0] = func(input[0]);
		return 1;
	}
	if(input.length() == 0){
		return 0;
	}
	int all_codes = allcodes(input.substr(1),output);
	for(int i = 0; i <= all_codes; i++){
		output[i] = func(input[0]) + output[i];
		//cout<<output[i]<<" check"<<endl;
	}
	//if(input.length() >= 2 && input <= "26"){
		int all_codes1 = allcodes(input.substr(2),output);
		int temp = ((input[0] - '0')*10) + (input[1] - '0');
		for(int i = all_codes+1; i <= all_codes1 + all_codes + 1; i++){
			output[i] = funct(temp) + output[i];
			//cout<<output[i]<<" check1"<<endl;
		}
		return(all_codes + all_codes1 + 2);
	//}
	//return all_codes;
}*/

int main(){
	string input;
	cout<<"Enter the numeric string"<<endl;
	cin>>input;
	string output;
	allcodes(input,output);
}
