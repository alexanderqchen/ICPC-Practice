//http://codeforces.com/problemset/problem/808/A
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int temp = n;
	int count = 0;
	while (temp / 10 != 0)
	{
		count++;
		temp /= 10;
	}
	temp += 1;
	int pow = 1;
	for (int i = 0; i < count; i++)
		pow *= 10;
	temp *= pow;
	cout << temp - n << endl;
}