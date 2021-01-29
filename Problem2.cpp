#include <iostream>

using namespace std;

int main()
{
    int maxCapacity;
    int attendees;
    int additionalAttendees;
    int excessAttendees;
    cout << "Enter the maximum room capacity" << endl;
    cin >> maxCapacity;
    cout << "Enter the number of attendees" << endl;
    cin >> attendees;
    if (maxCapacity >= attendees){
      additionalAttendees = maxCapacity-attendees;
      cout << "It is legal to hold this meeting. " << additionalAttendees << " more people can legally attend." << endl;
    }
    else if (maxCapacity < attendees){
      excessAttendees = attendees-maxCapacity;
      cout << "This meeting cannot be held due to fire regulations. You need to exclude " << excessAttendees << " people in order to meet fire regulations."<<endl;
    }

    return 0;
}
