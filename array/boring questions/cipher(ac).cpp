
#include<iostream>
#include<stdio.h>
using namespace std;

int findCombination(int val)
{
	return (val>>1)==(val/2);
}

int main()
{
	cout<<findCombination(14);
	
	
}
