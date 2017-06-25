//http://codeforces.com/problemset/problem/811/A
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = 1;; i++)
	{
		if (i % 2 == 0)
		{
			b -= i;
			if (b < 0)
			{
				cout << "Valera" << endl;
				return 0;
			}
		}
		else
		{
			a -= i;
			if (a < 0)
			{
				cout << "Vladik" << endl;
				return 0;
			}
		}
	}
}