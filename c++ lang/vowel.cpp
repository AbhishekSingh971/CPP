#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    vector<char> vowel;
    vector<char> consonant;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowel.push_back(s[i]);
        }
        else if (s[i] == ' ')
        {
        }
        else if (s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' || s[i] == '4' || s[i] == '5' || s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9')
        {
        }
        else
        {
            consonant.push_back(s[i]);
        }
    }
    cout << "vowel : ";
    for (int i = 0; i < vowel.size(); i++)
    {
        cout << vowel[i] << " ";
    }
    cout << endl;
    cout << "consonant : ";
    for (int i = 0; i < consonant.size(); i++)
    {
        cout << consonant[i] << " ";
    }
    cout << endl;

    return 0;
}