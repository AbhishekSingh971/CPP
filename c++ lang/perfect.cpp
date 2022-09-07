#include <bits/stdc++.h>
using namespace std;

int main(){
    long long num,sum=0;
    cin>>num;
    for (long long i = 1; i <= num/2; i*=2)
    {
        if (num%i==0)
        { 
          cout<<i<<" ";
          sum+=i;
        }
    }
    cout<<endl;
    if(sum==num){
        cout<<"perfect number "<< sum << endl;
    }
    else{
        cout<<"this is not a perfect number "<<endl;
    }

    return 0;
}