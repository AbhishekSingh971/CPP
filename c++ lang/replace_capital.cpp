#include <bits/stdc++.h>
using namespace std;

int main(){
    string s="I am abhishek hello world";
    int space;
    // getline(cin,s);
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==' ')
        {
            space=i;
            space++;
            s.replace(s[space],1,s[space]-32);
        }
        cout<<s;
    }
    
    return 0;
}