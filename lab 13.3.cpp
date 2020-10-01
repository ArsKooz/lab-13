#include <iostream>

using namespace std;

int main()
{
	int n, d, f;
	cout << "N=";
	cin >> n;
	f = 0;
	for (d = 1;d <= n; d++)
	{
		f += 2 * d - 1;
	}
	cout << f;
}