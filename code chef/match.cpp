#include<bits/stdc++.h>
using namespace std;
int main(){
    int temp[]={6,2,5,5,4,5,6,3,7,6};
  int t;
  cin>>t;
  while(t--){
    int a,b,n,sum=0;
    cin>>a>>b;
    n=a+b;
    while(n){
        int rem=n%10;
        n/=10;
        sum+=temp[rem];
    }
    cout<<sum<<endl;
  }
}