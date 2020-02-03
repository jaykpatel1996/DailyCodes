#include<stdio.h>
#include<string>
#include<iostream>
#include<map>
#include<math.h>
#include<vector>
using namespace std;

int ToBase10(int base, vector<int> s)
{
	int res = 0;
	if (base < 2)
	{
		base = 2;
	}
	int size = s.size();
	cout << size << "is the size";
	int count = 0;
	for (int i = size-1;i>=0;i--,count++)
	{
		res = res +  (s[i] * (pow(base, count)));
		cout << pow(base, count) << "\n";
	}
	return res;


}


int ToMinimumNumber(string s)
{
	map<char, int> m;

	m[s[1]] = 0;
	m[s[0]] = 1;
	int count = 2;
	for (int i = 2;s[i] != '\0';i++)
	{
		if (m.find(s[i]) == m.end())
		{
			m[s[i]] = count;
			count++;
		}
	}
	cout << count<<"\n";
	cout << m.size()<<"is the size";
	if (m.size() <= 2)
	{
		m[s[1]] = 0;
		m[s[0]] = 1;
		m['0'] = 0;

	}

	vector<int> number;
	for (int i = 0;s[i] != '\0';i++)
	{
		number.push_back(m[s[i]]);
		cout << m[s[i]] << "\n";
	}
	return ToBase10(m.size(),number);
}


int main()
{
	string s;
	cin >> s;
	cout << ToMinimumNumber(s);
}