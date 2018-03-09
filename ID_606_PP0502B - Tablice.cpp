#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main(void)
{
	int t, n;
	cin >> t;
	if (t <= 100)
	while (t--)
	{
		vector<int>tab;
		cin >> n;
		if (n <= 100)
		while (n--)
		{
			int c;
			cin >> c;
			tab.push_back(c);
		}
		for (int i = tab.size() - 1; i >= 0; i--)
			cout << tab[i] << " ";
		cout << endl;
	}
	//system("pause");
	return 0;
}