#include <iostream>
using namespace std;

int multiplica(int num1, int num2);
int cuadrado(int num1);
int main()
{
	int a = 17;
	int b = 31;
	int c = multiplica(a,b);
	int d = cuadrado(a);
	cout << "a*b :" << c << "a*a :" << d << endl;
	return 0;
}
int multiplica(int num1, int num2)
{
	return num1*num2;
}
int cuadrado(int num1)
{
	return num1*num1;
}
