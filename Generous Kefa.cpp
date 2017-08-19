//http://codeforces.com/problemset/problem/841/A
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, k;
	string s;
	cin >> n >> k >> s;
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		for (int j = i; j < n; j++)
		{
			if (s[j] == s[i])
				count++;
		}
		if (count > k)
		{
			cout << "NO" << endl;
			exit(0);
		}
	}
	cout << "YES" << endl;
}