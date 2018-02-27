#include <iostream>
using namespace std;

int d, a, b;

int ostatnia_cyfra_potegi(int p, int w);
int main(void)
{
	cin >> d;
	if (d > 0 && d <= 10)
	{
		while (d--)
		{
			cin >> a >> b;
			if ((a > 0 && a <= 1e9) && (b > 0 && b <= 1e9))
				cout << ostatnia_cyfra_potegi(a, b) << endl;
		}
	}
	return (0);
}

int ostatnia_cyfra_potegi(int p, int w)
{
	if (p % 10 == 0 && w > 0) return 0;
	else if ((p % 10 == 2 && w % 4 == 1) || (p % 10 == 8 && w % 4 == 3)) return 2;
	else if ((p % 10 == 3 && w % 4 == 1) || (p % 10 == 7 && w % 4 == 3)) return 3;
	else if (((p % 10 == 2 || p % 10 == 8) && w % 4 == 2) || (p % 10 == 4 && w % 2 == 1)) return 4;
	else if (p % 10 == 5 && w > 0) return 5;
	else if ((p % 10 == 6 && w > 0) || ((p % 10 == 2 || p % 10 == 8) && (w > 0 && w % 4 == 0)) || (p % 10 == 4 && (w > 0 && w % 2 == 0))) return 6;
	else if ((p % 10 == 3 && w % 4 == 3) || (p % 10 == 7 && w % 4 == 1)) return 7;
	else if ((p % 10 == 2 && w % 4 == 3) || (p % 10 == 8 && w % 4 == 1)) return 8;
	else if (((p % 10 == 3 || p % 10 == 7) && w % 4 == 2) || (p % 10 == 9 && w % 2 == 1)) return 9;
	else return 1;
}
