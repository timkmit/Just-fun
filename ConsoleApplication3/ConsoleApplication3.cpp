#include <iostream>
#include <string>
using namespace std;

int lol(string);

int main() {
	setlocale(LC_ALL, " ");
	//cout << lol(5, '+', 3);
	cout << lol("35-5");
	return 0;
}


int lol(string str)
{
	char symbols[4] = {'+', '-', '*', '/'};

	int num1, num2;

	for (int i = 0; i < 4; i++)
	{
		try
		{
			int pos = str.find(symbols[i]);
			if (pos >= 0)
			{
				num1 = stoi(str.substr(0, pos));
				num2 = stoi(str.substr(pos + 1));
				switch(str[pos])
				{
				case '+':
					return num1 + num2;
				case '-':
					return num1 - num2;
				case '*':
					return num1 * num2;
				case '/':
					return num1 / num2;
				}
			}
		}
		catch(...)
		{
			cout << "Invalid Input";
			return 0;
		}
	}
}