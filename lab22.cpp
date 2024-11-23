#include <iostream>
#include <iomanip> 

int main() {
    double num1, num2;

  
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

  
    std::cout << std::fixed << std::setprecision(12);

    std::cout << "Addition: " << (num1 + num2) << '\n';
    std::cout << "Subtraction: " << (num1 - num2) << '\n';
    std::cout << "Multiplication: " << (num1 * num2) << '\n';

    if (num2 != 0) {
        std::cout << "Division: " << (num1 / num2) << '\n';
    } else {
        std::cout << "Division: cannot be calculated \n";
    }

    return 0;
}
