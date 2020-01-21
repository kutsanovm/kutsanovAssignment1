#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  //problem3

  int numHoursWorked;
  int overtimeHours, overtimePay, grossPay, totalPay, initialPay;
  double socialTax, fedTax, stateTax;
  double overtimeRate = 16.0 * 1.5;
  cout <<"How many hours did you work this week?" << endl;
  cin  >> numHoursWorked;


  if (numHoursWorked > 40)
  {
    overtimeHours = numHoursWorked - 40;
    overtimePay = overtimeRate*overtimeHours;
    initialPay = 16 * 40;
    grossPay = initialPay+overtimePay;
    totalPay = grossPay;
    socialTax = double(0.06*grossPay);
    totalPay = totalPay-socialTax;
    fedTax = double(0.014*grossPay);
    totalPay = totalPay-fedTax;
    stateTax = double(0.05*grossPay);
    totalPay = totalPay-stateTax;
    totalPay = totalPay-10;
  }

  else
  {
    initialPay = 16 * numHoursWorked;
    grossPay = initialPay+overtimePay;
    totalPay = grossPay;
    socialTax = double(0.06*grossPay);
    totalPay = totalPay-socialTax;
    fedTax = double(0.014*grossPay);
    totalPay = totalPay-fedTax;
    stateTax = double(0.05*grossPay);
    totalPay = totalPay-stateTax;
    totalPay = totalPay-10;
  }




  cout <<"Gross pay: " <<grossPay<<endl;
  cout <<"Social Security Tax: " <<socialTax<<endl;
  cout <<"Federal Tax: " <<fedTax<<endl;
  cout <<"State Tax: " <<stateTax<<endl;
  cout <<"Take home pay: " <<totalPay<<endl;
  cout << endl;
}
