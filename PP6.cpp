//   Project 6             //
//   Author: Alex Frey     //
//   Lab TA: Blake Keeling //
//   Date: 11/13/2017      //

#include <string>
#include <cmath>
#include "part.h"
#include <iostream>
using namespace std;

//---------//
// Methods //
//---------//

// Set Price Method
// Sets Price of the Part
// 1 Parameter: const float part_price
void Parts::SetPrice(const float part_price)
{

cout << "--Set Price Method--" << endl;
cout << "  1 Parameter: " << part_price << endl;

}

// Get Price Method
// Retrieves Price of the Part
// No Parameters
float Parts::GetPrice() const
{

cout << "--Get Price Method--" << endl;
cout << "  No Parameters" << endl;

return 0;
}

// Set Name Method
// Sets Name of the Part
// 1 Parameter: const string part_name
void Parts::SetName(const string part_name)
{

cout << "--Set Name Method--" << endl;
cout << "  1 Parameter: " << part_name << endl;

}

// Get Name Method
// Retrieves Name of the Part
// No Parameters
void Parts::GetName() const
{

cout << "--Get Name Method--" << endl;
cout << "  No Parameters" << endl;

}

// Set Location Method
// Sets the location of the Part
// 1 Parameter: const char part_location
void Parts::SetLocation(char part_location)
{

cout << "--Set Location Method--" << endl;
cout << "  1 Parameter: " << part_location << endl;

}

// Get Location Method
// Retrieves the location of the Part
// No Parameters
void Parts::GetLocation()
{

cout << "--Get Location Method--" << endl;
cout << "  No Parameters" << endl;

}

// Set Color Method
// Sets the color of the Part
// 1 Parameter: const string part_color
void Parts::SetColor(const string part_color)
{

cout << "--Set Color Method--" << endl;
cout << "  1 Parameter: " << part_color << endl;

}

// Get Color Method
// Retrieves the color of the Part
// No Parameters
void Parts::GetColor()
{

cout << "--Get Color Method--" << endl;
cout << "  No Parameters" << endl;

}

// Set Quantity Method
// Sets the quantity of the Part
// 1 Parameter: const float part_quantity
void Parts::SetQuantity(const float part_quantity)
{

cout << "--Set Quantity Method--" << endl;
cout << "  1 Parameter: " << part_quantity << endl;

}

// Get Quantity Method
// Retrieves the quantity of the Part
// No Parameters
float Parts::GetQuantity()
{

cout << "--Get Quantity Method--" << endl;
cout << "  No Parameters" << endl;

return 0;
}

// Get Total Cost Method
// Retrieves and Calculate the total cost of the part(s)
// 2 Parameters: const float part_price and const float part_quantity
void Parts::GetTotalCost(const float part_price, const float part_quantity)
{

cout << "--Get Total Cost Method--" << endl;
cout << "  2 Parameters: " << part_price << "and" << part_quantity << endl;

}

// Print Method
// Prints everything
// No Parameters
void Parts::Print() const
{

cout << "--Print Method--" << endl;
cout << "  No Parameters" << endl;

}

// Switch Location Method
// Switches the aisle that the part is in and outputs new location
// 1 Parameter: char part_location
void Parts::SwitchLocation(char part_location)
{

cout << "--Switch Location Method--" << endl;
cout << "  1 Parameters: " << part_location << endl;

}

int main()
{

// Objects
   Parts p1;
   Parts p2;
   Parts p3;

// Calling Methods
   p1.SetPrice(5.99);
   p1.GetPrice();
   p1.SwitchLocation('A');
   p1.Print();
   p1.SetName("radiator");
   p1.SetColor("blue");
   p1.GetColor();
   p1.GetName();
   p1.SetQuantity(7);
   p1.GetTotalCost(5.99, 7);
   p1.GetQuantity();
   p1.SetLocation('B');
   p1.GetLocation();

   p3.SetPrice(15);
   p3.GetPrice();
   p3.SwitchLocation('C');
   p3.Print();
   p3.SetName("defibrillator");
   p3.SetColor("green");
   p3.GetColor();
   p3.GetName();
   p3.SetQuantity(5);
   p3.GetTotalCost(15, 5);
   p3.GetQuantity();
   p3.SetLocation('D');
   p3.GetLocation();

   p2.SetPrice(8.99);
   p2.GetPrice();
   p2.SwitchLocation('E');
   p2.Print();
   p2.SetName("engine");
   p2.SetColor("red");
   p2.GetColor();
   p2.GetName();
   p2.SetQuantity(11);
   p2.GetTotalCost(8.99, 11);
   p2.GetQuantity();
   p2.SetLocation('A');
   p2.GetLocation();

   return 0;
}