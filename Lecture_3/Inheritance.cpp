#include<iostream>
#include<string>
using namespace std;


class A{
    public:
    void sayHello(){
        cout<<" Hello to A "<<endl;
    }
};

class B : public A{
    public:
    void SayHi(){
        cout<<" Hy to B "<<endl;
    }
};



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

    B * bb = new B();
    bb->sayHello(); // calling method of class A 
    bb->SayHi(); // calling method of class B 
return 0;
}