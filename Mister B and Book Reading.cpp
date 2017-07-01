//http://codeforces.com/contest/820/problem/A
#include <iostream>
using namespace std;
int main()
{
	int c, v0, v1, a, l;
	cin >> c >> v0 >> v1 >> a >> l;
	int page = 1;
	int days = 0;
	while (page <= c)
	{
		if(days>0)
			page -= l;
		if (page < 1)
			page = 1;
		int pagestoread = v0 + (days)*a;
		page += pagestoread<v1?pagestoread:v1;
		days++;
	}
	cout << days << endl;
}