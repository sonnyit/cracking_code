/*
 * main.cpp
 *
 *  Created on: Jun 5, 2015
 *      Author: MinhNH13
 */
#include <iostream>
#include <string>

void sort_string(std::string &str)
{
  int len = str.length();
  for (int i = 0; i < len-1; ++i)
    for (int j = i+1; j < len; ++j)
    {
      if (str[i] > str[j])
      {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
}

bool is_anagrams(std::string str1, std::string str2)
{
    //std::sort(str1.begin(), str1.end());
    //std::sort(str2.begin(), str2.end());
    sort_string(str1);
    sort_string(str2);
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



