#include <iostream>


bool validWord(const vector<string> &list, const string &guess)
{
    for(i = 0; i < list.size(); ++i)
    {
        if(vector.at(i) == guess)
        {
            return true;
        } else { return false; }
    }
}

string checkGuess(const string &guess, const string &wordle)
{
    string displacedLetters;
    string finalLetters;
    for(int i = 0; i < wordle.size(); ++i)
    {
       if(guess.at(i) == wordle.at(i))
       {
           finalLetters.append("^");
       } else { displacedLetters.append(guess.at(i)); }

    }
/*
string characterDifference(string str1, string str2)
{
    int caretCount = 0;
    string output;
    if( str1.length() <= str2.length() )
    {
        for(int i = 0; i < str1.length(); ++i)
        {
            if( str1.at(i) != str2.at(i))
            {
                output.append("^");
            } else { output.append(" "); }
        }
    }
    if( str1.length() > str2.length() )
    {
        for(int i = 0; i < str2.length(); ++i)
        {
            if( str1.at(i) != str2.at(i))
            {
                output.append("^");
            } else { output.append(" "); }
        }
    }
    return output;
}
*/
}

// a non-void function of your choice. the return value must be used


