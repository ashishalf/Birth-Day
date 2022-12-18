#include <iostream>
#include <map>
using namespace std;

int leapYear(int year){
    
  int rem1, rem2;
  rem1 = year % 400;
  rem2 = year % 4;
  
  if (rem1 == 0) {
    return year / 4;
  }
  else if (rem2 == 0) {
    return year / 4;
  }
  else {
    return year / 4;
  }
}

int main() {
    
    //variables initialization
    int d,m,y,ly, day;
    map<int, int>month;
    
    //store the value of months
    month = {{1, 0}, {2, 3}, {3, 3},{4, 6}, {5, 1}, {6, 4},{7, 6}, {8, 2}, {9, 5},{10, 0}, {11, 3}, {12, 5}};
    
    //inputs from user
    cout << "Enter Day: ";
    cin >> d;
    cout << "Enter Month: ";
    cin >> m;
    cout << "Enter Year: ";
    cin >> y;
    
    //subtract from 1900
    y = abs(1900 - y);
    
    ly = leapYear(y);
    
    day = (d + month[m] + y + ly) % 7;
    
    if (day == 0) {
    cout << "Sunday";
    }
    else if (day == 1) {
    cout << "Monday";
    }
    else if (day == 2) {
    cout << "Tuesday";
    }
    else if (day == 3) {
    cout << "Wednesday";
    }
    else if (day == 4) {
    cout << "Thurday";
    }
    else if (day == 5) {
    cout << "Friday";
    }
    else if (day == 6) {
    cout << "Saturday";
    }
    
    return 0;
}