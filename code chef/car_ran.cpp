// Chef rented a car for a day.

// Usually, the cost of the car is Rs 1010 per km. However, since Chef has booked the car for the whole day, he needs to pay for at least 300300 kms even if the car runs less than 300300 kms.

// If the car ran XX kms, determine the cost Chef needs to pay.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<=300){
	        cout<<x*10;
	    }
	    else{
	        cout<<x*10<<endl;
	    }
	}
	return 0;
}
