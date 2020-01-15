#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  float employeePay = 16.00; //pay for normal hours
  int hoursWeek = 40; //standard number of hours worked in a week
  int hoursWorked; //user input for hours worked
  float ssTax; //social security tax
  float federalTax; //federal income tax
  float stateTax; //state income tax
  float grossPay; //gross pay tracker
  float netPay; //net pay tracker

  cout << "How many hours were worked this week?" << endl;
  cin >> hoursWorked; //gets the number of hours worked in from the user

  grossPay = (hoursWeek * employeePay) + ((hoursWorked-hoursWeek) * (employeePay * 1.5)); //determines the overall grosspay for the amount of hours worked
  cout << "The gross pay this week was $" << grossPay << "." << endl;

  ssTax = grossPay * 0.06; //calculates social security tax
  cout << "$" << ssTax << " was withheld for Social Security tax." << endl;
  federalTax = grossPay * 0.14; //calculates federal income tax
  cout << "$" << federalTax << " was withheld for federal income tax." << endl;
  stateTax = grossPay * 0.05; //calculates state income tax
  cout << "$" << stateTax << " was withheld for state income tax." << endl;
  cout << "$10 was withheld for medical insurance." << endl;

  netPay = grossPay - ssTax - federalTax - stateTax - 10; //calcualtes the net pay for the week
  cout << "The overall net take-home pay for the week was $" << netPay << "." << endl;

  return 0;
}

//FIX THE ISSUE WHERE DOLLAR AMOUNTS DON'T ALWAYS HAVE TWO DECIMAL PLACES
