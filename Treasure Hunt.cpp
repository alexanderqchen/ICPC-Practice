//http://codeforces.com/problemset/problem/817/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	int x, y;
	cin >> x >> y;

	pair<int, int> curr(x1, y1);
	pair<int, int> end(x2, y2);
	vector<pair<int, int>> prev(2, pair<int, int>(-1, -1));
	while (true)
	{
		if (curr == end)
		{
			cout << "YES" << endl;
			return 0;
		}
		if (prev[0] == curr || prev[1] == curr)
			break;
		prev[0] = prev[1];
		prev[1] = curr;
		if (curr.first <= end.first&&curr.second < end.second)
		{
			curr.first += x;
			curr.second += y;
		}
		else if (curr.first<=end.first)
		{
			curr.first += x;
			curr.second -= y;
		}
		else if (curr.first > end.first&&curr.second < end.second)
		{
			curr.first -= x;
			curr.second += y;
		}
		else if (curr.first > end.first)
		{
			curr.first -= x;
			curr.second -= y;
		}
	}
	cout << "NO" << endl;
}