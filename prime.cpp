#include<iostream>
using namespace std;
int main()
{
	int n,i,m=0,a=0;
	cout<<"Enter the number";
	cin>>n;
	m=n/2;
	for(i=2;i<=m;i++)
	{
		if(n%i==0)
		{
			cout<<"Number is not prime"<<endl;
			a=1;
			break;
		}
	}
	if(a==0)
	cout<<"Number is Prime"<<endl;
	return 0;
	
}
