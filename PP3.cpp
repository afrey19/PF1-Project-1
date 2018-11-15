#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

   //Declare Variables
   float xvalue = 0;
   int nvalue = 0;
   int nfac = 1;
   int nfac2 = 1;
   int nfac3 = 1;
   double sinx = 0;
   double cosx = 0;

   //Read X-Value Input
   cout << "Enter x-value: " << endl;
   cin >> xvalue;

   //Read N-Value Input
   do
    {
      cout << "Enter number of terms, n: " << endl;
      cin >> nvalue;
    }
    while(nvalue < 1);

   //First Table

   cout <<  "First Table: " << endl <<
   setw(5) <<  "n" << setw(10) << "n!" << setw(15) <<  "x^n" << endl;

   for (int num = 1; num <= nvalue; num++)
    {
      cout << setw(5) << num << setw(10)<<  num*nfac << setw(15) <<
      pow(xvalue,num) << endl;
      nfac = num*nfac;
    }

   //sin(x) Table

   cout << endl <<  "Sin(x) Table: " << endl << setw(5) << "n" << setw(20)
   << "x^n/n!" << setw(35) << "T-Series Approx" << endl;

   for (int num = 1; num <= nvalue; num++)
    {
      nfac2 = num*nfac2;
      if(num %4 == 1)
       {
       sinx = sinx+(pow(xvalue,num))/(nfac2);
       }
      if(num %4 == 3)
       {
       sinx = sinx-(pow(xvalue,num))/(nfac2);
       }
      //figure out factorial in tseries
      cout << setw(5) << num << setw(20) << (pow(xvalue,num))/(nfac2) <<
      setw(35) << sinx << endl; // Start HERE
    }

   //sin(x) accuracy test

   double truesinx = sin(xvalue);
   cout << "Sin(x) Accuracy: " << endl << "True Sin(x): " << truesinx <<
   endl << "Error: " << (truesinx - sinx) << endl;

   //cos(x) Table

   cout << endl << "Cos(x) Table: " << endl << setw(5) << "n" << setw(20)
   << "x^n/n!" << setw(35) << "T-Series Approx" << endl;

   for (int num = 0; num <= nvalue; num++)
    {
     if(num != 0)
     nfac3 = num*nfac3;
     if(num %4 == 0)
      {
      cosx = cosx+(pow(xvalue,num))/(nfac3);
      }
     if(num %4 == 2)
      {
      cosx = cosx-(pow(xvalue,num))/(nfac3);
      }
     cout << setw(5) << num << setw(20) << (pow(xvalue,num))/(nfac3) <<
     setw(35) << cosx << endl;
    }

   //cos(x) accuracy test

   double truecosx = cos(xvalue);
   cout << "Cos(x) Accuracy: " << endl << "True Cos(x): " << truecosx <<
   endl << "Error: " << (truecosx - cosx) << endl << endl;


   return 0;
}