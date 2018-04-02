#include <iostream>
#include <string>
using namespace std;
void fun_pesel(string &pesel);
int main(void)
{
	size_t amount;
	cin >> amount;
	cin.ignore();
	while (amount--)
	{
		string pesel;
		getline(cin, pesel);
		fun_pesel(pesel);
	}
	return 0;
}

void fun_pesel(string &pesel)
{
	size_t n = 0;
	for (size_t i = 0; i < pesel.size(); i++)
	{
		switch (i + 1)
		{
		case 1:
		case 5:
		case 9:
		case 11:
			n += (static_cast<int>(pesel[i]) - 48) * 1; break;
		case 2:
		case 6:
		case 10:
			n += (static_cast<int>(pesel[i]) - 48) * 3; break;
		case 3:
		case 7:
			n += (static_cast<int>(pesel[i]) - 48) * 7; break;
		case 4:
		case 8:
			n += (static_cast<int>(pesel[i]) - 48) * 9; break;
		default: break;
		}
	}
	cout << (n % 10 != 0 ? 'N' : 'D') << endl;;
}