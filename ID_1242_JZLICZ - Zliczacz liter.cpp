#include <iostream>
#define A_z 123
using namespace std;

int main(void)
{
	int zliczone[A_z] { };
	char a;
	size_t wiersze;
	cin >> wiersze;
	cin.ignore();
	while (wiersze--)
		while (cin.get(a) && a!='\n')	zliczone[a]++;
	for (size_t i = 'a'; i <= 'z'; i++)
	{
		if(zliczone[i]>0)
		cout << static_cast<char>(i) << " " << zliczone[i] << endl;
	}
	for (size_t i = 'A'; i <= 'Z'; i++)
	{
		if (zliczone[i]>0)
		cout << static_cast<char>(i) << " " << zliczone[i] << endl;
	}
	return 0;
}