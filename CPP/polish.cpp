#include<iostream>
int main() {    
    char instruction;
    double firstNum, secondNum;
    bool on = true;
    while (on == true) {
        std::cout << "Enter the expression: ";
        std::cin >> instruction; 
        if (instruction == 'q') {
            on = false;
            break;
        }
        std::cin >> firstNum >> secondNum;
        switch (instruction){
            case '+':
                std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << std::endl;
                break;
            case '-':
                std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << std::endl;
                break;
            case '/':
                std::cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << std::endl;
                break;
            case '*':
                std::cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << std::endl;
                break;
        }
    }
}