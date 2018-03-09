#include <iostream>
using namespace std;

int tab[100];

int main(void)
{

	unsigned short int t;
	unsigned n, x, y;
	cin >> t;
	while (t--)
	{
		cin >> n >> x >> y;
		for (size_t i = 0; i < n; i++)
			if ((i%x == 0) && (i%y != 0)) cout << i << " ";
		cout << endl;
	}
	//system("pause");
	return (0);
}