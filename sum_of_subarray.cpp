//-http://www.geeksforgeeks.org/sum-of-all-subarrays/
#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0;
	cout<<"enter the size of array\t";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>temp;
		sum=sum+temp*(n-i)*(i+1);
	}
	cout<<"the sum is"<<sum;
}
