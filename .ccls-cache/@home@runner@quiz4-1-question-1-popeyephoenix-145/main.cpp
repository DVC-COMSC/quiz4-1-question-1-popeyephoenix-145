// Complete this program

#include <iostream>
using namespace std;

int main()
{
	int choice;

	double area;

	cout << "Geometry Calculator\n";
	cout << "\t1. Calculate the Area of Circle\n";
	cout << "\t2. Calculate the Area of Rectangle\n";
	cout << "\t3. Calculate the Area of Triangle\n";
	cout << "\t4. Quit\n\n";
	cout << "Enter your choice (1-4): ";
 #include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
  int num;  
cout << "(1) Calculate area of a Circle.\n";
cout << "(2) Calculate area of a Rectangle.\n";
cout << "(3) Calculate area of a Triangle.\n";
cout << "(4) Quit.\n";
cout << "Enter a NUMBER (1 - 4)\n";
  cin >> num;

if ((num < 0 ) || (num >= 5))
  cout << "INVALID OPTION\n";

double rad, pi = 3.14159, area; 
double L, W;
double B, H;
    
switch (num) {
  case 1:
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    if (rad < 0)
      cout << "INVALID VALUE\n";
    else 
      area = pi * pow(rad, 2);
      cout << setprecision(2) << fixed;
      cout << "AREA: " << area << endl;
  return (0);

  case 2:
    cout << "Enter the LENGTH and WIDTH of the Rectangle: ";
    cin >> L >> W;
  area = L * W;
    if (area > 0)
  cout << "AREA: " << area << endl;
    else 
      cout << "INVALID VALUE\n";
  return (0);

  case 3:
    cout << "Enter the BASE and HEIGHT of the Triangle: ";
    cin >> B >> H;
  area = B * H * 0.5;
   if (area > 0)
  cout << "AREA: " << area << endl;
    else 
      cout << "INVALID VALUE\n";
  return (0);

  case 4:
    cout << "PROGRAM STOPPED";
      return (0);
}

}