#include <iostream>
#include <vector>
using namespace std;

int dfs(int curr, int consecCats, int m, vector<bool>& visited, vector<bool>& cats, vector<vector<int>>& edges)
{
	if (cats[curr])
		consecCats++;
	else
		consecCats = 0;
	if (consecCats > m)
		return 0;
	if (curr != 0 && edges[curr].size() == 1)
		return 1;
	int restaurants = 0;
	for (int i = 0; i<edges[curr].size(); i++)
	{
		int neighbor = edges[curr][i];
		if (!visited[neighbor])
		{
			visited[neighbor] = true;
			restaurants += dfs(neighbor, consecCats, m, visited, cats, edges);
		}
	}
	return restaurants;
}


int main()
{
	int n;
	cin >> n;
	int m;
	cin >> m;
	vector<bool> cats(n, false);
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		cats[i] = a;
	}
	vector<vector<int>> edges(n);
	for (int i = 0; i < n - 1; i++)
	{
		int x;
		cin >> x;
		int y;
		cin >> y;
		x--;
		y--;
		edges[x].push_back(y);
		edges[y].push_back(x);
	}

	vector<bool> visited(n, false);
	visited[0] = true;
	cout << dfs(0, 0, m, visited, cats, edges) << endl;
}