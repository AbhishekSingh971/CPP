#include<iostream>
using namespace std;

int main(){
int a,b,c,d,w,x,y,z;
cin>>a>>b>>c>>d>>w>>x>>y>>z;
int p1=max(a,b);
int p2=max(c,d);
int p3=max(w,x);
int p4=max(y,z);
int p5=max(p1,p2);
int p6=max(p3,p4);
int p7=max(p5,p6);
cout<<"max number is : "<<p7<<endl;
}
// g++ gratest_of_four.cpp -o gratest_of_four