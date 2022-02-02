#include<iostream>
using namespace std;
#include<string>

int main(){
	string input;
	cin >> input;
	int size = input.size();
	for(int i = 0; i < size; i++){
		for(int j = i; j < size; j++){
			if(input[i] == input[j+1]){
				cout << input[i] << " is repeating" << endl;
				break;
			}
		}
	}
}
