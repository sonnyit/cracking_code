/*
 * main.cpp
 *
 *  Created on: Jun 5, 2015
 *      Author: MinhNH13
 */
#include <iostream>

void reverse_string(char *str)
{
	char *end = str;
	while (*end != '\0')
		end++;
	end--;
	while(str < end)
	{
		char temp = *str;
		*str = *end;
		*end = temp;
		end--;
		str++;
	}
}

int main(int argc, char **argv)
{
	using namespace std;
	char input[256];
	cin.getline(input, 256);
	reverse_string(input);
	cout << input << endl;
	return 0;
}



