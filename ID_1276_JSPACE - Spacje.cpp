#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	string text;
	while (getline(cin, text))
	{
		while (text.find(' ') != std::string::npos)
		{
			if ((text[text.find(' ') + 1] != ' ')&&(text[text.find(' ') + 1]>=97 && text[text.find(' ') + 1]<=122))
				text[text.find(' ') + 1] = text[text.find(' ') + 1] - 32;
			text.erase(text.begin() + text.find(' '));
		}
		cout << text << endl;
	}
	return 0;
}