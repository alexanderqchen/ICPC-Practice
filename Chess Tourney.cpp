//http://codeforces.com/problemset/problem/845/A
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> players(2 * n);
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> players[i];
	}
	sort(players.begin(), players.end());
	if (players[players.size()/2] > players[players.size() / 2-1])
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}