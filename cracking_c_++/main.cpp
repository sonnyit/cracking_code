/*
 * main.cpp
 *
 *  Created on: Jun 5, 2015
 *      Author: MinhNH13
 */
#include <iostream>
#include <string>

void remove_duplicate(std::string &str) {
	unsigned check = 1;
	unsigned tail = 1;

	for (; check < str.length(); ++check) {
		unsigned j;
		for (j = 0; j < tail; ++j) {
			if (str[check] == str[j])
				break;
		}
		if (j == tail) {
			str[tail] = str[check];
			tail++;
		}
	}
	str[tail] = 0;
}

int main(int argc, char **argv)
{
	using namespace std;
	string input;
	getline(cin, input);
	remove_duplicate(input);
	cout << input.c_str() << endl;

	return 0;
}



