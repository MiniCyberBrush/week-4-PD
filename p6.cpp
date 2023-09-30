#include<iostream>
using namespace std;
void LongestTime(int hour , int minutes);
main(){

int hour,minutes;
cout << "Enter the number of hours: ";
cin >> hour;
cout << "Enter the number of minutes: ";
cin >> minutes;
LongestTime(hour ,minutes);







}

void LongestTime(int hour , int minutes)
{
if (hour*60>minutes)
cout << hour;
else 
cout << minutes;




}