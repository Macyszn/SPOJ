#include <iostream>
#include <cstdlib>
using namespace std;

int n_test, i = 0, n;

bool prime_t(int liczba_pierwsza);
int main(void)
{

	cin >> n_test;
	if (n_test >= 0 && n_test < 100000)
		while (n_test)
		{
			cin >> n;
			if (n > 0 && n <= 10000)
				if (prime_t(n)) cout << "TAK" << endl;
				else cout << "NIE" << endl;
				n_test--;
		}
	else exit(0);


	//system("pause");
	return 0;
}

bool prime_t(int liczba_pierwsza)
{
	if (liczba_pierwsza == 1) return false;
	for (size_t liczba = liczba_pierwsza - 1; liczba > 1; liczba--)
	{
		if (liczba_pierwsza%liczba == 0) return false;
	}
	return true;
}
