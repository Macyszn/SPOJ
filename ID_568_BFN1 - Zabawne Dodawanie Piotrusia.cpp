#include <iostream>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;

unsigned short int t, n;

void palindrom(unsigned short int p);
void to_reverse_and_add(string &str);
bool check_out(string &str);

int main(void)
{
	cin >> t;
	if (t <= 80)
	while (t--)
	{
		cin >> n;
		if (n > 0 && n <= 80)
			palindrom(n);
	}
	return 0;
}

void palindrom(unsigned short int p)
{
	string pal = to_string(p);
	size_t repet = 0;
	while (check_out(pal))
	{
		to_reverse_and_add(pal);
		repet++;
	}
	cout << pal << " " << repet << endl;
}

void to_reverse_and_add(string &str)
{
	unsigned short int liczba = atoi(str.c_str());
	reverse(str.begin(), str.end());
	liczba += atoi(str.c_str());
	str = to_string(liczba);
}

bool check_out(string &str)
{
	size_t range = str.size();
	for (size_t i = 0, j = range - 1; i < range; i++, j--)
	{
		if (str[i] != str[j]) return true;
	}
	return false;
}
