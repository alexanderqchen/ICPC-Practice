//http://codeforces.com/contest/821/problem/A
#include <iostream>
#include <vector>
using namespace std;
bool addsup(int n, int i, int j, vector<vector<int>> v)
{
	for (int s = 0; s < n; s++)
	{
		for (int t = 0; t < n; t++)
		{
			if (v[i][s] + v[t][j] == v[i][j])
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int n;
	cin >> n;
	vector<vector<int>> v(n, vector<int>(n));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (v[i][j] == 1)
			{
				continue;
			}
			if (addsup(n, i, j, v))
			{
				continue;
			}
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
}