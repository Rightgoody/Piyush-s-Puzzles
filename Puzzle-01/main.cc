// Joshua Park
// Piyush Goyal
// Piyush's Puzzles
// This is my attempt at the first problem

#include <iostream>
#include <vector>

int main() {
    unsigned long long int user_input{0}; // user input

    std::cout << "Enter the number: ";
    std::cin >> user_input;
    
    if(user_input < 0) {
        std::cout << "Only positive numbers allowed.\n";
        return 0;
    }
    std::vector <int> factor_list{}; // vector to store the factors

    for(int i=1; i < user_input; i++) {
        if(user_input % i == 0 ) {
            factor_list.push_back(i);
        }
    }

    std::cout << "Factors of " << user_input
              << ": ";

    long int n = factor_list.size();

    for(int i=0; i < n-1; i++) {
        std::cout << factor_list.at(i) << ", ";
    }

    std::cout << factor_list.at(n-1) << "\n";

    // Optimization could be stopping to search for factors after the size
    // of the vector is less than the size of its square root.
    
return 0;
}