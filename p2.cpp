#include <iostream>
using namespace std;
void Reverse(string binary);
main()
{
   string binary;
   cout << "Enter 'true' or 'false': ";
   cin >> binary;
   Reverse(binary);
}

void Reverse(string binary)
{
   if (binary == "true")
      cout << "false";

   if (binary == "false")
      cout << "true";
}