#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
    //define vector
    std::vector<int> threeVec{ num, num * 2,num * 3 };
    
    return threeVec;
}

int main() {

    for (int element : first_three_multiples(8)) {
        std::cout << element << "\n";
    }

}