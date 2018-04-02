#include <iostream>
using namespace std;
int main(void)
{
	size_t liczba_miast;
	cin >> liczba_miast;
	int zysk_z_miasta;
	long long zarobek = 0, max = 0;
	while (liczba_miast--)
	{
		cin >> zysk_z_miasta;
		zarobek += zysk_z_miasta;

		if (zarobek > max)
			max = zarobek;
		if (zarobek < 0)
			zarobek = 0;
	}
	cout << max << endl;
	return 0;
}