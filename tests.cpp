//----------------------------------------------------------
// CS161 Assignment Starter Code
// Copyright Andrew Scholer (ascholer@chemeketa.edu)
// Neither this code, nor any works derived from it
//    may be republished without approval.
//----------------------------------------------------------

// Bring in unit testing code and tell it to build a main function
// If you have multiple unit test files, only one should have this define
#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

// Use Approx from doctest without saying doctest::Approx
using doctest::Approx;

//-----------------------------------------------------------------------------------

#include <format>
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

// Functions to write.
// You do NOT need to write doxygen comments for these. You may add extra helper
// functions if you want. Work on them one at a time.

// string formatTimeToAMPM(int hours, int minutes)

// string reformatTime(const string& time24)


//-----------------------------------------------------------------------------------
// Testing code

// TEST_CASE("formatTimeToAMPM")
// {
//   cout << "1: formatTimeToAMPM" << endl;
//   CHECK(formatTimeToAMPM(17, 54) == "5:54 PM");
//   CHECK(formatTimeToAMPM(12, 30) == "12:30 PM");
//   CHECK(formatTimeToAMPM(3, 5) == "3:05 AM");
//   CHECK(formatTimeToAMPM(0, 0) == "12:00 AM");
// }

// TEST_CASE("formatTimeToAMPM exception")
// {
//   cout << "2: formatTimeToAMPM exception handling" << endl;
//   CHECK_THROWS(formatTimeToAMPM(24, 0));
//   CHECK_THROWS(formatTimeToAMPM(12, 60));
//   CHECK_THROWS(formatTimeToAMPM(-1, 0));
//   CHECK_THROWS(formatTimeToAMPM(0, -1));
// }

// TEST_CASE("reformatTime")
// {
//   cout << "3: reformatTime" << endl;
//   CHECK(reformatTime("17:54:48") == "5:54 PM");
//   CHECK(reformatTime("12:30:15") == "12:30 PM");
//   CHECK(reformatTime("03:05:09") == "3:05 AM");
//   CHECK(reformatTime("00:00:00") == "12:00 AM");
// }

// TEST_CASE("reformatTime bad times")
// {
//   cout << "4: reformatTime exception handling" << endl;
//   CHECK(reformatTime("11:60:12") == "???"); // minutes invalid
//   CHECK(reformatTime("11:99:12") == "???"); // minutes invalid
//   CHECK(reformatTime("25:11:12") == "???"); // hours invalid
//   CHECK(reformatTime("99:11:12") == "???"); // hours invalid
// }
