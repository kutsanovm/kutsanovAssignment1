#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  //problem4

  cout << "What is the cost of the item?" <<endl;
  double cost;
  cin >> cost;

  cout << "In how many years will the item be purchased? " <<endl;
  double years;
  double originalYears;
  cin >> years;
  originalYears = years;

  cout <<"What is the rate of inflation? (as a percent)" << endl;
  double inflation;
  cin >> inflation;
  inflation = inflation/100;

  double inflatedCost;

  while(years != 0)
  {
    inflatedCost = (cost*inflation);
    cost += inflatedCost;
    --years;
  }


  cout << "This item will be $" << cost << " in " << originalYears << " years."<<endl;
  return 0;
}
