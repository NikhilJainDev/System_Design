#include <iostream>
#include <cstring>
using namespace std;
class Bank_Management
{
private:
    // Sensitive Information kept inside Private Member
    int account_number;
    int password;

public:
    string Login_id;
    int Amount, balance = 0;

    int Deposite(int Amount)
    {
        balance += Amount;
        cout << " Current Balance After deposite Rs. " << Amount << " : " << balance << endl;
    }

    int withDraw(int Amount)
    {
        balance = balance - Amount;
        cout << " Avl Balance = " << balance << endl;
    }

    // Designing Fixed Deposite System inside it
    void Fixed_Deposite_Amount(float Cash_value, int year, float interest_rate)
    { // will not pass ROI because it is a work of Bank who decides Interest Rate
        int your_interest = (Cash_value * year * interest_rate) / 100;
        cout << " Interest = " << your_interest << endl;
    }
};

int main()
{
    Bank_Management bm;
    bm.Deposite(1000);
    bm.withDraw(600);
    bm.Fixed_Deposite_Amount(20000, 2, 7.5);
    return 0;
}