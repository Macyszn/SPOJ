#include <iostream>
#include <cstring>
#include <cstdlib>
#define T_SIZE 1001  
using namespace std;

char* string_merge(char *s1, char *s2)
{
	char *wsk;
	bool switch_s1_s2 = true;
	wsk = new char[T_SIZE];
	//*wsk = { };
	size_t znaki_s1 = strlen(s1);
	size_t znaki_s2 = strlen(s2);
	size_t x;
	if (znaki_s1 > znaki_s2) x = znaki_s2;
	else if (znaki_s1 < znaki_s2) x = znaki_s1;
	else x = znaki_s1;
	for (size_t i = 0,i_s1=0,i_s2=0; i <= x*2; i++)
	{
		if (i == x * 2) *(wsk + i) = '\0';
		else 
		{
			if (switch_s1_s2)
			{
				*(wsk + i) = *(s1 + (i_s1++));
				switch_s1_s2 = false;
			}
			else
			{
				*(wsk + i) = *(s2 + (i_s2++));
				switch_s1_s2 = true;
			}
		}
	}	
	return wsk;
}

int main() 
{
	int t, n;
	char S1[T_SIZE], S2[T_SIZE], *S;
	cin >> t;                         /* wczytaj liczbę testów */
	cin.ignore();
	while (t--) 
	{		
		cin.getline(S1, T_SIZE, ' ');
		cin.getline(S2, T_SIZE);
		S = string_merge(S1, S2);
		cout << S << endl;
		delete[] S;
	}
	return 0;
}