#include<stdio.h>
#include<iostream>
#include<map>
using namespace std;

//MCMIV
int RomanToInteger(string s)
{
	map<char, int> m;
	m['I'] = 1; m['V'] = 5;m['X'] = 10;m['L'] = 50;m['C'] = 100;m['D'] = 500;m['M'] = 1000;
	
	int i = 0;
	int res = 0;
	while (s[i] != '\0')
	{
		int curr_val = m[s[i]];
		if (i + 1 < s.length())
		{
			if (curr_val < m[s[i + 1]])
			{
				res += m[s[i + 1]] - curr_val;
				i++;
			}
			else
			{
				res += curr_val;
			}
		}
		else
		{
			res += curr_val;
		}
		i++;
	}
	return res;
}

int IntegerToRoman(integer N)
{
	map<int, char> m;

}


int main()
{
	string input;
	int number;
	cout << "enter the Roman String";
	cin >> input;

	cout << RomanToInteger(input);
	cout << "Enter the integer";
	cin >> number;
}
