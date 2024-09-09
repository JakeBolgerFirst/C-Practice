#include <iostream>

using namespace std;

/*
 * program to provide change to a user given the numbe of cents
 */
 

int main(){
    
    //define values
    const int dollar_value {100};
    const int quater_value {25};
    const int dime_value {10};
    const int nickel_value {5};
    
    int change_amount {};
    
    cout << "Enter an amount in cents : ";
    cin >> change_amount;
    
    int balance{}, dollars{}, quarters{}, dimes{}, nickles{}, pennies{};
    
    //solution 1
    //
    
    dollars = change_amount / dollar_value;
    balance = change_amount - (dollars * dollar_value);
    
    quarters = balance / quater_value;
    balance -= quarters * quater_value;
    
    dimes = balance / dime_value;
    balance -= dimes * dime_value;
    
    nickles = balance / nickel_value;
    balance -= nickles * nickel_value;
    
    pennies = balance;
    
    //solution 2
    //
    
    balance = dollars = quarters = dimes = nickles = pennies = 0;
    
    dollars = change_amount /dollar_value;
    balance = change_amount % dollar_value;
    
    quarters = balance / quater_value;
    balance %= quater_value;
    
    dimes = balance /dime_value;
    balance %= dime_value;
    
    nickles = balance / nickel_value;
    balance %= nickel_value;
    
    pennies = balance;
    
    cout << dollars << endl; 
    cout << quarters << endl; 
    cout << dimes << endl; 
    cout << nickles << endl; 
    cout << pennies << endl;
    
    
    
    
    
}
