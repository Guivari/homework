// FIBONACCI SEQUENCE (assuming starting with 0 and 1):
// 0 1 1 2 3 5 8 13 21 34
#include <iostream>
int main() {
    int f1 = 0;
    int f2 = 1;
    int f3;
    int count;
    std::cout << std::endl << "FIBONACCI SEQUENCE GENERATOR" << std::endl << "How many fibonacci numbers? (Please input a positive, whole number.): ";
    std::cin >> count;
    
    if (count == 1) {
        std::cout << "Your fibonacci sequence: ";
        std::cout << "0";
    } else if (count == 2) {
        std::cout << "Your fibonacci sequence: ";
        std::cout << "0, 1";
    } else if (count >= 3) {
        std::cout << "Your fibonacci sequence: ";
        std::cout << "0, 1";
        for (int i = count - 2; i > 0; i--) {
            f3 = f1 + f2;
            std::cout << ", " << f3;
            f1 = f2;
            f2 = f3;
        }
    } else {
        std::cout << "I'm sorry, something went wrong. Did you input a positive, whole number greater than 0?\n";
    } 

    return 0;
}