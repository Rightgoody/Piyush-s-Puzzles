// Joshua Park
// Piyush Goyal
// Piyush's Puzzles
// This is my attempt at the first problem

#include <iostream>
#include <vector>
#include <cmath>

int main() {
    long long int user_input{0}; // user input

    std::cout << "Enter the number: ";
    std::cin >> user_input;
    
    if(user_input < 0) {
        std::cout << "Only positive numbers allowed.\n";
        return 0;
    }

    std::vector <int> first_half_factor_list{}; // vector to store the first half of factors
    std::vector <int> second_half_factor_list{}; // vector to store the second half of factors
    double squared_user_input = sqrt(user_input); // stores the value of user square root number to use in for loop

    for(long long int i=1; i <= squared_user_input; i++) {
        if(user_input % i == 0 ) {
            first_half_factor_list.push_back(i);

            if (i != user_input / i) {
            second_half_factor_list.insert(second_half_factor_list.begin(), user_input / i);
            }
        }
    }

    std::cout << "Factors of " << user_input
              << ": ";

    long int n1 = first_half_factor_list.size();
    long int n2 = second_half_factor_list.size();

    for (int i=0; i < n1; i++) {
        std::cout << first_half_factor_list.at(i) << ", ";
    }

    for (int i=0; i < n2 - 1; i++) {
        std::cout << second_half_factor_list.at(i) << ", ";
    }
        std::cout << second_half_factor_list.at((second_half_factor_list.size() - 1)) << std::endl;
 
return 0;
}