//http://codeforces.com/problemset/problem/825/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n; //ignore n, not needed

	string s;
	cin >> s;
	int ans = 0;
	int curr = 0;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == '0')
		{
			ans *= 10;
			ans += curr;
			curr = 0;
		}
		else
			curr++;
	}
	if (curr != '0')
	{
		ans *= 10;
		ans += curr;
	}
	cout << ans << endl;
}