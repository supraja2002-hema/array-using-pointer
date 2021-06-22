#include<iostream>
using namespace std;
int main()
{
	int n;
	int a[n];
	int i=0;
	cout<<"Enter how many elements you want to give:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int *p=a;
	cout<<"The elements in the array are:";
	for(i=0;i<n;i++)
	{
		cout<<*p<<",";
		p++;
	}
	return 0;
}
