#include <iostream>
//#include <cstdlib>

using namespace std;

bool calculator(char &a, int &b, int &c)
{
	switch (a)
	{
	case '+':
		cout << b + c << endl;
		return true;
		break;
	case '-':
		cout << b - c << endl;
		return true;
		break;
	case '/':
		if (b && c)
		{
			cout << b / c << endl;
			return true;
			break;
		}
		else cout << endl;
		return true;
		break;
	case '*':
		cout << b * c << endl;
		return true;
		break;
	case '%':
		cout << b % c << endl;
		return true;
		break;
	default:
		return false;
		break;
	}
}

int main(void)
{
	char a;
	int b, c;
	bool z = true;
	while (z)
	{
		cin >> a >> b >> c;
		z = calculator(a, b, c);
		a = b = c = 0;
	}

	//system("pause");
	return 0;
}