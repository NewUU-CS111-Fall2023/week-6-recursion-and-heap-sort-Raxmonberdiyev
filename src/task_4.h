/*
 * Author: Raximberdi
 * Date:
 * Name:
 */
#include <cmath>

bool isNumberPrime(int n, int d) {
    if (n <= 1) {
        return false;
    }
    if (d == 1) {
        return true;
    }
    if (n % d == 0) {
        return false;
    }

    return isNumberPrime(n, d - 1);
}

bool isPrime(int n) {
    int d = static_cast<int>(sqrt(n));
    return isNumberPrime(n, d);
}