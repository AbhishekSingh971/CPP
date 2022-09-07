#include <bits/stdc++.h>
using namespace std;

    class Car{
        
        public:
        int acceleration;
        int brake;

        private:
        int enginePower;
        Car(int enginePower){
            this->enginePower=enginePower;
        }

        public:
        Car(int acceleration,int brake){
            this->acceleration = acceleration;
            this->brake = brake;
        }
        
    };

int main(){
    Car bmw=Car(100,50);
    // Car bmw(100,50);
    // cout<<bmw->acceleration;
    // cout<<bmw->brake;

    Car merc=Car(100,50);
    // Car merc(100,50);

    Car swift = Car(50);
    }
    
    return 0;
}