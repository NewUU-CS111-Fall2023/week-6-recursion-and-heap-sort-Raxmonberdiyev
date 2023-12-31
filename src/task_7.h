/*
 * Author: Raximberdi
 * Date:
 * Name:
 */

#include <cmath>
int countDigit(int n){
    if (n == 0)
        return 1;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}


int reverseNum(int n, int numberOfDigits){
    if(n < 10){
        return n;
    }
    return (n % 10) * pow(10, numberOfDigits) + reverseNum((n / 10), numberOfDigits - 1);
}