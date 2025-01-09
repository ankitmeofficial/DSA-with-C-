#include <iostream>
using namespace std;

int main()
{
// making a program which will check enter number is number , small alphabate , or capital alphabate
  cout << "Enter a number ";
  char text;
  cin >> text;
  if (text >= 'a' && text <= 'z')
  {
    cout << "entered number is small alphabate  ";
  }
  else if (text >= 'A' && text <= 'Z')
  {
    cout << "Enrered number is capital alphabate ";
  }
  else
  {
    cout << "number is number";
  }

  return 0;
}