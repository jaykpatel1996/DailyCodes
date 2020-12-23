#include <bits/stdc++.h>

using namespace std;


vector<string> output;

int main() {
	vector<string> alphabet {"a", "b", "c", "ch", "d", "dd", "e", "f", "ff", "g", "ng", "h", "i", "l", "ll", "m", "n", "o", "p", "ph", "r", "rh", "s", "t", "th", "u", "w", "y"};
vector<string> input {"dd r",  "n a h", "d e a", "dd", "ng a h"};
  map<string,int> m;
  for (int i = 0; i < alphabet.size(); i++)
    m[alphabet[i]] = i ;
  string delimiter = " ";
  for(int i=0;i<input.size();i++)
  {
  	string s = input[i];
	string resultantString;
	size_t pos;
	
	while ((pos = s.find(delimiter)) != std::string::npos) {
    string token = s.substr(0, pos);
    resultantString.push_back(m[token]);
    s.erase(0, pos + delimiter.length());
	}
	input[i]=resultantString;
  }
  
  sort(input.begin(),input.end());
  vector<string> res(input.size());
  for(int i=0;i<input.size();i++)
  {
  	string temp;
  	string curr=input[i];
  	for(int i=0;i<curr.size();i++)
  	{
  		temp.push_back(alphabet[curr[i]]);
	}
	curr=temp[i];
  	
  	
  }
  for(int i=0;i<input.size();i++)
  {
  	cout<<input[i]<<"\n";
  }
  return 0;
  
  
  
}
