#include<iostream>
using namespace std;

int main()
{
	char grade;
	double hra,da,pf,allow;
	int basic,totalsalary;
	cout<<"Enter Basic pay and grade"<<endl;
	cin>>basic>>grade;
	if(grade=65)
	{
		hra = 0.2*basic;
		da = 0.5*basic;
		allow = 1700;
		pf = 0.11*basic;
		totalsalary = basic + hra + da + allow - pf;
		cout<<"Total Salary is";
		cout<<totalsalary;
	}
	else if(grade=66)
	{
		hra = 0.2*basic;
		da = 0.5*basic;
		allow = 1500;
		pf = 0.11*basic;
		totalsalary = basic + hra + da + allow - pf;
		cout<<"Total salary is";
		cout<<totalsalary;
	}
	else
	{
		hra = 0.2*basic;
		da = 0.5*basic;
		allow = 1300;
		pf = 0.11*basic;
		totalsalary = basic + hra + da + allow - pf;
		cout<<"Total salary is";
		cout<<totalsalary;
	}
	
}
