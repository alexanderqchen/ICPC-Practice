#include <iostream>
#include <vector>
#include <algorithm>
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
	sort(v.begin(), v.end());

	int mine = 0;
	int remaining = 0;
	for (int i = 0; i < n; i++)
	{
		remaining += v[i];
	}
	int pos = v.size()-1;
	while (remaining >= mine)
	{
		mine += v[pos];
		remaining -= v[pos];
		pos--;
	}
	cout << v.size() - 1 - pos << endl;
}