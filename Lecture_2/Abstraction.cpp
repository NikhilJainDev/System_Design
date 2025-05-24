#include<iostream>
#include<string>
using namespace std;

// Representation of a Real life car 
class car{
    public:
    // virtual keyword : It decleares the method not defining it 
    virtual void startEngine() = 0;
    virtual void shiftGear(int gear) = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
    virtual void stopEngine() = 0;

   virtual ~ car(){
   }
};

class sportsCar : public car {
    public:
    // Apply charactersticts of the car 
    string brand;
    string model;
    bool isEngineOn;
    int currentspeed;
    int currentGear;

    // constructor 
    sportsCar(string b, string m){
        this->brand = b;
        this->model = model;
        isEngineOn = false;
        currentspeed = 0;
        currentGear = 0;
    }


    void startEngine(){
        isEngineOn = true;
        cout<<" Engine on with  roar "<<endl;
    }

    void shiftGear(int gear){
        if(!isEngineOn){
            cout<<" can't shift gear engine is turned off "<<endl;
            return;
        }
        currentGear = gear;
        cout<<" Gear shifted to : "<<currentGear<<endl;
    }

    void accelerate(){
        if(!isEngineOn){
            cout<<" Can't accelerate with off engine "<<endl;
            return;
        }
        currentspeed += 20;
        cout<<" Acceleerating with speed : "<<currentspeed<<endl;
    }

    void brake(){
        currentspeed -= 20;
        if(currentspeed < 0){
            currentspeed = 0;
            cout<<" Breaking speed is now : "<<currentspeed<<endl;
        }
    }

    void stopEngine(){
        isEngineOn = false;
        currentGear = 0;
        currentspeed = 0;
        cout<<" Engine turned off "<<endl;
    }

};

// Main Function 
int main(){

    car * mycar  = new sportsCar(" Ford" , "Mustang ");
    mycar->startEngine();
    mycar->shiftGear(1);
    mycar->accelerate();
    mycar->stopEngine();
    mycar->brake();


    return 0;
}