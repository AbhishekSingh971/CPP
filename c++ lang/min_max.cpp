#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[10],n;
    cout<<"enter the no of element : ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0 ; j < n-1-i ; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }  
    }
    cout<<"min : " <<arr[0]<<"  max : "<<arr[n-1] <<endl;

    return 0;
}