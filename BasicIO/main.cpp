#include <iostream>

using namespace std;

/*
 * This program practices basic cout and insertion operators in the form of a conversation.
 * 
*/

int main(){
    
    string nameOne {"Jake"};
    string nameTwo {"Niamh"};
    
    int x {7};
    int hoursSleep {};
    
    
    cout << nameOne << ": Good Morning! How are you today?" << endl;
    cout << nameTwo << ": I'm good! Thank you." << endl;
    
    cout << nameOne << ": What time did you wake up at?" << endl;
    cout << nameTwo << ": I woke up at " << x << "am." << endl;
    
    cout << nameOne << ": Oh, how many hours sleep did you get?" << endl;
    cin >> hoursSleep;
    
    cout << nameTwo << ": I got " << hoursSleep << " hours." << endl;
    cout << nameOne << ": Ok! See you later!" << endl;
    cout << nameTwo << ": Bye!" << endl;
    
    return 0;
    
    
}
