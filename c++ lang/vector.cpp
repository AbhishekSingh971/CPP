#include<bits\stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    // cout<<v.capacity();
    // v.push_back(1);
    // cout<<v.capacity();
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    cout<<v.capacity();
    v.push_back(1);
    cout<<v.capacity();
}