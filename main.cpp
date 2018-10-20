/**
Description: The program will prompt the user to enter a string and a character and print the numbers of the character has been used in the string.
Filename: main.cpp
Author: Pei-Yu Kuo
Date: 10-18-18
*/

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/**
   Will prompt the user for a string return it
   @param prompt the string the user entered
   @return the string
*/
string get_string(string prompt)
{
    string s;
    cout << prompt;
    getline(cin,s);
    return s;
}

/**
   Will calculate the counts of the given character appeares in the string
   @param s the string
   @param c the character
   @return the number of counts
*/
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
    string gv_strings = get_string("Please enter a string: ");      // Assign gv_string as the string the user entered.
    char character;         // Prompt the user for the character to test.
    cout << "Please enter a character: ";
    cin >> character;

    for(int i=0;i < gv_strings.length(); i++)       // Make all the English letters the user entered become lowercase.
    {
        gv_strings[i] = towlower(gv_strings[i]);
    }
   
    cout << "The number is " << char_count(gv_strings, character) << endl;      // print the result.

    return 0;
}
