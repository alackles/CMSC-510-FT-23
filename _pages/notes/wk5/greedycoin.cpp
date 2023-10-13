#include <iostream>

int make_change(int amount, int* denom) {
    int num_coins = 0;
    int i = 0;
    while (amount > 0) {
        num_coins += amount / denom[i];
        amount = amount % denom[i];
        i++;
    }
    return num_coins;

}

int main() {
    int denoms[] = {25, 20, 5, 1};
    int coinage = 140;
    int coins = make_change(coinage, denoms);
    std::cout << coins << std::endl;
}