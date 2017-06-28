#include <vector>
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;

	vector< vector< char > > v(n, vector<char>(m, '#'));

	for (int i = 1; i < n; i+=4)
	{
		for (int j = 0; j < m-1; j++)
		{
			v[i][j] = '.';
		}
	}
	for (int i = 3; i < n; i += 4)
	{
		for (int j = 1; j < m; j++)
		{
			v[i][j] = '.';
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << v[i][j];
		cout << endl;
	}
}