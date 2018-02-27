#include <iostream>
using namespace std;
int main(void)
{
	int t, n, w, wynik;

	cin >> t;
	if (t > 0 && t <= 100)
		while (t--)
		{
			cin >> n;
			wynik = 0;
			while (n--)
			{
				cin >> w;
				wynik += w;
			}
			cout << wynik << endl;
		}
	return 0;
}
