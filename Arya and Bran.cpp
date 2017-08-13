//http://codeforces.com/problemset/problem/839/A
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int bran = 0;
	int arya = 0;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		arya += temp;

		if (arya >= 8)
		{
			bran += 8;
			arya -= 8;
		}
		else
		{
			bran += arya;
			arya = 0;
		}

		if (bran >= k)
		{
			cout << i+1 << endl;
			exit(0);
		}
	}
	cout << -1 << endl;
}