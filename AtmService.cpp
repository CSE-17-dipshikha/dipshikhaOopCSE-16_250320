#include <iostream>
using namespace std;
 class AtmService {
    public:
    string accountNumber;
    string checkBalance;
    string changePin;
    string withdraw;
 };
  int main(){
    AtmService a;
    a.accountNumber="1234567890";
    a.checkBalance="500000000000000";
    a.changePin="1234";
    a.withdraw="1000";

     cout << "Account Number: " << a.accountNumber << endl;
    cout << "Balance: " << a.checkBalance << endl;
    cout << "PIN: " << a.changePin << endl;
    cout << "Withdraw Amount: " << a.withdraw << endl;

    return 0;
  }