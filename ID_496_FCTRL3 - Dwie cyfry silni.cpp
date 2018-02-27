#include <iostream>
using namespace std;


int d;
unsigned int n;
void dwie_cyfry_silni(unsigned int s);
int main(void)
{
	cin >> d;
	if (d > 0 && d <= 30)
		while (d--)
		{
			cin >> n;
			if (n >= 0 && n <= 1e9)
				dwie_cyfry_silni(n);
			else break;
		}
	return (0);
}

void dwie_cyfry_silni(unsigned int s)
{
	switch (s)
	{
	case 0:
	case 1:	cout << "0 1" << endl; break;
	case 2: cout << "0 2" << endl; break;
	case 3: cout << "0 6" << endl; break;
	case 4: cout << "2 4" << endl; break;
	case 5:
	case 6:
	case 8: cout << "2 0" << endl; break;
	case 7: cout << "4 0" << endl; break;
	case 9: cout << "8 0" << endl; break;
	default:
		cout << "0 0" << endl; break;
	}
}
