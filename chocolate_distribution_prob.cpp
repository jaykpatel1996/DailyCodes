//http://www.geeksforgeeks.org/chocolate-distribution-problem/
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
int size,temp,m,min=0;
cin>>size;
vector <int> v;
for(int i=0;i<size;i++)
{
cin>>temp;
v.push_back(temp);
}
sort(v.begin(),v.end());
for(int i=0;i<size;i++)
{
cout<<v[i]<<"\n";
}
cout<<"enter the size of m";
cin>>m;
min=v[m-1]-v[0];
for(int i=1;i<size-m+1;i++)
{
    if((v[i+m-1]-v[i])<min)
    min=v[i+m-1]-v[i];
	cout<<min<<"\t";
}
cout<<"\nthe minimum difference is"<<min;
}
