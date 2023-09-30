#include<iostream>
#include<windows.h>
using namespace std;
void moveplayer(int x,int y);
void gotoxy(int x , int y );
void maze();
main (){
system("cls");
int x=4,y=5;
maze();
moveplayer(x,y);



gotoxy(4,13);



}
void moveplayer(int x,int y)
{
while(1)
{
gotoxy(x, y);
cout << "P";
Sleep(200);
gotoxy(x,y);
cout << " ";

x=x+1;
if (x==24)
x=4;
}


}

void maze()
{

cout << "*************************"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*                       *"<<endl;
cout << "*************************"<<endl;

 
}

void gotoxy(int x , int y )
{

COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);





}

