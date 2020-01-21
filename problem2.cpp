#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
//problem 2

  int maxRoomCap;
  int numAttendance;

  cout << "What is the max room capacity?" <<endl;
  cin >> maxRoomCap;

  cout <<"How many people are in attendance?" << endl;
  cin >> numAttendance;

  if (numAttendance <= maxRoomCap)
  {
    cout << "It is legal to hold this meeting. " << endl;
    cout << (maxRoomCap-numAttendance) << " additional people can attend." << endl;
  }
  else
  {
    cout << "This meeting cannot legally be held." << endl;
    cout << numAttendance - maxRoomCap << " people must leave the room." << endl;
  }
cout << endl;
}
