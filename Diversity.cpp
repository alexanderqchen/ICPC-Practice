//http://codeforces.com/problemset/problem/844/A
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int k;
	cin >> k;
	if (k > s.size() || k > 26)
	{
		cout << "impossible" << endl;
		return 0;
	}
	vector<bool> alphabet(26, true); //true if not seen in word
	int unique = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (alphabet[s[i]-'a'])
		{
			alphabet[s[i] - 'a'] = false;
			unique++;
		}
	}
	if (unique >= k)
		cout << 0 << endl;
	else
		cout << k - unique << endl;
}