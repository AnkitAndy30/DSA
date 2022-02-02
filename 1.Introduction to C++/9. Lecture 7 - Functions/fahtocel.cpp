#include<iostream>
using namespace std;

void fah_to_celsius(int S, int E, int W)
{
	int cel;
	while(S<=E)
	{
		cout<<S<<"\t";
		cel = (5.0/9)*(S-32);
		S = S+W;
		cout<<cel;
		cout<<endl;
	}
}

int main()
{
	int S,E,W;
	cout<<"Enter the values"<<endl;
	cin>>S>>E>>W;
	fah_to_celsius(S,E,W);
}
