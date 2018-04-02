#include <iostream>
#include <string>
using namespace std;
void zamieniaj(char & znak);
int main(void)
{
	string linia;
	while (getline(cin, linia)) {
		size_t i = 0;
		bool w = false;
		while ((i) < linia.size())
		{
			if (linia[i] == '<') w = true, i++;
			if (linia[i] == '>') w = false;
			if (w) zamieniaj(linia[i]);
			i++;
		}
		cout << linia << endl;
	}
	return 0;
}
//---------------------------------------------------
void zamieniaj(char & znak)
{
	if (znak >= 97 && znak <= 122) znak -= 32;
}