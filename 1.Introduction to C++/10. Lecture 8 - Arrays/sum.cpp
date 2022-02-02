#include <iostream>
using namespace std;

int main()
{
    int n,sum = 0;
    cout<<"Enter the number of elements you want to sum"<<endl;
    cin>>n;
    
    int a[1000];
    cout<<"Enter the elements"<<endl;
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
        sum = sum + a[i];
    }
    cout<<sum<<endl;
}
