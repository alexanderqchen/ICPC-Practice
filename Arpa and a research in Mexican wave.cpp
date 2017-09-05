/*//http://codeforces.com/contest/851/problem/A
#include <iostream>
using namespace std;

int main()
{
	int n, k, t;
	cin >> n >> k >> t;
	if (k <= t && t <= n)
		cout << k << endl;
	else if (k <= t)
		cout << n - t + k << endl;
	else
		cout << t << endl;
}*/