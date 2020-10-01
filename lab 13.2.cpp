#include <iostream>

using namespace std;

int main()
{
	int n, i;
	float proiz, a;
	cout << "Vvedite celoe chislo N";
	cin >> n;
	a = 1;proiz = 1;
	for (i = 0;i <= n;i++)
	{
		a += 0.1;
		proiz *= a;
	}
	cout << proiz;
}