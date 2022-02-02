#include<iostream>
using namespace std;

class fraction{
	int numerator;
	int denominator;
	
	public:
		void print(){
			cout<<numerator<<"/"<<denominator<<endl;
		}
		
		
		void gcd(){
			int temp = min(numerator,denominator);
			int i = temp;
			for(; i >= 1; i--){
				if((numerator%i == 0) && (denominator%i == 0)){
					break;
				}
			}
			/*cout<<i<<" printing gcd2"<<endl;*/
			numerator = numerator/i;
			denominator = denominator/i;
		}
		
		void add(fraction f){
			numerator = numerator*f.denominator + f.numerator*denominator;
			denominator = denominator*f.denominator;
			gcd();
		}
		
		fraction(int a,int b){
			numerator = a;
			denominator = b;
		}
};

int main(){
	fraction f1(1,2);
	fraction f2(3,4);
	cout<<"F1 called "<<endl;
	f1.print();
	cout<<"F2 called"<<endl;
	f2.print();
	f1.add(f2);
	cout<<"Again F1 called"<<endl;
	f1.print();
	cout<<"Again F2 called"<<endl;
	f2.print();
}
