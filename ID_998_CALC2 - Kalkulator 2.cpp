#include <iostream>
#include <vector>
using namespace std;
void calk_2(char &dzialane, int &one, int &two);
int main(void)
{
	char dzialanie;
	int arg_one, arg_two;
	while (cin >> dzialanie >> arg_one >> arg_two)
		calk_2(dzialanie, arg_one, arg_two);
	return 0;
}

void calk_2(char &dzialane, int &one, int &two)
{
	static vector <int> vec(10);
	switch (dzialane)
	{

	case '+':
		cout << vec[one] + vec[two] << endl; break;
	case '-':
		cout << vec[one] - vec[two] << endl; break;
	case '*':
		cout << vec[one] * vec[two] << endl; break;
	case '/':
		if (vec[one] && vec[two]) {
			cout << vec[one] / vec[two] << endl; break;
			//cout << vec[one] / static_cast<float>(vec[two]) << endl;
		}
		break;
	case '%':
		cout << vec[one] % vec[two] << endl; break;
	case 'z':
		vec[one] = two; break;
	default:
		break;
	}
}