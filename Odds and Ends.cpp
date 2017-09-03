//http://codeforces.com/problemset/problem/849/A
#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	if (v[0] % 2 == 1 && v[v.size() - 1] % 2 == 1 && v.size() % 2 == 1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

}