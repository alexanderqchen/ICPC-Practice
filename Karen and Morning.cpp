//http://codeforces.com/problemset/problem/816/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int h = (s[0] - '0') * 10 + s[1] - '0';
	int m = (s[3] - '0') * 10 + s[4] - '0';
	int ans = 0;
	while (h / 10 != m % 10 || h % 10 != m / 10)
	{
		ans++;
		m++;
		if (m >= 60)
		{
			m = 0;
			h++;
		}
		if (h >= 24)
		{
			h = 0;
		}
	}
	cout << ans << endl;
}