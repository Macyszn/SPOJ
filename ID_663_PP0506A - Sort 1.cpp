#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <algorithm>
using namespace std;
struct punkt
{
	string name;
	int x, y;
	double d(int x, int y)
	{
		return sqrt(pow(x - 0, 2) + pow(y - 0, 2));
	}
};

int main(void)
{
	size_t t;
	cin >> t;
	while (t--)
	{
		size_t length;
		cin >> length;
		punkt *p;
		p = new punkt[length];	
		double *d; // tab d
		d = new double[length];
		for (size_t i = 0; i < length; i++)
		{
			cin >> p[i].name >> p[i].x >> p[i].y;
			d[i] = p[i].d(p[i].x,p[i].y);
		}
		
		for (size_t j = 0; j < length - 1; j++)      //  sorting from the smallest 
			for (size_t i = 0; i < length - 1; i++)
				if (d[i] > d[i + 1]) swap(d[i], d[i + 1]);

		for (size_t j = 0; j < length; j++)
		{
			for (size_t i = 0; i < length; i++)
			{
				if (d[j] == p[i].d(p[i].x, p[i].y))
					cout << p[i].name << " " << p[i].x << " " << p[i].y << endl;
			}
		}
		delete[] p;
		delete[] d;
		cout << endl;
	}
	//system("pause");
	return 0;
}