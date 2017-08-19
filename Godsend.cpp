//http://codeforces.com/problemset/problem/841/B
#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		if (temp % 2 == 1)
		{
			cout << "First" << endl;
			return 0;
		}
	}
	cout << "Second" << endl;
}