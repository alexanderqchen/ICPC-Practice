//http://codeforces.com/problemset/problem/822/B
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	string s, t;
	cin >> s >> t;
	int similarity = 0;
	int count;
	vector<int> pos;
	for (int i = 0; i < m - n + 1; i++)
	{
		vector<int> temp;
		count = 0;
		for (int j = 0; j < n; j++)
		{
			if (s[j] == t[i + j])
				count++;
			else
				temp.push_back(j+1);
				
		}
		if (count > similarity)
		{
			similarity = count;
			pos = temp;
		}
	}
	cout << n - similarity << endl;
	if (similarity == 0)
	{
		for (int i = 0; i < n; i++)
		{
			cout << i + 1 << " ";
		}
	}
	else
	{
		for (int i = 0; i < pos.size(); i++)
		{
			cout << pos[i] << " ";
		}
	}
}