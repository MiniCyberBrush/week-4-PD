#include<iostream>
using namespace std;
void pet(int holidays);
main(){
int holidays;
cout << "Holidays: ";
cin >> holidays;
pet(holidays);
}
void pet(int holidays)
{

int working_days = 365-holidays;
int time_for_games = (365-holidays)*63+(holidays*127);
int difference_from_norm = 30000-time_for_games;
int hours = difference_from_norm/60;
int minutes = difference_from_norm % 60;

if (difference_from_norm >=0) 
    {
        cout << "Tom sleeps well"<<endl ;
        cout << hours << " hours and " << minutes << " minutes less for play" ;

    } else 
    
    {
        cout << "Tom will run away"<<endl;
        cout << -1*hours << " hours and " << -1*minutes << " minutes for play" ;
}
}