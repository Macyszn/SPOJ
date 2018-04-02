#include <iostream>
using namespace std;
void rozwiazania(float &a, float &b, float &c);
int main(void)
{
	float A, B, C;
	while (cin >> A >> B >> C)
	rozwiazania(A, B, C);
	return 0;
}

void rozwiazania(float &a, float &b, float &c)
{
	float delta = ((b*b) - (4 * a*c));
	if (delta > 0) cout << "2" << endl;
	else if (delta < 0) cout << "0" << endl;
	else cout << "1" << endl;
}