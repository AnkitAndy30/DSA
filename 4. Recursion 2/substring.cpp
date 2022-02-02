#include<iostream>
using namespace std;

int subsequence(string s,string *sp){
	if(s.size() == 0){
		sp[0] = "";
		return 1;
	}
	int subcount = subsequence(s.substr(1),sp);
	for(int i = 0; i < subcount; i++){
		sp[i + subcount] = s[0] + sp[i];
	}
	return 2*subcount;
}

int main(){
	string s;
	cin>>s;
	int siz = s.size();
	int asiz = 1;
	for(int i = 0; i < siz; i++){
		asiz = asiz*2;
	}
	string *sp = new string[asiz];
	subsequence(s,sp);
	for(int i = 0; i < asiz; i++){
		cout<<sp[i]<<" "<<endl;
	}
}
