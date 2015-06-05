/*
 * main.cpp
 *
 *  Created on: Jun 5, 2015
 *      Author: MinhNH13
 */
#include <iostream>
#include <string>

bool is_unique(std::string input)
{
	bool char_map[256] = { false };
	for (size_t i = 0; i < input.length(); ++i)
	{
		if (!char_map[(int)input[i]])
			char_map[(int)input[i]] = true;
		else
			return false;
	}
	return true;
}

int main(int argc, char **argv)
{
	using namespace std;
	string input;
	getline(cin, input);
	cout << is_unique(input) << endl;

	return 0;
}



