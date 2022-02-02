#include<iostream>
using namespace std;
#include"Ankpolynomialclass.cpp"

int main(){
	polynomial p1;
	cout<<"Total number of terms in Polynomial P1"<<endl;
	int totalterms;
	cin>>totalterms;
	for(int i = 0; i < totalterms; i++){
		cout<<"Enter degree"<<endl;
		int degree;
		cin>>degree;
		cout<<endl;
		cout<<"Enter coefficient"<<endl;
		int coefficient;
		cin>>coefficient;
		p1.setCofficient(coefficient,degree);
	}
	
	
	
	polynomial p2;
	/*p1.print();
	p1.setCofficient(2,1);
	p1.print();
	p2.print();
	*/
	cout<<"Total number of terms in Polynomial P2"<<endl;
	cin>>totalterms;
	for(int i = 0; i < totalterms; i++){
		cout<<"Enter degree"<<endl;
		int degree;
		cin>>degree;
		cout<<endl;
		cout<<"Enter coefficient"<<endl;
		int coefficient;
		cin>>coefficient;
		p2.setCofficient(coefficient,degree);
	}
	
	polynomial p3;
	
	int choices;
	cout<<"\n Enter 1 for addition of polynomials";
	cout<<"\n Enter 2 for subtraction of polynomials";
	cout<<"\n Enter 3 for multiplication of polynomials";
	cout<<endl;
	cin>>choices;
	
	switch(choices){
		case 1:
			p3 = p1+p2;
			break;
		case 2:
			p3 = p1-p2;
			break;
		case 3:
			p3 = p1*p2;
			break;
	}
	
	p3.print();
}
