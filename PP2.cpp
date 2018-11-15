#include <iostream>
#include <cmath>
using namespace std;

int main()
{

//Restaurant Choice
   int Restaurant = 0;
   cout << "Enter Number for Corresponding Restaurant" << endl << "1. Wendy's" << endl << "2. Chick-fil-A" << endl << "3. Whataburger" << endl;
   cin >> Restaurant;

//Menu Choices
 int WendysFood = 0;
 int ChickFood = 0;
 int WhataFood = 0;
 float itemquantity = 0;
 float itemprice = 0;
 float cost = 0;
 float totalcost = 0;
 float salestax = 0;


 switch ( Restaurant )
{

     case 1:
      cout << "Wendy's Menu: " << endl <<
      "1. Dave's Single - $4.19" << endl <<
      "2. Dave's Double - $5.19" << endl <<
      "3. Dave's Triple - $6.09" << endl <<
      "4. Baconator - $6.09" << endl <<
      "5. Son of Baconator - $4.69" << endl <<
      "Enter Number for Corresponding Menu Item: " << endl;
      cin >> WendysFood;
      break;

     case 2:
      cout << "Chick-fil-A's Menu: " << endl <<
      "1. Chick-fil-A Sandwich - $3.05" << endl <<
      "2. Chick-fil-A Deluxe Sandwich - $3.65" << endl <<
      "3. Spicy Chicken Sandwich - $3.29" << endl <<
      "4. Spicy Chicken Deluxe Sandwich - $3.89" << endl <<
      "5. Chick-fil-A Nuggets (12 pc.) - $4.45" << endl <<
      "Enter Number for Corresponding Menu Item: " << endl;
      cin >> ChickFood;
      break;

      case 3:
       cout << "Whataburger's Menu: " << endl <<
       "1. Whataburger - $3.09" << endl <<
       "2. Double Meat Whataburger - $4.59" << endl <<
       "3. Triple Meat Whataburger - $6.09" << endl <<
       "4. Whataburger Patty Melt - $5.39" << endl <<
       "5. Monterey Melt - $5.39" << endl <<
       "Enter Number for Corresponding Menu Item: " << endl;
       cin >> WhataFood;
       break;

      default:
       cout << "Sorry, that restaurant is not available." << endl;
}

if (Restaurant == 1)
      switch ( WendysFood )
{
      case 1:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
        if (itemquantity < 0)
         cout << "Sorry, item quantity must be positive." << endl;
        else
        {
         itemprice = 4.19;
         cost = itemprice*itemquantity;
         salestax = cost*0.05;
         totalcost = cost + salestax;
         cout << "Total Cost: " << endl << totalcost << endl;
        }
        break;

      case 2:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 5.19;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 3:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 6.09;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 4:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 6.09;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 5:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 4.69;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      default:
       cout << "Sorry, that food item is not available." << endl;
}

if (Restaurant == 2)
      switch ( ChickFood )
{
      case 1:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 3.05;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 2:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 3.65;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 3:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 3.29;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 4:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 3.89;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 5:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 4.45;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      default:
       cout << "Sorry! That food item is not available." << endl;
}

if (Restaurant == 3)
      switch ( WhataFood )
{
      case 1:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 3.09;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 2:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 4.59;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 3:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 6.09;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 4:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 5.39;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      case 5:
       cout << "How many orders?" << endl;
       cin >> itemquantity;
       if (itemquantity < 0)
        cout << "Sorry, item quantity must be positive." << endl;
       else
       {
       itemprice = 5.39;
       cost = itemprice*itemquantity;
       salestax = cost*0.05;
       totalcost = cost + salestax;
       cout << "Total Cost: " << endl << totalcost << endl;
       }
       break;

      default:
       cout << "Sorry! That food item is not available." << endl;
}


   return 0;
}