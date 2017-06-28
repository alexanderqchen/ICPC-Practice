#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;

	vector<pair<int, int>> days(n);

	for (int i = 0; i < n; i++)
	{
		cin >> days[i].second;
		cin >> days[i].first;
	}
	int ans = 0;
	int least = days[0].first;
	for (int i = 0; i < n; i++)
	{
		if (days[i].first < least)
			least = days[i].first;
		ans += least*days[i].second;
	}
	cout << ans << endl;
}