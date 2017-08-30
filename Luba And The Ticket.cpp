//http://codeforces.com/problemset/problem/845/B
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	string s;
	cin >> s;

	string s1 = s.substr(0, 3);
	string s2 = s.substr(3, 3);

	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	int one = s[0] + s[1] + s[2] - 3 * '0';
	int two = s[3] + s[4] + s[5] - 3 * '0';
	
	int count = 0;
	if (one > two)
	{
		vector<int> diffs = { s1[0]-'0', s1[1]-'0', s1[2]-'0', 9 - (s2[0] - '0'), 9 - (s2[1]-'0'), 9 - (s2[2]-'0') };
		sort(diffs.begin(), diffs.end());
		while (one > two)
		{
			two += diffs[diffs.size() - 1 - count];
			count++;
		}
	}
	else if (one < two)
	{
		vector<int> diffs = { 9-(s1[0]-'0'), 9-(s1[1]-'0'), 9-(s1[2]-'0'), s2[0]-'0', s2[1]-'0', s2[2]-'0' };
		sort(diffs.begin(), diffs.end());
		while (one < two)
		{
			one += diffs[diffs.size() - 1 - count];
			count++;
		}
	}
	cout << count << endl;
}