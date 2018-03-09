#include <iostream>
#include <cstdio>
#include <cmath>
#include <iomanip>

using namespace std;
constexpr auto pi{ 3.141592654 };

int main(void)
{

	double s, r, d,pole;
	cin >> r >> d;
	pole = pi * pow(sqrt(2 * (r - (d / 2))*r - pow(r - (d / 2), 2)), 2);
	cout << fixed << setprecision(2) << pole << endl;
	//system("pause");
	return 0;
}