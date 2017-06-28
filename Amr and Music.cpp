#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> instruments(n);
	int k;
	cin >> k;
	for (int i = 0; i < n; i++)
	{
		instruments[i].second = i+1;
		cin >> instruments[i].first;
	}
	sort(instruments.begin(), instruments.end());
	int numInstruments = 0;
	for (int i = 0; i < n; i++)
	{
		if (k - instruments[i].first < 0)
			break;
		k -= instruments[i].first;
		numInstruments++;
	}
	cout << numInstruments << endl;
	for (int i = 0; i < numInstruments; i++)
	{
		cout << instruments[i].second << " ";
	}
}