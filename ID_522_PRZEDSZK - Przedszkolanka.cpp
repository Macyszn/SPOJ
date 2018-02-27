#include <iostream>
#define N 25
using namespace std;

void pods(int  p, int tab[N]);
int nwd(int  a, int  b);
int main(void)
{
	int a, b, n;
	cin >> n;
	if (n > 0 && n <= 20)
		while (n--)
		{
			cin >> a >> b;
			if (10 <= a && b <= 30)
			{
				cout << a * b / nwd(a, b) << endl;
			}
		}
	return 0;
}

void pods(int  p, int tab[N])
{
	size_t i = 0, pods = p;
	while (p > 0)
	{
		if (pods%p == 0)tab[i++] = p;
		p--;
	}
}

int nwd(int  a, int  b)
{
	int tab_a[N] = { 0 }, tab_b[N] = { 0 };
	pods(a, tab_a);
	pods(b, tab_b);
	for (size_t i = 0; tab_a[i]; i++)
	{
		for (size_t j = 0; tab_b[j]; j++)
		{
			if (tab_a[i] == tab_b[j]) return tab_a[i];
		}
	}	
}
