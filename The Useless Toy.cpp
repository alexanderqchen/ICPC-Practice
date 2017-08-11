//http://codeforces.com/problemset/problem/834/A
#include <iostream>
using namespace std;

int main()
{
	char start, end;
	int n;
	cin >> start >> end >> n;
	if ((n % 4) % 2 == 0)
		cout << "undefined" << endl;
	else if ((n % 4 == 1 && (start == 'v'&&end == '<' || start == '<'&&end == '^' || start == '^'&&end == '>' || start == '>'&&end == 'v')) || (n%4==3&& (start == 'v'&&end == '>' || start == '<'&&end == 'v' || start == '^'&&end == '<' || start == '>'&&end == '^')))
	{
		cout << "cw" << endl;
	}
	else
	{
		cout << "ccw" << endl;
	}
}