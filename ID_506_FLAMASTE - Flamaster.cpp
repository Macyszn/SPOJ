#include <iostream>
#define N 200
using namespace std;

int main(void)
{
	int c;
	char w[N];
	cin >> c;
	while (c--)
	{
			cin >> w;
		for (size_t i = 0; w[i] != '\0' && i < N; i++)
		{
			if (w[i] != w[i + 1]) cout << w[i];
			else
			{
				size_t j = 1;
				do {
					i++, j++;
				} while (w[i] == w[i + 1]);
				if (j > 2) cout << w[i - (j - 1)] << j;
				else cout << w[i - 1] << w[i];
			}
		}
		cout << endl;
	}
	return 0;
}