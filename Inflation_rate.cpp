#include<iostream>

using namespace std;

int main(){  
    int years;
    double cost, inflation, quantity, total_cost;
    int count = 0;
    cout << "This program is used to estimate the cost of you item you intend to purchase in the future. " << endl << endl;
    cout << "Please the quantity of you item you wish to purchase: ";
    cin >> quantity;
    cout << "Please enter the price of your item you wish to purchase: $";
    cin >> cost;
    cout << "Please enter the estimated inflation rate when you plan to purchase your item: ";
    cin >> inflation;
    inflation = inflation / 100;
    cout << "Please enter the number of years in which you plan to purchase your item: ";
    cin >> years;
    while (count < years){
        total_cost = (quantity * cost * inflation) + (quantity * cost);
        cout << "Total Cost Will Be: " << total_cost << endl;
        count = count + 1;
    }
    return 0;
}
_______________________________________________________________________________

#include<iostream>

using namespace std;

int main(){  
    int years;
    int quantity = 0.0;
    double cost = 0.0;
    double inflation = 0.0;
    double total_cost = 0.0;
    double new_cost = 0.0;
    double inflation_cost;
    int count = 0;
    cout << "This program is used to estimate the cost of you item you intend to purchase in the future. " << endl << endl;
    cout << "Please the quantity of you item you wish to purchase: ";
    cin >> quantity;
    cout << "Please enter the price of your item you wish to purchase: $";
    cin >> cost;
    cout << "Please enter the estimated inflation rate when you plan to purchase your item: ";
    cin >> inflation;
    inflation = inflation / 100;
    cout << "Please enter the number of years in which you plan to purchase your item: ";
    cin >> years;
    new_cost = cost;
    inflation_cost = quantity * new_cost * inflation;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    while (count < years)
    {
        total_cost = inflation_cost + (quantity * new_cost);
        cout << "Total Cost Will Be: " << total_cost << endl;
        count++;
        new_cost = total_cost + inflation_cost;
    }
    return 0;
}

