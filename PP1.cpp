#include <iostream>
#include <cmath>
using namespace std;

int main()
{
//Local Variable Declarations for Sin(x)
float XValue = 0.0;
float MySinx = 0.0;
double Error = 0.0;
double TrueValue = 0.0;

//Local Variable Declarations for Cos(x)
float MyCosx = 0.0;
double Error2 = 0.0;
double TrueValue2 = 0.0;

//Read Input Parameters
cout << "Enter X-Value: ";
cin >> XValue;

//Estimate sinx using Taylor Series
MySinx = XValue - ((XValue*XValue*XValue)/(1*2*3))
               + ((XValue*XValue*XValue*XValue*XValue)/(1*2*3*4*5));

//Calculate True Sin Value
TrueValue = sin(XValue);

//Calculate Error
Error = (MySinx)-(TrueValue);

//Print Output
cout << endl << "Your Estimate of Sin = " << MySinx << endl;
cout << "True Value of Sinx = " << TrueValue << endl;
cout << "Error = " << Error << endl << endl;

//----------------------------------------------------------------------

//Estimate cosx using Taylor Series
MyCosx = 1 - ((XValue*XValue)/(1*2))
           +((XValue*XValue*XValue*XValue)/(1*2*3*4));

//Calculate True Cos Value
TrueValue2 = cos(XValue);

//Calculate Error
Error2 = (MyCosx)-(TrueValue2);

//Print Output
cout << "Your Estimate of Cos = " << MyCosx << endl;
cout << "True Value of Cosx = " << TrueValue2 << endl;
cout << "Error = " << Error2 << endl << endl;

return 0;
}