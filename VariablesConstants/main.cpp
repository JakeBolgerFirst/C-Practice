#include <iostream>


/*
 * This program calculates price for a PC repair shop
 */
 
using namespace std;

int main(){
    
    //Jakes PC Repair Shop
    //
    const int dustRemovalPerPart {12};
    const int partService {45};
    
    const double salesTax {.06};
    const int timeValid {90};
    
    int numParts {};
    int numPartsServiced {};
    
    
    cout << "Hello! What can I do for you today?" << endl;
    cout << "Dust Removal Per Part: " << dustRemovalPerPart << endl;
    cout << "Part Service: " << partService << endl;
    cout << "Tax is: 6%." << endl;
    
    cout << "Enter number of parts for dust removal: ";
    cin >> numParts;
    
    cout << "How many parts do you want serviced? ";
    cin >> numPartsServiced;
    
    int long cost {};
    double long totalCost {};
    double taxDisplay {};
    
    
    cost = (numParts * dustRemovalPerPart) + (numPartsServiced * partService);
    taxDisplay = cost * salesTax;
    totalCost = cost + (cost * salesTax);
    
    cout << "Sales Tax: " << taxDisplay << endl;
    cout << "Your total will be: " << totalCost << endl;
    
    cout << "This quote is valid for " << timeValid << " days." << endl;
    
    //end
    //
    
    
}
