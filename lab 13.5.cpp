#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a, sum;
	int i, n;
	sum = 0;
	cout << "Vvedite znachenie A, N\n";
	cin >> a >> n;
	for (i = 0;i <= n;i++)
	{
		sum +=pow(-1,i) *pow(a, i);
	}
	cout << sum;
}