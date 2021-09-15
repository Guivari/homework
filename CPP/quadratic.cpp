#include <iostream>
#include <cmath>

int main() {
    float a, b, c, discriminant, sol1, sol2;

    std::cout << "Please enter the values of a, b, and c: ";
    std::cin >> a >> b >> c;
    discriminant = (b*b) - (4 * a * c);

    if (discriminant < 0) {
        std::cout << "There is no solution.";

    } else if (discriminant == 0) {
        sol1 = (-1.0*b) / (2.0*a);
        std::cout << "There is 1 solution.\n\nThe solution is: " << sol1;

    } else if (discriminant > 0) {
        sol1 = ((-1.0*b) + sqrt(discriminant)) / (2.0*a);
        sol2 = ((-1.0*b) - sqrt(discriminant)) / (2.0*a);
        std::cout << "There are 2 solutions.\n\nThe solutions are: " << sol1 << " and " << sol2;
    }

    std::cout << std::endl;

    return 0;
}