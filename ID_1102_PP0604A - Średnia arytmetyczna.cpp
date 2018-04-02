#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


void wyswietl(vector <float> &vec);
void spr(const vector <float> &vec, float &srednia);

int main(void)
{

	unsigned short int t, n, input;
	cin >> t;
	if (t < 101)
		while (t--)
		{
			cin >> n;
			vector <float> vec_orginal(n);
			float srednia = 0;
			for (size_t i = 0; i < n; i++)
			{
				cin >> vec_orginal[i];
				srednia += static_cast<float>(vec_orginal[i]);
			}
			srednia /= n;
			//cout <<"srednia: "<< srednia << endl;
			//wyswietl(vec_orginal);
			spr(vec_orginal, srednia);
			vec_orginal.clear();
		}
	return 0;
}

void wyswietl(vector <float> &vec)
{
	for (auto &x : vec)
	{
		cout << x << " ";
	}
	cout << endl;
}

void spr(const vector <float> &vec, float &srednia)
{
	float min = fabs(vec[0] - srednia);
	size_t j = 0;
	for (size_t i = 0; i < vec.size(); i++)
	{
		if ((fabs(vec[i] - srednia)) < min)
		{
			min = fabs(vec[i] - srednia);
			j = i;
		}
	}
	cout << vec[j] << endl;
}