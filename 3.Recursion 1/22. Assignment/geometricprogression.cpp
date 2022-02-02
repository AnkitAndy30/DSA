#include<iostream>
using namespace std;

long double geometricsum(int k){
	if(k==0){
		return 1.0;
	}
	long double v = geometricsum(k-1);
	double v1 = 1;
	for(int i=0; i<k; i++){
		v1 = v1*0.5;
	}
	return v+v1;
}

int main(){
	int k;
	cout<<"Enter the number of terms you want the sum for"<<endl;
	cin>>k;
	cout<<geometricsum(k);
}
