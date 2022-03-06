#include <iostream>

using namespace std;

class addamount
{
    public:
    int amount=50;
    
    addamount()
    {
        cout << "no amount added";
    }
    addamount(int amt)
    {
        amount = amount + amt;
        cout << "finalamount = " << amount;
    }
};

int main()
{
    int amt,finalamount;
    cout << "enter amount: ";
    cin >> amt;
    addamount a1();
    addamount a2(amt);
    return 0;
}

