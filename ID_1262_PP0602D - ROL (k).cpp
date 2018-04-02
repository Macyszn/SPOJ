#include <iostream>
#include <vector>
using namespace std;

void wysietl(vector <int>&vec);
void wyswietl_vec(vector<int>&vec, int &shift);
int main(void)
{
	vector <int> vec;
	int n, k;
	cin >> n >> k;
	if (k < n)
		while (n--)
		{
			int c;
			cin >> c;
			vec.push_back(c);
		}
	wyswietl_vec(vec, k);
	return 0;
}

void wyswietl_vec(vector<int>&vec, int &shift)
{
	vector <int> vec_pom(vec.size());
	for (int i = 0, j = 0; i < vec.size(); i++)
	{
		if ((i - shift) < 0) vec_pom[vec.size() + (i - shift)] = vec[i];
		else vec_pom[j++] = vec[i];
	}
	wysietl(vec_pom);
}

void wysietl(vector <int>&vec)
{
	for (auto &a : vec)
		cout << a << " ";
	cout << endl;
}