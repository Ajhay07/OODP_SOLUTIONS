/* Write a C++ program to sum of two given integers. However, if the 
   sum is between 105 to 200 it will return 200 */

#include <iostream>

int sum(int a, int b) {
    int result = a + b;
    if (result >= 105 && result <= 200) {
        return 200;
    }
    return result;
}

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> " " >> num2;
    int result = sum(num1, num2);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
