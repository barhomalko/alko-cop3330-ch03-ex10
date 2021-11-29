/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 barhom alko
 */


#include<iostream>
#include<iomanip>
#include<fstream>
#include<sstream>
#include<cmath>
#include<cstdlib>
#include<string>
#include<list>
#include <forward_list>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include <array>
#include <regex>
#include<random>
#include<stdexcept>

using namespace std;


int main()
{
	string operation;	// Can be + - * / plus minus mult div
	double n1 = 0;
	double n2 = 0;
	double res = 0;
	cout << "enter an operation (+, -, *, /, plus, minus, mult, div)\n"
        << "followed by two operands\n";
	while (cin >> operation >> n1 >> n2) {
		if (operation == "+" || operation == "plus") res = n1 + n2;
		else if (operation == "-" || operation == "minus") res = n1 - n2;
		else if (operation == "*" || operation == "mult") res = n1 * n2;
		else if (operation == "/" || operation == "div") {
			if (n2 == 0)
				operation = "divzero";
			else
				res = n1 / n2;
		}
		else operation = "unknown";
		if (operation == "unknown")
			cout << "unsure of this operator!\n";
		else if (operation == "divzero")
			cout << "Indivisbile by zero!\n";
		else
			cout << n1 << ' ' << operation << ' ' << n2 << " = " << res << '\n';
		cout << "Try again\n";
	}
	return 0;
}
