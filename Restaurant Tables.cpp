//http://codeforces.com/problemset/problem/828/A
#include <iostream>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n >> a >> b;
	int c = 0; //b tables with 1 person
	int deny = 0;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		if (t == 1)
		{
			if (a > 0)
				a--;
			else if (b > 0)
			{
				b--;
				c++;
			}
			else if (c > 0)
				c--;
			else
				deny++;
		}
		else if (t == 2)
		{
			if (b > 0)
				b--;
			else
				deny+=2;
		}
	}
	cout << deny << endl;
}