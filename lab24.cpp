#include <iostream>
#include <iomanip> 

int main() {
    int option;
    double temperature;

    
    std::cout << "select an optijn (1 - C to F , 2 - F to C): ";
    std::cin >> option;

    
    std::cout << "Enter the temperature: ";
    std::cin >> temperature;

   
    if ((option == 1 && temperature < -273.15) || (option == 2 && temperature < -459.67)) {
        std::cout << "TOO cold to count!\n";
        return 0; 
    }

    
    double converted_temperature;
    if (option == 1) {
       
        converted_temperature = temperature * 9.0 / 5.0 + 32.0;
        std::cout << "Temperature F: ";
    } else if (option == 2) {
        
        converted_temperature = (temperature - 32.0) * 5.0 / 9.0;
        std::cout << "Temperature C: ";
    } else {
        
        std::cout << "UnKnown option!\n";
        return 1; 
    }

    
    std::cout << std::fixed << std::setprecision(2) << converted_temperature << '\n';

    return 0;
}
