//http://codeforces.com/problemset/problem/822/A
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int c = a < b ? a : b;
	long long GCD = 1;
	for (int i = 2; i <= c; i++)
	{
		GCD *= i;
	}
	cout << GCD << endl;
}