#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int num = stoi(s);
    int sum = 0, var;
    for (int i = 0; i < s.length(); i++)
    {
        var = s.at(i) - 48;
        cout<<pow(var, s.length())<<endl;
        sum += floor(pow(var, s.length()));
    }
    cout<<sum<<endl;
    if(sum == num){
        cout<<"It is Armstrong Number"<<endl;
    }else{
        cout<<"It is not a Armstrong Number"<<endl;
    }
    return 0;
}