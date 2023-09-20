#include <iostream>

int iterFactorial(int n) {
    int total = 1;
    while (n > 0) {
        total = total*n;
        n--;
    }
    return total;
}

int factorial(int n) {
    if (n < 1) {
        return 1;
    } else {
        return n * factorial(n-1);
    }
}

int main() {   
    std::cout << iterFactorial(5) << std::endl;
    std::cout << factorial(10) << std::endl;
}