#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
	double a, b, c;
	while (cin >> a >> b >> c)
	{
		if (b == c) cout << "NWR" << endl;
		else if ((b!=c)&& (!a)) cout << "BR" << endl;
		else cout << fixed << setprecision(2) << (c - b) / a << endl;
	}
	return 0;
}