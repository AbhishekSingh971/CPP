#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int d,l,g;
        cin>>d>>l>>g;
        if ((d>=l)&&(d<=g))
        {
            cout<<"Take second dose now"<<endl;
        }
        else if (d<l)
        {
            cout<<"Too Early"<<endl;
        }
        else{
            cout<<"Too Late"<<endl;
        }
    }
    return 0;
}