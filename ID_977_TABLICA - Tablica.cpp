#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
	vector<int> tab_nap;
	int a;
	while (cin >> a)
	{		
		tab_nap.push_back(a);
		if (cin.get() == '\n') break;
	}
	for (int i = tab_nap.size() - 1; i >= 0; i--)
		cout << tab_nap[i] << " ";
	cout << endl;
	return 0;
}