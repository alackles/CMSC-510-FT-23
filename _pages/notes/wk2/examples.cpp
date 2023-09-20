#include <iostream>

int evens(int n) {
    int total = 0;    if (n <= 0 ) {
        return 0;
    } else {
        return n + evens(n-2);
    }
}

int peasantMultiply(int x, int y) {
    int prod;
    if (x == 0) {
        return 0;
    } else {
        int xp = x/2;
        int yp = y + y;
        prod = peasantMultiply(xp, yp);
        if (x % 2 != 0) {
            prod += y;
        }
        return prod;
    }
}

int main() {
    std::cout << evens(6) << std::endl;
    std::cout << peasantMultiply(7, 2) << std::endl;
}