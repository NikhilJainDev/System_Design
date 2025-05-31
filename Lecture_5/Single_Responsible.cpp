#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

// Product Class 

class Product{
    public:
    string name;
    int price;

    Product(string name, int price){
        this->name = name;
        this->price = price;
    }

};

// Shopping cart class 
class ShoppingCart{
    private:
    vector<Product*> Products;

    public:
    void addProducts(Product * p){
        Products.push_back(p);
    }

    vector<Product *> getProducts(){
        return Products;
    }

    // Methods of Shopping carts : 
    //1) Calculate Total Price 

    int calcTotalPrice(){
        int total = 0;
        for(auto p: Products){
            total += p->price;
        }
        return total;
    }

    //2) Cart Invoice Printer  - We have to print the billing 

    void PrintInvoice(){
        for(auto p : Products){
            cout<< p->name <<" Rs - "<< p->price <<endl;
        }
        cout<<" The Total Bill to pay is : "<< calcTotalPrice() <<endl;
    }

    //3) Card Db storage 

    void cardDbStorage(){
         cout<<" Saving cart Information to the DB ....... "<<endl;
    }

};

int main(){
    // Main Function 

    ShoppingCart * sc = new ShoppingCart();
    sc->addProducts( new Product(" Laptop ", 10000));
    sc->addProducts( new Product(" Mobile ",  7500));

    sc->calcTotalPrice();
    sc->PrintInvoice();
    sc->cardDbStorage();


    

    return 0;
}