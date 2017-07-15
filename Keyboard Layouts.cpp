//http://codeforces.com/problemset/problem/831/B
#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;
int main()
{
	unordered_map<char, int> k1(26);
	for (int i = 0; i < 26; i++)
	{
		char c;
		cin >> c;
		k1[c] = i;
	}
	vector<char> k2(26);
	for (int i = 0; i < 26; i++)
	{
		cin >> k2[i];
	}
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (isalpha(c))
		{
			if (toupper(c) == c)
				s[i] = toupper(k2[k1[tolower(c)]]);
			else
				s[i] = k2[k1[c]];
		}
		else
			s[i] = c;
	}
	cout << s << endl;
}