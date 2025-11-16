#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <stdexcept>

using namespace std;

string formatTimeToAMPM(int hours, int minutes)
{
    // check for invalid hour/minute
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59)
    {
        throw logic_error("invalid time");
    }

    bool isPM = (hours >= 12);
    int displayHour = hours % 12;
    if (displayHour == 0) displayHour = 12;

    string minuteStr = (minutes < 10 ? "0" : "") + to_string(minutes);
    string ampm = isPM ? "PM" : "AM";

    string result = to_string(displayHour) + ":" + minuteStr + " " + ampm;
    return result;
}

string reformatTime(const string& time24)
{
    int hours   = stoi(time24.substr(0, 2));
    int minutes = stoi(time24.substr(3, 2));
    int seconds = stoi(time24.substr(6, 2));
    (void)seconds; // just to avoid unused-variable warnings

    try {
        return formatTimeToAMPM(hours, minutes);
    }
    catch (const logic_error&)
    {
        return "???";
    }
}

int main()
{
  // ask for username
    cout << "Enter username: ";
    string targetUser;
    cin >> targetUser;

  // open the log file
    ifstream in("WebLog.txt");
    if (!in)
    {
        cout << "Could not open WebLog.txt" << endl;
        return 1;
    }
    
  // headings
    cout << endl;
    cout << left  << setw(20) << "Name"
         << left  << setw(12) << "Time"
         << right << setw(8)  << "Minutes" << endl;
    cout << string(40, '-') << endl;

