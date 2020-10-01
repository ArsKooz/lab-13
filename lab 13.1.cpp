#include <iostream>
#include <locale>
using namespace std;

int main()
{
	float a,b;
	int i;
	cout << "Vvedite cenu konfet za kilogramm\n";
	cin >> a;
	for (i = 1, 1;i <=10;i++)
	{
		b = (float)i / 10;
		cout << b << "kg  " << b * a<<"\n";
	}
}