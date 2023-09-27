#include <iostream>

int fib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);    
    }
}

int fibnums[1000];

int memoFib(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        if (fibnums[n] == 0) {
            fibnums[n] = memoFib(n-1) + memoFib(n-2);
        }
        return fibnums[n]; 
    }
}

int main() {
    std::cout << memoFib(40) << std::endl;
    return 0;
}
