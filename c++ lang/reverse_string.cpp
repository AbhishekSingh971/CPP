#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<&s<<endl;
    getline(cin,s);
    for (int i = s.size(); i >=0; i--)
    {
        cout<<s[i];
    }
    cout<<endl<<&s;
    
    return 0;
}