#include<iostream>
using namespace std;
void FlowerShop(int red_rose, int white_rose , int tulips);
main(){
int red_rose, white_rose,tulips; 
cout << "Red Rose: ";
cin >> red_rose;
cout << "White Rose: ";
cin >> white_rose;
cout << "Tulips: ";
cin >> tulips;

FlowerShop(red_rose,white_rose ,tulips);





}
void FlowerShop(int red_rose, int white_rose , int tulips)
{
float original_price = red_rose*2.0 + white_rose*4.10 + tulips*2.50;
cout << "Original price: $" << original_price <<endl;
if (original_price>200)
{
float discount_price = original_price-original_price*0.2;
cout << "Price after Discount: $" << discount_price;

}

else if (original_price<200)
{
    cout << "No discount applied." ;
}




}
