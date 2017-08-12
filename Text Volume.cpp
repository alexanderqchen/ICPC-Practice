//http://codeforces.com/problemset/problem/837/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int max = 0;
	int curr = 0;
	string s;
	cin.ignore();
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'A'&&s[i] <= 'Z')
			curr++;
		else if (s[i] == ' ')
		{
			if (curr > max)
				max = curr;
			curr = 0;
		}
	}
	if (curr > max)
		max = curr;
	cout << max << endl;
}