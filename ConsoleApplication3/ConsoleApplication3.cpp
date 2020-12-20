#include <iostream>
#include <string>
using namespace std;

	string lol(int, char, int);
	string lol(string);
int main() {
	setlocale(LC_ALL, " ");
	//cout << lol(5, '+', 3);
	cout << lol("35-5");
	return 0;
}

string lol(int a, char sim, int b) {

	if (sim == '-') {
		a = a - b;
	}
	if (sim == '+') {
		a = a + b;
	}
	if (sim == '/') {
		a = a / b;
	}

	return std::to_string(a);
}


string lol(string str) {
	int i = 0;
	string x, y;
	string pos;
	if (str.find("+") != -1) {
		
		pos = str.find("+");
		x = str.substr(0, i - 1);
		y = str.substr(i + 1, str.size());
		
		return   lol(stoi(x), '+' , stoi(y));
	}
	if (str.find("-") != -1) {

		pos = str.find("-");
		x = str.substr(0, i - 1);
		y = str.substr(i + 1, str.size());

		return   lol(stoi(x), '-', stoi(y));
	}
	if (str.find("*") != -1) {

		pos = str.find("*");
		x = str.substr(0, i - 1);
		y = str.substr(i + 1, str.size());

		int r = stoi(x) * stoi(y);
		return  to_string(r);
	}
	if (str.find("/") != -1) {

		pos = str.find("/");
		x = str.substr(0, i - 1);
		y = str.substr(i + 1, str.size());

		int r = stoi(x) / stoi(y);
		return  to_string(r);
	}
	

		
}
					




				
			
		