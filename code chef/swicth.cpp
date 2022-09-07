#include <bits/stdc++.h>
using namespace std;

// Kulyash stays in room that has a single bulb and NN buttons. The bulb is initially on.

// The initial states of the buttons are stored in a binary string SS of length NN — if S_iS 
// i
// ​
//   is 00, the ii-th button is off, and if S_iS 
// i
// ​
//   is 11, the ii-th button is on. If Kulyash toggles any single button then the state of the bulb reverses i.e. the bulb lights up if it was off and vice versa.

// Kulyash has toggled some buttons and the final states of the buttons are stored in another binary string RR of length NN. He asks you to determine the final state of the bulb
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,count=0;
        cin>>n;
        string s;
        cin>>s;
        string r;
        cin>>r;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i]!=r[i])
            {
               count++; 
            }
        }

        if (count%2==0)
        {
            cout<<"1"<<endl;
        }
        else{
        cout<<"0"<<endl;
        }
    }
    
    return 0;
}