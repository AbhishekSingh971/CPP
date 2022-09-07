#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> prime,composite;
    for (int i = 2; i <= 100; i++)
    {
        if (i == 2 || i == 3 || i == 5 || i == 7)
        {
            prime.push_back(i);
        }
        else if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
        {
           prime.push_back(i);
        }
        else 
        {
            composite.push_back(i);
        }  
    }

    cout<<"Prime = [";
    for (int i = 0; i < prime.size(); i++)
    {
        if (i == prime.size()-1)
        {
            cout<<prime[i]<<"]"<<endl;
        }
        else{
        cout<<prime[i]<<",";
        }
    }
    
    cout<<"Composite = [";
    for (int i = 0; i < composite.size(); i++)
    {
        if (i == composite.size()-1)
        {
            cout<<composite[i]<<"]";
        }
        else{
        cout<<composite[i]<<",";
        }
    }
    return 0;
}