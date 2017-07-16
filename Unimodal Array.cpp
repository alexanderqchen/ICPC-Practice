//http://codeforces.com/problemset/problem/831/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int mode = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if (mode == 0)
		{
			if (v[i] < v[i + 1])
			{

			}
			else if (v[i] == v[i + 1])
			{
				mode = 1;
			}
			else
			{
				mode = 2;
			}
		}
		else if (mode == 1)
		{
			if (v[i] < v[i + 1])
			{
				cout << "NO" << endl;
				return 0;
			}
			else if (v[i] == v[i + 1])
			{

			}
			else
			{
				mode = 2;
			}
		}
		else
		{
			if (v[i] < v[i + 1])
			{
				cout << "NO" << endl;
				return 0;
			}
			else if (v[i] == v[i + 1])
			{
				cout << "NO" << endl;
				return 0;
			}
			else
			{

			}
		}
	}
	cout << "YES" << endl;
}