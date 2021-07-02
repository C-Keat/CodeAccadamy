#include <iostream>

// Define needs_water() here:

std::string needs_water(int days, bool is_succulent) {

	std::string answer;

	//if statments:
	// if is succ false && days > 3 {answer = " time to water the plant."}

	if (is_succulent == false && days > 3) {
		answer = "Time to water the plant.";
	}
	else if (is_succulent == true && days < 12) {
		answer = "Don't water the plant!";
	}
	else if (is_succulent == true && days >= 13) {
		answer = "Go ahead and give the plant a little water.";
	}
	else {
		answer = "Don't water the plant!";
	}

	return answer;
}



int main() {

	std::cout << needs_water(10, false) << "\n";

}