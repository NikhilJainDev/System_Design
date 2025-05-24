#include<iostream>
#include<string>
using namespace std;
class Grandparent{
    public:
    Grandparent(){
        cout<<" Hi I am Grand parent class "<<endl;
    }
};
class Parent : public Grandparent{
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
int main()
{
    child ch;
return 0;
}