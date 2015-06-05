/*
 * main.cpp
 *
 *  Created on: Jun 5, 2015
 *      Author: MinhNH13
 */
#include <iostream>
#include <string>

bool is_anagrams(std::string str1, std::string str2)
{
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    if (str1.compare(str2) == 0)
    {
        return true;
    }
    return false;
}

int main(int argc, char **argv)
{
    using namespace std;
    string str1;
    string str2;
    cout << "input str1: " << endl;
    getline(cin, str1);
    cout << "input str2: " << endl;
    getline(cin, str2);
    
    cout << is_anagrams(str1, str2) << endl;
	return 0;
}



