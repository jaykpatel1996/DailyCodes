//https://leetcode.com/discuss/interview-question/352743/Google-or-Onsite-or-Guaranteed-Binary-Search-Numbers


#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int BinarySearchableCount(int size, int *arr)
{
	vector<int> Max(size);
	vector<int> Min(size);
	
	int min = arr[size-1];
	int max = arr[0];
	for(int i=0;i<size;i++)
	{
		if(max<arr[i])
			max=arr[i];
		Max[i]=max;
		
		if(min>arr[size-i-1])
			min=arr[size-i-1];
		
		Min[size-i-1]=min;
	}
	for(int i=0;i<size;i++)
	{
		cout<<Max[i]<<" "<<Min[i]<<"\n";
	}
	
	
	int count=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]>=Max[i] && arr[i]<=Min[i])
			count++;
	}
	
	return count;
}

int main()
{
	int arr[15];
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>arr[i];
	}
	cout<<BinarySearchableCount(t,arr);
}
