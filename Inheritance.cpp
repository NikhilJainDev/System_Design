#include<iostream>
#include<string>
using namespace std;

class GrandParent{
public:
GrandParent(){
cout<<" Hi I am Grand Parent class "<<endl;
}
};

class Parent : public GrandParent{
public:
Parent(){
    cout<<" Hi I am parent class "<<endl;
}

};

class child : public Parent{
    public:
    child(){
        cout<<" Hi I am child class "<<endl;
    }
};



int main(){
    child ch;
    return 0;
}