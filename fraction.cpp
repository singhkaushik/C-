#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"\nEnter the number : ";
	cin>> num;
	int i,count=0;
	cout<< "\nThe factors of "<<num<<"are :";
	for(i=1; i<=num; i++)
	{if(num%i==0)
	{
		++count;
		cout<<i<<" ";
	}
	}
	cout<<"\n\nTotal factors of"<<num<<":"<<count<<endl;
	return 0;
}
