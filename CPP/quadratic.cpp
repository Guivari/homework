#include <iostream>
#include <cmath>

int main() {
    int a, b, c, discriminant;
    double sol1, sol2;
    std::cout << "Please enter the values of a, b, and c: ";
    std::cin >> a >> b >> c;
    
    discriminant = (b*b) - (4 * a * c);
    std::cout << discriminant << std::endl;
    if (discriminant < 0) {
        std::cout << "There is no solution.";
    } else if (discriminant == 0) {
        sol1 = (-1 * b) / 2 * a;
        std::cout << "There is 1 solution. \nThe solution is: " << sol1;
    } else if (discriminant > 0) {
        sol1 = ((-1.0*b) + sqrt(discriminant)) / 2*a;
        sol2 = ((-1.0*b) - sqrt(discriminant)) / 2*a;
        std::cout << "There are 2 solutions. \nThe solutions are: " << sol1 << " and " << sol2;
    }


    return 0;
}