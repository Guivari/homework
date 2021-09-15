#include<iostream>

int main() {
    int collatzNum;
    int repeatCount = 0;

    std::cout << "Enter the first number of the sequence: ";
    std::cin >> collatzNum;

    while (repeatCount < 3) {

        if (collatzNum == 1) {
            repeatCount++;              
        }

        std::cout << collatzNum << " ";

        if (collatzNum % 2 == 0) {
            collatzNum = collatzNum/2;
        } else {
            collatzNum = 3* collatzNum + 1;
        }
    }

    std::cout << "...";

    return 0;
}