#include<iostream>
using namespace std;
void tpChecker(int people , int tp);
main(){

int tp, people;
cout << "Number of people in the household: ";
cin >> people;
cout << "Number of rolls of TP: ";
cin >> tp;
tpChecker(people ,tp);

}

void tpChecker(int people , int tp)
{
int check = (tp*500)/(people*57);
if (check < 14)
cout << "Your TP will only last " << check << " days, buy more!";
if (check >= 14)
cout << "Your TP will last "<< check << " days, no need to panic!";


}