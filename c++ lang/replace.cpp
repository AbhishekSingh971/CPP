#include <bits/stdc++.h>
using namespace std;

int main(){
    string a="I am abhishek singh from delhi";
    string b="_";
    
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i]==' ')
        {
            char ch=toupper(a[i+1]);
            string str;
            str = ch;
            a.replace(i+1,1,str);
            a.replace(i,1,b);
        }
    }
    cout<<a<<endl;
    return 0;
}