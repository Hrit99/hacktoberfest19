#include<iostream>
using namespace std;
int main()
{
	int n,i,j,sum=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}