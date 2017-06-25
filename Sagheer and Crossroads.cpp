//http://codeforces.com/problemset/problem/812/A
#include <iostream>
using namespace std;
int main()
{
	int l1, s1, r1, p1, l2, s2, r2, p2, l3, s3, r3, p3, l4, s4, r4, p4;
	cin >> l1 >> s1 >> r1 >> p1 >> l2 >> s2 >> r2 >> p2 >> l3 >> s3 >> r3 >> p3 >> l4 >> s4 >> r4 >> p4;
	if (p1)
	{
		if (l1 || s1 || r1 || l2 || s3 || r4)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	if (p2)
	{
		if (l2 || s2 || r2 || l3 || s4 || r1)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	if (p3)
	{
		if (l3 || s3 || r3 || l4 || s1 || r2)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	if (p4)
	{
		if (l4 || s4 || r4 || l1 || s2 || r3)
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}