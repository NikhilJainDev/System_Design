#include<iostream>
#include<string>
using namespace std;

class sportsCar{
   private:
    // charactersticts 
    string brand;
    string model;
    bool isEngineOn;
    int currentspeed;
    int currentGear;

    // constructor 
    public:
    sportsCar(string b, string m){
        this->brand = b;
        this->model = m;
        isEngineOn = false;
        currentspeed = 0;
        currentGear = 0;
    }

    // Getters and setters - used to set the value of private members (setters) and used to get the value of private members (getters)

  
    int get_currentspeed(){
        return this->currentspeed;
    }

    // Behaviours --> Methods 
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
    sportsCar * mysportsCar = new sportsCar(" Ford ", " Mustang ");
    mysportsCar->startEngine();
    mysportsCar->shiftGear(1);
    mysportsCar->accelerate();
    mysportsCar->brake();
    mysportsCar->stopEngine();

   cout<<" current speed of car is : "<<mysportsCar->get_currentspeed()<<endl;

   delete mysportsCar;

    return 0;
}