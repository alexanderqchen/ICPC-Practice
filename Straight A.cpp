//http://codeforces.com/problemset/problem/810/A
#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int sum = 0;
	int temp;
	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		sum += temp;
	}
	int ans = 2 * (n*k - 0.5*n - sum);
	if (ans >= 0)
		cout << 2 * (n*k - 0.5*n - sum) << endl;
	else
		cout << 0 << endl;
}