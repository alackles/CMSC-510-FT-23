#include <iostream>
#include <vector>

int make_change(const std::vector<int> & D, int n) {
    int numcoins[n]; 
    numcoins[0] = 0;
    for (int i = 1; i <= n; i++) {
        int best = n;
        for (int denom : D) {
            if (i < denom) {
                break;
            }
            best = std::min(numcoins[i-denom] + 1, best);
        }
        numcoins[i] = best;
    }
    return numcoins[n];
}

int main() {
    std::vector<int> D = {1, 5, 10, 20, 25};
    std::cout << make_change(D, 40) << std::endl;
    std::cout << make_change(D, 50) << std::endl;
    std::cout << make_change(D, 45) << std::endl;
    std::cout << make_change(D, 171) << std::endl;
    std::cout << make_change(D, 102) << std::endl;

}