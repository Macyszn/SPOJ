#include <iostream>
#include <cmath>
using namespace std;

struct punkt
{
	short x, y;
} a, b, c;

int main(void)
{
	size_t t;
	cin >> t;
	while (t--)
	{
		cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
		int delta_Sarrus_method = a.x * b.y + a.y * c.x + b.x * c.y - (b.y*c.x + a.x * c.y + a.y * b.x);
		if (!delta_Sarrus_method) cout << "TAK" << endl;
		else cout << "NIE" << endl;
		delta_Sarrus_method = 0;
	}	
	return 0;
}