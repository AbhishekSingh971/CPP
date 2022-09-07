#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("color b4");
    string s;
    getline(cin, s);
    char ch;
    vector<char> v;
    vector<char> c;

    for (int i = 0; i < s.size(); i++)
    {
        if (97 <= s[i] <= 122)
        {
            if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                v.push_back(s[i]);
            }
            else
            {
                c.push_back(s[i]);
            }
        }
        else
        {
            c.push_back(s[i]);
        }
    }
    cout << "vowel : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    cout << v.size();
    cout << endl;

    cout << "consonant : ";
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ' ';
    }
    cout << c.size();

    cout << endl;
    cout << s.size();
    cout << endl;
    cout<<s.find_last_of('E')<<" "<<s.find_first_of('E');
    

    return 0;
}