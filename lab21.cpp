#include <iostream>
#include <iomanip>

int main() {
   char symbol;
   
   std::cout << "Enter a symbol: ";
   std::cin >> symbol;
   
   std::cout << "Symbol: " << '\n';
   std::cout << "ASCll-code (10): " << static_cast<int>(symbol) << '\n';
   std::cout << "ASCLL-code (16): 0x"
             <<std::hex << std::uppercase <<static_cast<int>(symbol) << '\n';
             
   return 0;
}
