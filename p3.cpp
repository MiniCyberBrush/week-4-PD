#include <iostream>
using namespace std;
void discount(string name, float price);
main()
{
    string name;
    float price;
    cout << "Enter the country's name: ";
    cin >> name;
    cout << "Enter the ticket price in dollars: $";
    cin >> price;
    discount(name, price);
}
void discount(string name, float price)
{
    float discount_value;
    if (name == "Pakistan")
    {
        discount_value = price * 0.05;
    }
    if (name == "Ireland")
    {
        discount_value = price * 0.1;
    }
    if (name == "India")
    {
        discount_value = price * 0.2;
    }
    if (name == "England")
    {
        discount_value = price * 0.3;
    }
    if (name == "Canada")
    {
        discount_value = price * 0.45;
    }
     cout << "Final ticket price after discount: $" << price-discount_value;
    
    }