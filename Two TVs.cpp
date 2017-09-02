//http://codeforces.com/problemset/problem/845/C
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<pair<int,int>> shows(n);
	for (int i = 0; i < n; i++)
	{
		cin >> shows[i].first;
		cin >> shows[i].second;
	}
	sort(shows.begin(), shows.end());
	int tv1 = shows[0].second;
	int tv2 = shows[1].second;
	for (int i = 2; i < n; i++)
	{
		if (shows[i].first > tv1)
			tv1 = shows[i].second;
		else if (shows[i].first > tv2)
			tv2 = shows[i].second;
		else
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}