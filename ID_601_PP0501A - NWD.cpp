#include <iostream>
#include <cstdlib>
using namespace std;

int fun_nwd(int a, int b);
int fun_nwd_r(int a, int b);
int main(void)
{
	int a, b, t;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		if (0 <= a && b <= 1000000)
			cout << fun_nwd(a, b) << endl;
	}
	//system("pause");
	return 0;
}
//********************************************************
int fun_nwd(int a, int b)
{
	while (a && b)
		a > b ? a -= b : b -= a;
	return a > b ? a : b;
}
//********************************************************
int fun_nwd_r(int a, int b)
{
	if (!a) return b;
	else if (!b) return a;
	else return a > b ? fun_nwd_r(a -= b, b) : fun_nwd_r(a, b -= a);
}