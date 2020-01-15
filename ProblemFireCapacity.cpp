#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  int maxCapacity; //maximum capacity is an integer because it is counted in whole numbers of people
  int numPeople; //number of people is an integer because it is impossible to have anything other than 1 whole person at a time

  cout << "What is the maximum capacity of the room?" << endl;
  cin >> maxCapacity; //gets the user's input for maximum room capacity
  cout << "How many people are attending the meeting?" << endl;
  cin >> numPeople; //gets the user's input for the number of people attending

  if(numPeople <= maxCapacity) //less people than the maximum capacity or the exact number of people
  {
    cout << "It is legal to hold the meeting in this room." << endl;
    cout << "There is room for " << (maxCapacity - numPeople) << " more people in this room." << endl; //calculates how many more people can be fit into the room
  }
  else //more people than the maximum capacity
  {
    cout << "This meeting cannot be held as planned in accordance with fire safety regulations." << endl;
    cout << (numPeople - maxCapacity) << " people will need to be excluded from the meeting in order to meet the regulations." << endl; //calculates how many people need to be excluded
  }

  return 0;
}
