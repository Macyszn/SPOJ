#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	unsigned short int t;
	cin >> t;
	if (t > 0 && t <= 100)
		while(t--)
		{
			string linia;
			cin >> linia;
			for (size_t i = 0; i < linia.size() / 2; i++)
				cout << linia[i];
			cout << endl;
		}
}