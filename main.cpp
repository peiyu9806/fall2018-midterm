/**
Description: The program will prompt the user to enter a string and a character and print the numbers of the character has been used in the string.
Filename: main.cpp
Author: Pei-Yu Kuo
Date: 10-18-18
*/

#include <iostream>
#include <string>

using namespace std;


string get_string(string prompt)
{
    string s;
    cout << prompt;
    getline(cin,s);
    return s;

}


int char_count(string s, char c)
{
    int count = 0;
    for(int i = 0; i < s.length(); i++)
    {
        char ch = s.at(i);

        if(ch == c)
        {
            count ++;
        }
    }
    return count;
}


int main ()
{   
    char character;
    string g_strings = get_string("enter something");
    cout << "enter the character ";
    cin >> character;

    cout << "The number is " << char_count(g_strings, character) << endl;

    return 0;
}
