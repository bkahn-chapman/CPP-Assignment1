#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  float metricTon = 35273.92; //the weight in ounces of a metric ton
  float cerealWeight; //weight of the cereal box according to the user (in float in case it isn't a whole number)
  float numTons; //number of metric tons the one cereal box weighs (in float because it is essentially guaranteed to not be a whole number)
  int numBoxes; //number of cereal boxes needed to make one metric ton (in int because boxes don't come in fractions)

  cout << "What is the weight of the cereal box in ounces?" << endl;
  cin >> cerealWeight; //gets the weight of the cereal box from the user
  numTons = cerealWeight / metricTon; //determines how many metric tons the user's cereal box weighs, rounds to nearest metric ton when within .01 of the actual metric ton weight due to float storage
  cout << "The box of cereal weighs " << numTons << " metric tons." << endl;
  numBoxes = (metricTon / cerealWeight) + 1; //determines the number of boxes it would take to make a metric ton (+1 because int always rounds down and that wouldn't make a true full metric ton)
  cout << "You would need " << numBoxes << " cereal boxes to have at least metric ton." << endl;
  return 0;
}
