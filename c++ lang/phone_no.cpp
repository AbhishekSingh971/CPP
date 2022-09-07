#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> n;
    string m;
    m.resize(10);

    for (int i = 0; i < 3; i++)
    {
        getline(cin, m);
        cout << endl;
        n.push_back(m);
    }

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i].size() > 10)
        {
            cout << "More than 10 number." << endl;
        }
        else if (n[i].size() < 10)
        {
            cout << "Less than 10 number." << endl;
        }
        else
        {
            char first_num = n[i][0];
            if (first_num != '9' && first_num != '8' && first_num != '7')
            {
                cout << " Not a Indian Mobile Number." << endl;
            }
            else
            {
                cout << " +91-" << n[i] << endl;
            }
        }
    }

    return 0;
}