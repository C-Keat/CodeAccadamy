// PlanetFigher.cpp : This file contains the 'main' function. Program execution begins and ends there.
// making a change

#include <iostream>
#include <string>

using namespace std;

int main()
{

    int planetNumber;
    float relativeGravity, weight;
    string selectedPlanet;

    // ask what the weight of the fighter is
    std::cout << "What is your weight (kg): ";
    std::cin >> weight;

    //which planet does he want to fight on - list the planets with there numbers
    std::cout << "\n1 : Mercury\n2 : Venus\n3 : Mars\n4 : Jupiter\n5 : Saturn\n6 : Uranus\n7 : Neptune\n";

    std::cout << "\nWhich planet do you want to fight on, type the number: ";
    //cin the planet number
    std::cin >> planetNumber;

    //switch statement for when he planet has been selected - sets the relative gravity and planet
    //sets the relativeGravity variable based on which planet is selected - assigns the selected planet variable too
    switch (planetNumber) {
    case 1:
        relativeGravity = 0.38;
        selectedPlanet = "Mercury";
        break;
    case 2:
        relativeGravity = 0.91;
        selectedPlanet = "Venus";
        break;
    case 3:
        relativeGravity = 0.38;
        selectedPlanet = "Mars";
        break;
    case 4:
        relativeGravity = 2.34;
        selectedPlanet = "Jupiter";
        break;
    case 5:
        relativeGravity = 1.09;
        selectedPlanet = "Saturn";
        break;
    case 6:
        relativeGravity = 0.92;
        selectedPlanet = "Uranus";
        break;
    case 7:
        relativeGravity = 1.19;
        selectedPlanet = "Neptune";
        break;


    }


    std::cout << "You have selected " << selectedPlanet << " your weight on this world is: " << weight * relativeGravity << "kg";

    return 0;

}
