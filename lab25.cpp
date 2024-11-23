#include <iostream>
#include <iomanip> 

int main() {
    double score;

  
    std::cout << "Enter the number of points (0,0 - 9,0): ";
    std::cin >> score;

   
    if (score < 0.0 || score > 9.0) {
        std::cout << "Wrong numbers of points!" << std::endl;
    } else if (score >= 0.0 && score <= 4.4) {
        std::cout << "Rating: Unsatisfactory (2,0)" << std::endl;
    } else if (score >= 4.5 && score <= 5.2) {
        std::cout << "Rating:Satisfactory (3,0)" << std::endl;
    } else if (score >= 5.3 && score <= 6.2) {
        std::cout << "Rating: Above satisfactory (3,5)" << std::endl;
    } else if (score >= 6.3 && score <= 7.2) {
        std::cout << "Rating: Good (4,0)" << std::endl;
    } else if (score >= 7.3 && score <= 8.2) {
        std::cout << "rating: Above good (4,5)" << std::endl;
    } else if (score >= 8.3 && score <= 9.0) {
        std::cout << "Rating: Very well! (5,0)" << std::endl;
    }

    return 0;
}
