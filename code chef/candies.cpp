#include <bits/stdc++.h>
using namespace std;
// There are NN children and Chef wants to give them 11 candy each. Chef already has XX candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 44 candies are available.

// Determine the minimum number of candy packets Chef must buy so that he is able to give 11 candy to each of the NN children.

int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,x;
        cin>>n>>x;
        if (n<=x)
        {
            cout<<0<<endl;
        }
        else{
            if ((n-x)%4==0)
            {
                cout<<(n-x)/4<<endl;
            }
            else{
                cout<<((n-x)/4)+1<<endl;
            }
        }  
    }
    return 0;
}