#include<stdio.h>
#include<iostream>
#include<stack>
#include<cctype>
#include<string>
using namespace std;
int priority(char c)
{	
	if(c=='^')
	return 3;
	if(c=='*'||c=='/')
	return 2;
	else if(c=='(')
	return 0;
	else
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		stack<char> s;
		string str;
		cin>>str;
		char target[100];int k=0;
		int l=str.length();
		for(int i=0;i<l;i++)
		{
			if(isalpha(str[i])||isdigit(str[i]))
			{
				target[k++]=str[i];
				continue;
			}
			if(str[i]=='(')
			{
				s.push(str[i]);
				continue;
			}
			
			if(str[i]=='*'||str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='^')
			{
				if(s.empty())
				{
					s.push(str[i]);
					continue;
				}
				
				while(!s.empty()&&priority(s.top())>priority(str[i]))
				{
					target[k++]=s.top();
					s.pop();			
				}	
				s.push(str[i]);
				continue;
			}
			if(str[i]==')')
			{
				while(!s.empty()&&s.top()!='(')
				{
					target[k++]=s.top();
					s.pop();
				}
				if(!s.empty())
				{
					s.pop();
				}
			}
		}
		while(!s.empty())
		{
			target[k++]=s.top();
			s.pop();
		}
		target[k]='\0';
		cout<<target<<"\n";
	}
	
}
