#include <iostream>

using namespace std;
/*A metric ton is 35,273.92 ounces.
Write a program that will read the weight
(console input) of a package of breakfast
cereal in ounces and output the weight in metric tons as
well as the number of boxes needed to yield one metric ton of cereal.
*/
int main(int argc, char **argv)
{
  //problem 1
  double weightInOz;
  double weightInTons;
  double numBoxes;

  cout << "What is the box weight in ounces?" << endl;
  cin >> weightInOz;


  weightInTons = weightInOz * .00003125;
  numBoxes =  35273.92/weightInOz;

  cout << "The package is " << weightInTons << " tons." << endl;
  cout << "It will take " << numBoxes << " boxes to yield one ton of cereal." << endl;
  cout << endl;


}
