#include<iostream>
using namespace std;

int main()
{
	int S,E,W,Cel;
	cout<<"Enter the Start value"<<endl;
	cin>>S;
	cout<<"Enter end value"<<endl;
	cin>>E;
	cout<<"Enter step size"<<endl;
	cin>>W;
	cout<<"Fahrenheit"<<" "<<"Celsius"<<endl;
	if(S<=80 && E<=900 && W<=40)
	{
		while(S<=E)
		{
			cout<<S<<"\t     ";
			Cel = (5.0/9)*(S-32);
			cout<<Cel<<endl;
			S = S+W;
		}
	}
}
