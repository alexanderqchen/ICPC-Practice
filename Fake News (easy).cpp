//http://codeforces.com/problemset/problem/802/G
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	string s;
	cin >> s;
	vector<bool> heidi(5, false);
	for (int i = 0; i < s.size(); i++)
	{
		if (!heidi[0])
		{
			if(s[i] == 'h')
				heidi[0] = true;
		}
		else if(!heidi[1])
		{
			if (s[i] == 'e')
				heidi[1] = true;
		}
		else if (!heidi[2])
		{
			if (s[i] == 'i')
				heidi[2] = true;
		}
		else if (!heidi[3])
		{
			if (s[i] == 'd')
				heidi[3] = true;
		}
		else if (!heidi[4])
		{
			if (s[i] == 'i')
				heidi[4] = true;
		}
		if (heidi[4])
		{
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
}