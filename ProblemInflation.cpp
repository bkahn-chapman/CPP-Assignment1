#include <iostream>
#include <iomanip> //for use with fixed and setprecision()
using namespace std;

int main(int argc, char **argv)
{
  float itemCost; //how much the item costs
  int numYears; //number of years until the item is bought or sold
  float inflationRate; //rate of inflation

  cout << "What is the current cost of the item? (Do not include the dollar sign.)" << endl;
  cin >> itemCost; //gets the cost of the item from the user
  cout << "How many whole years from now do you expect to buy or sell the item?" << endl;
  cin >> numYears; //gets the number of years from the user
  cout << "What is the rate of inflation? (Do not include the percent sign.)" << endl;
  cin >> inflationRate; //gets the inflation rate from the user (in percent form)

  inflationRate = (inflationRate / 100) + 1; //changes the inflation percentage to the inflation rate (add 1 to account for existing cost)

  for(int i = 1; i <= numYears; ++i) //run until all years have been inflated
  {
    itemCost = itemCost * (inflationRate); //update the item cost to account for inflation
  }

  cout << "In " << numYears << " years the item will cost $" << fixed << setprecision(2) << itemCost << "." << endl; //accurate cents reporting

  return 0;
}

//FIX THE ISSUE WHERE THE DOLLAR AMOUNTS DON'T HAVE TWO DECIMAL PLACES
