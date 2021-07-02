// LeepYearCalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

//Optional: Let’s try a challenging problem that will put all your brain cells to the test.

//Write a leap_year.cpp program that :

//Takes a year as input.
//Checks to see if the year is a four - digit number.
//Displays whether or not the year falls on a leap year.

//There are 3 criteria that must be taken into account to identify a leap year :

    //If the year can be evenly divided by 4 then it is a leap year, however…

    //If that year can be evenly divided by 100, and it is not evenly divided by 400, then it is NOT a leap year.

    //If that year is evenly divisible by 400, then it is a leap year.

//Take some time to researchand brainstorm before starting to write the code!

#include <iostream>
#include <string>
#include <cmath>




int main()
{
#include <iostream>
    
   // set a year variable
    int year;
    int stringLength;

    bool isLeapYear;

    std::cout << "Please find a leap year" << std::endl;

    do
    {
        //get input to see what year it is cin
        //check to see if it is a 4 digit number - research how .size?
        do
        {
            std::cout << "Please type a year: ";
            std::cin >> year;

            stringLength = std::to_string(year).length();

            std::cout << "The length of year was: " << stringLength << std::endl;

            if (stringLength != 4) {
                std::cout << "Please re-enter a year" << std::endl;
            }

        } while (stringLength != 4);

        //1. If the year is evenly divisible by 4, go to step 2. Otherwise, go to step 5.
        //2. If the year is evenly divisible by 100, go to step 3. Otherwise, go to step 4.
        //3. If the year is evenly divisible by 400, go to step 4. Otherwise, go to step 5.
        //4. The year is a leap year(it has 366 days).
        //5. The year is not a leap year(it has 365 days).

        //calculate if the year is a leap year
        //display if this year is a leap year
        if (year % 4 == 0) { //step one
            if (year % 100 == 0) {//step two
                if (year % 400 == 0) {//step tree
                    std::cout << "This is a leap year - it has 366 days" << std::endl;//step four
                    isLeapYear = true;
                }
                else {
                    std::cout << "The year is not a leap year - 365 days" << std::endl;//step five
                    isLeapYear = false;
                }
            }
            else {
                std::cout << "This is a leap year - it has 366 days" << std::endl;//step four
                isLeapYear = true;
            }
        }
        else {
            std::cout << "The year is not a leap year - 365 days" << std::endl;//step five
            isLeapYear = false;
        }

    } while (isLeapYear != true);
    
}


