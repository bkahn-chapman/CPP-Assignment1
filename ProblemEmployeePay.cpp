#include <iostream>
#include <iomanip> //for use with fixed and setprecision()
using namespace std;

int main(int argc, char **argv)
{
  float employeePay = 16.00; //pay for normal hours
  const unsigned int hoursWeek = 40; //standard number of hours worked in a week
  float hoursWorked; //user input for hours worked (includes possibility for partial hours)
  float ssTax; //social security tax
  float federalTax; //federal income tax
  float stateTax; //state income tax
  float grossPay; //gross pay tracker
  float netPay; //net pay tracker

  cout << "How many hours were worked this week?" << endl;
  cin >> hoursWorked; //gets the number of hours worked in from the user

  grossPay = (hoursWeek * employeePay) + ((hoursWorked-hoursWeek) * (employeePay * 1.5)); //determines the overall grosspay for the amount of hours worked
  cout << "The gross pay this week was $" << fixed << setprecision(2) << grossPay << "." << endl; //accurate cents reporting

  ssTax = grossPay * 0.06; //calculates social security tax
  cout << "$" << fixed << setprecision(2) << ssTax << " was withheld for Social Security tax." << endl; //accurate cents reporting
  federalTax = grossPay * 0.14; //calculates federal income tax
  cout << "$" << fixed << setprecision(2) << federalTax << " was withheld for federal income tax." << endl; //accurate cents reporting
  stateTax = grossPay * 0.05; //calculates state income tax
  cout << "$" << fixed << setprecision(2) << stateTax << " was withheld for state income tax." << endl; //accurate cents reporting
  cout << "$10.00 was withheld for medical insurance." << endl;

  netPay = grossPay - ssTax - federalTax - stateTax - 10; //calcualtes the net pay for the week
  cout << "The overall net take-home pay for the week was $" << fixed << setprecision(2) << netPay << "." << endl; //accurate cents reporting

  return 0;
}
