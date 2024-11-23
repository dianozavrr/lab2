#include <iostream>
#include <iomanip>

int main() {
    int number;

    
    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::cout << "Number is even: " << (number % 2 == 0 ? "YES" : "NO") << '\n';

   
    std::cout << "Number is divisible by 8: " << (number % 8 == 0 ? "YES" : "NO") << '\n';

    
    std::cout << "Number is divisible by 16: " << (number % 16 == 0 ? "Yes" : "No") << '\n';

    
    std::cout << "Number(8): " << std::oct << number << '\n';

    
    std::cout << "Number(16): " << std::hex << std::uppercase << number << '\n';

    return 0;
}
