#include <iostream>
using namespace std;

int main(){
    int a;
    short b;
    long c;
    // long long d;
    // float score=45.453;
    // double score1=45.453;
    // long double score3=45.332;
    // float const score4=45.345;
    cout<<"enter the first number"<<endl;
    cin>>a; 
    cout<<"enter the second number"<<endl;
    cin>>b; 
    cout<<"enter the third number"<<endl;
    cin>>c; 

    //arithmetic oprator
    // cout<<"a+(b+c) is :"<<(b+c)+a<<endl;
    // cout<<"a-(b+c) is :"<<(b+c)-a<<endl;
    // cout<<"a*(b+c) is :"<<(b+c)*a<<endl;
    // cout<<"a/(b+c) is :"<<(b+c)/a<<endl;

    //if and else condition
    if (a+b>=c)
    {
        cout<<"a+b is greater than equal to c "<<endl;
    }
    else{
        cout<<"a+b is not greater than equal to c"<<endl;
    }
    
    return 0;
}