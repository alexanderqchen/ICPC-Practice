//http://codeforces.com/problemset/problem/814/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> b(k);
	vector<int> pos;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 0)
			pos.push_back(i);
	}
	for (int i = 0; i < k; i++)
	{
		cin >> b[i];
	}

	sort(b.begin(), b.end());

	if (pos.size() > 1)
	{
		if (b[0] != b[b.size() - 1])
		{
			cout << "Yes" << endl;
			return 0;
		}
		else
		{
			for (int i = 0; i < pos.size(); i++)
			{
				a[pos[i]] = b[0];
			}
			vector<int> temp = a;
			sort(temp.begin(), temp.end());
			if (temp == a)
			{
				cout << "No" << endl;
				return 0;
			}
			else
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	else
	{
		a[pos[0]] = b[0];
		vector<int> temp = a;
		sort(temp.begin(), temp.end());
		if (temp == a)
		{
			cout << "No" << endl;
			return 0;
		}
		else
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
}